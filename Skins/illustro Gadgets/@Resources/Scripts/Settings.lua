isDbg = true

function Initialize()

	hexChars = { 	[0]='0', [1]='1', [2]='2', [3]='3', 
				[4]='4', [5]='5', [6]='6', [7]='7', 
				[8]='8', [9]='9', [10]='a', [11]='b', 
				[12]='c', [13]='d', [14]='e', [15]='f' }
	
	page = SKIN:GetVariable('pageName')
	
	if page == 'appearance' then
	
		colors = {	SKIN:GetVariable('colorPrimary'), 
					SKIN:GetVariable('colorSecondary'), 
					SKIN:GetVariable('colorAccent'), 
					SKIN:GetVariable('colorDim')  }
					
		bars = {	SKIN:GetMeter('ColorsPrimaryAlphaBar'), 
					SKIN:GetMeter('ColorsSecondaryAlphaBar'), 
					SKIN:GetMeter('ColorsAccentAlphaBar'), 
					SKIN:GetMeter('ColorsDimAlphaBar')  }
		
		maxBarW = SKIN:GetMeter('ColorsPrimaryAlphaBarBg'):GetW()
		
		-- set the width of the alpha bars
		for i=1,#colors do
			tempW = math.floor(getStringAlphaPercent(colors[i]) * maxBarW)
			SKIN:Bang('!SetOption', bars[i]:GetName(), 'W', tempW)
			if isDbg == true then
				print("IG: set width of '" .. tostring(bars[i]:GetName()) .. "'")
			end
		end
	
	else
		print("IG: wtf? invalid subpage id in settings skin!")
	end
end

function Update()


end

-- Transparency manipulation functions

-- called from skin - changes alpha value on a color in the specified file
function changeAlpha(color, percent, filepath)
	baseColor = SKIN:GetVariable(color)
	alpha = math.floor(percent*0.01*255)
	if (string.find(baseColor, ",") ~= nil) then
		rgb = string.match(baseColor, "%d+,%d+,%d+")
		newColor = rgb .. ',' .. alpha
	else
		rgb = string.sub(baseColor,1,6)
		alpha = decToHex(alpha)
		newColor = rgb .. alpha
	end
	SKIN:Bang('!WriteKeyValue','Variables',color, newColor, filepath)
end

-- intended to retrieve the alpha component of an RGBA or hex color and return as a percent 0.0 to 1.0
function getStringAlphaPercent(color)
	local alpha
	if (string.find(color, ",") ~= nil) then
		
		rgbIt = string.gmatch(color,"%d+")
		rgbTable = {}
		for match in rgbIt do
			table.insert(rgbTable, match)
		end
		
		if (#rgbTable < 4) then
			alpha = 1
		else
			alpha = (rgbTable[4] / 255)
			alpha = string.format("%.2f",alpha)
		end
	else
		if (string.len(color)) > 6 then
			alpha = hexToDec(string.sub(color,7,8))
			alpha = (alpha / 255)
			alpha = string.format("%.2f",alpha)
		else
			alpha = 1
		end
	end
	return tonumber(alpha)
end

-- converts a hexadecimal string to a decimal number
function hexToDec(hexNum)
	hexNum = string.lower(hexNum)
	sum = 0
	for i=1,#hexNum,1 do
		sum = sum + (findHexChar(string.sub(hexNum,i,i)) * 16^(#hexNum-i))
	end
	return sum
end

-- converts decimal number to hexadecimal string
function decToHex(decNum)
	local result = {}
	while (decNum > 0) do
		table.insert(result, 1, hexChars[math.fmod(decNum, 16)])
		decNum = math.floor(decNum / 16)
	end
	return table.concat(result,'',1,#result)
end

-- linearly searches hexChar array for a given character and returns its index
function findHexChar(char)
	for i=0,#hexChars do
		if hexChars[i] == char then
			return i
		end
	end
	return -1
end