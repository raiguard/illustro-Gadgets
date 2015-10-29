-- 
-- ILLUSTRO GADGETS 0.7.0-d.4
-- By iamanai
--
-- Variable Manipulation Script 1.0.0-d.1 
--
-- This work is licensed under a Creative Commons Attribution-Noncommercial-Share Alike 3.0 License.
--
-- History:
-- 1.0.0: Initial release
--
--
----------------------------------------------------------------------------------------------------
--
-- This script is used by the settings skin to manipulate variables
--
----------------------------------------------------------------------------------------------------

function Initialize()

end

function ToggleVariable(varName)
--
--  This function switches the specified variable from 0 to 1, or from 1 to 0
--

	local varCurValue = tonumber(SKIN:GetVariable(varName, "1"))
	local lVarPath = tonumber(SKIN:GetVariable(varPath2, "1"))
	
	if varCurValue == 0 then
		SKIN:Bang("!WriteKeyValue", varName, 1, lVarPath)
		SKIN:Bang("!Log", "Toggling '" .. varName .. "' to 0", "Notice")
	
	else
		if varCurValue == 1 then
			SKIN:Bang("!WriteKeyValue", varName, 0, lVarPath)
			SKIN:Bang("!Log", "Toggling '" .. varName .. "' to 1", "Notice")
		
		else
			SKIN:Bang("!Log", "Unable to toggle '" .. varName .. "', for it is an untogglable variable", "Warning")
		end
	end
end