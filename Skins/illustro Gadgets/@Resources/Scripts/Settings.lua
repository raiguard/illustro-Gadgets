isDbg = false

function Initialize()
	
	hexChars = { 	[0]='0', [1]='1', [2]='2', [3]='3', 
				[4]='4', [5]='5', [6]='6', [7]='7', 
				[8]='8', [9]='9', [10]='a', [11]='b', 
				[12]='c', [13]='d', [14]='e', [15]='f' }
	
	page = tonumber(SKIN:GetVariable('page',1))
	
	ulBytes = SKIN:GetVariable('uploadMax')
	dlBytes = SKIN:GetVariable('downloadMax')
	
	SKIN:Bang('!SetOptionGroup','pButtons','FontColor','#*textColor*#')
	
	if (page == 1) then
		SKIN:Bang('!SetOption','page1','FontColor','#*highlightColor*#')
	
	elseif page == 2 then
		SKIN:Bang('!SetOption','page2','FontColor','#*highlightColor*#')
	
		colors = { 	SKIN:GetVariable('colorPrimary'), 
					SKIN:GetVariable('colorSeconary'), 
					SKIN:GetVariable('colorAccent'),
					SKIN:GetVariable('colorDim') }
		
		bars = {	SKIN:GetMeter('ColorsPrimaryAlphaBar'), 
					SKIN:GetMeter('ColorsSecondaryAlphaBar'), 
					SKIN:GetMeter('ColorsAccentAlphaBar')
					SKIN:GetMeter('ColorsDimAlphaBar') }
		
		maxBarW = SKIN:GetMeter('StyleColorsAlphaBarBg'):GetW()
		
		-- set the width of the bars that show the alpha of the three colors
		for i=1,#colors do
			tempW = math.floor(getStringAlphaPercent(colors[i]) * maxBarW)
			SKIN:Bang('!SetOption', bars[i]:GetName(), 'W', tempW)
		end
	
	elseif page == 3 then
		SKIN:Bang('!SetOption','page3','FontColor','#*highlightColor*#')
		
		SKIN:Bang('!SetOption', 'uploadMaxDisplay', 'Text', string.format("%.2f", bytesToMegabits(ulBytes)))
		SKIN:Bang('!SetOption', 'downloadMaxDisplay', 'Text', string.format("%.2f", bytesToMegabits(dlBytes)))
	
	elseif page == 4 then
		SKIN:Bang('!SetOption','page4','FontColor','#*highlightColor*#')
	
	elseif page == 5 then
		SKIN:Bang('!SetOption','page5','FontColor','#*highlightColor*#')
	
	else 
		print('C2: wtf? invalid page number in settings skin')
	end
	SKIN:Bang('!Redraw')
end

function Update()
	
	
end

-- ==========================================================================================
-- Functions used for displaying and changing the transparency of the colors on page 2

-- called from skin - changes alpha value on a color in Appearance.txt
function changeAlpha(color, percent)
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
	SKIN:Bang('!WriteKeyValue','Variables',color,newColor,'#commonSettings.inc#')
end

-- intended to retreive the alpha component of an RGBA or hex color and return as a percent 0.0 to 1.0
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

-- ==========================================================================================
-- Functions for audjusting maximum network speeds on page 3

function setNetworkSpeed(variable, speed)
	SKIN:Bang('!WriteKeyValue', 'Variables', variable, megabitsToBytes(speed), "#@#Settings.txt")
end

function megabitsToBytes(mbits)
	return math.floor((mbits*1024*1024)/8)
end

function bytesToMegabits(bytes)
	return ((bytes*8)/1024/1024)
end

-- ==========================================================================================
-- switched weather unit

function toggleWeatherUnit()
	oldUnit = SKIN:GetVariable('unit','f')
	if (string.lower(oldUnit) == 'f') then 
		SKIN:Bang('!WriteKeyValue', 'Variables', 'unit', 'c', '#@#Settings.txt')	
	elseif (string.lower(oldUnit) == 'c') then
		SKIN:Bang('!WriteKeyValue', 'Variables', 'unit', 'f', '#@#Settings.txt')
	else
		print('C2: error changing weather unit')
	end
	SKIN:Bang('!Refresh', 'CircuitousTwo\\Weather')
	SKIN:Bang('!Refresh', '#CURRENTCONFIG#')
end

-- ==========================================================================================
-- function rewrites appearance.txt and settings.txt with default values

function resetAllVariables()
	
	settingsDefaults = { 
		{ 'hd1', 'C' }, 
		{ 'hd2', 'D' }, 
		{ 'hd3', 'E' },
		{ 'mediaPlayer', 'CAD' },
		{ 'trashMax', '2147483648' },
		{ 'timeFormat', '\"%#H:%M\"' },
		{ 'dateFormat', '"%a, %#d %B"' },
		{ 'timeRoundline', '3' },
		{ 'uploadMax', '393216' },
		{ 'downloadMax', '655360' },
		{ 'woeid', '615702' },
		{ 'unit', 'c' },
		{'sfTempIndex', '2'},
		{'sfVoltIndex', '2'},
		{'sfMaxTemp', '100'}
	}
	
	appearanceDefaults = {
		{ 'innerRingColor', '250,250,250,155' },
		{ 'outerRingColor', '#*innerRingColor*#' },
		{ 'pieBgColor', '100,100,100,51' },
		{ 'pieColor', '250,250,250,230' },
		{ 'TextMainColor', '#*pieColor*#' },
		{ 'TextSubColor', '#*innerRingColor*#' },
		{'bgBarColor', '10,10,10,200'},
		{ 'radius', '36' },
		{ 'innerRadius', '(#*radius*#*0.55)' },
		{ 'edging', '(#*radius*#*0.3)' },
		{ 'orient', 'left' },
		{ 'pieSize', '1.0' },
		{ 'pieStart', '0' },
		{ 'hideInnerEdge', '0' },
		{ 'hideOuterEdge', '0' },
		{ 'hidePieBg', '0' },
		{ 'hideDivider', '0' },
		{ 'hideSubText', '0' },
		{ 'mainFont', 'Sansation' },
		{ 'subFont', '#*mainFont*#' },
		{ 'subTwoLines', '0' },
		{ 'fontStyle', 'Normal' }
	}

	for _,t in pairs(settingsDefaults) do
		SKIN:Bang('!WriteKeyValue', 'Variables', t[1], t[2], '#@#Settings.txt')
	end
	
	for _,t in pairs(appearanceDefaults) do
		SKIN:Bang('!WriteKeyValue', 'Variables', t[1], t[2], '#@#Appearance.txt')
	end
	
	SKIN:Bang('!RefreshGroup', 'circa2')
	
	print('C2: all user settings reset to default')
end