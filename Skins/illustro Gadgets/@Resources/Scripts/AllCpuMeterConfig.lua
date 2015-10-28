--
-- CpuMeter v1.9.0 by SilverAzide
--
-- This work is licensed under a Creative Commons Attribution-Noncommercial-Share Alike 3.0 License.
--
-- History:
-- 1.9.0 - 2015-08-31:  Corrected mapping of physical cores to logical cores
-- 1.4.2 - 2015-06-17:  Editorial change only.
-- 1.4.1 - 2015-06-09:  Initial release.
--
----------------------------------------------------------------------------------------------------
--
-- This script is used to configure temperature measures and meters in the All CPU Meter gadget.
--
----------------------------------------------------------------------------------------------------
--
function Initialize()
  --
  -- this function is called when the script measure is initialized or reloaded
  --

  -- initialize array of measure names
  asCoreTempMeasures = { "MeasureCoreTempCpu1",
                         "MeasureCoreTempCpu2",
                         "MeasureCoreTempCpu3",
                         "MeasureCoreTempCpu4",
                         "MeasureCoreTempCpu5",
                         "MeasureCoreTempCpu6",
                         "MeasureCoreTempCpu7",
                         "MeasureCoreTempCpu8",
                         "MeasureCoreTempCpu9",
                         "MeasureCoreTempCpu10",
                         "MeasureCoreTempCpu11",
                         "MeasureCoreTempCpu12",
                         "MeasureCoreTempCpu13",
                         "MeasureCoreTempCpu14",
                         "MeasureCoreTempCpu15",
                         "MeasureCoreTempCpu16" }

  asSpeedFanMeasures = { "MeasureSpeedFanCpu1",
                         "MeasureSpeedFanCpu2",
                         "MeasureSpeedFanCpu3",
                         "MeasureSpeedFanCpu4",
                         "MeasureSpeedFanCpu5",
                         "MeasureSpeedFanCpu6",
                         "MeasureSpeedFanCpu7",
                         "MeasureSpeedFanCpu8",
                         "MeasureSpeedFanCpu9",
                         "MeasureSpeedFanCpu10",
                         "MeasureSpeedFanCpu11",
                         "MeasureSpeedFanCpu12",
                         "MeasureSpeedFanCpu13",
                         "MeasureSpeedFanCpu14",
                         "MeasureSpeedFanCpu15",
                         "MeasureSpeedFanCpu16" }

  asHWiNFOMeasures = { "MeasureCPUTempCore1HWiNFO",
                       "MeasureCPUTempCore2HWiNFO",
                       "MeasureCPUTempCore3HWiNFO",
                       "MeasureCPUTempCore4HWiNFO",
                       "MeasureCPUTempCore5HWiNFO",
                       "MeasureCPUTempCore6HWiNFO",
                       "MeasureCPUTempCore7HWiNFO",
                       "MeasureCPUTempCore8HWiNFO",
                       "MeasureCPUTempCore9HWiNFO",
                       "MeasureCPUTempCore10HWiNFO",
                       "MeasureCPUTempCore11HWiNFO",
                       "MeasureCPUTempCore12HWiNFO",
                       "MeasureCPUTempCore13HWiNFO",
                       "MeasureCPUTempCore14HWiNFO",
                       "MeasureCPUTempCore15HWiNFO",
                       "MeasureCPUTempCore16HWiNFO" }

  return
end                                                                                    -- Initialize

function Configure(sType)
  --
  -- this function configures the temperature measures for use with CoreTemp or SpeedFan
  --
  -- Where:  sType = 0 for no monitoring detected or monitoring disabled
  --                 1 for CoreTemp
  --                 2 for SpeedFan
  --
  local aMeasureNames
  local i
  local nIndex
  local nType = tonumber(sType)
  local nDisabled = tonumber(SKIN:GetVariable("DisableTemps", "1"))
  local nTotalCores = tonumber(SKIN:GetVariable("TotalCores", "1"))
  local nThreadsPerCore = tonumber(SKIN:GetVariable("ThreadsPerCore", "1"))

  -- validate configuration type and log info
  if nType == 1 then
    SKIN:Bang("!Log", "CoreTemp detected.", "Notice")

    aMeasureNames = asCoreTempMeasures

  elseif nType == 2 then
    SKIN:Bang("!Log", "SpeedFan detected.", "Notice")

    aMeasureNames = asSpeedFanMeasures

  else
    nType = 0
    aMeasureNames = asCoreTempMeasures

    if nDisabled == 0 then
      SKIN:Bang("!Log", "No temperature monitor detected.", "Warning")
    end
  end

  -- set the CPU core display meters to show/hide temperatures
  for i = 1, #aMeasureNames do
    if nType == 0 then
      -- configure temperature meter
      SKIN:Bang("!SetOption", "MeterCore" .. i, "MeasureName", "")
      SKIN:Bang("!SetOption", "MeterCore" .. i, "Text", "Core " .. i)

      -- disable temperature measures
      SKIN:Bang("!DisableMeasure", asCoreTempMeasures[i])
      SKIN:Bang("!DisableMeasure", asSpeedFanMeasures[i])
    else
      -- calculate measure index (the physical core corresponding to the logical core)
      nIndex = math.floor((i - 1) / nThreadsPerCore)

      -- configure temperature measures
      SKIN:Bang("!SetOption", asCoreTempMeasures[i], "CoreTempIndex", nIndex)
      SKIN:Bang("!SetOption", asSpeedFanMeasures[i], "SpeedFanNumber", nIndex)

      -- configure temperature meter
      SKIN:Bang("!SetOption", "MeterCore" .. i, "MeasureName", aMeasureNames[i])
      SKIN:Bang("!SetOption", "MeterCore" .. i, "Text", i .. " [%1°#TempUOM#]")

      -- enable/disable temperature measures
      if i > nTotalCores then
        SKIN:Bang("!DisableMeasure", asCoreTempMeasures[i])
        SKIN:Bang("!DisableMeasure", asSpeedFanMeasures[i])
      else
        if nType == 1 then
          SKIN:Bang("!EnableMeasure", asCoreTempMeasures[i])
          SKIN:Bang("!DisableMeasure", asSpeedFanMeasures[i])
        else
          SKIN:Bang("!DisableMeasure", asCoreTempMeasures[i])
          SKIN:Bang("!EnableMeasure", asSpeedFanMeasures[i])
        end
      end
    end
  end

  -- force temperature measures to be reloaded
  for i = 1, #asCoreTempMeasures do
    SKIN:Bang("!SetOption", asCoreTempMeasures[i], "Reload", 1)
  end
  for i = 1, #asSpeedFanMeasures do
    SKIN:Bang("!SetOption", asSpeedFanMeasures[i], "Reload", 1)
  end

  return
end                                                                                     -- Configure

function ConfigureHWiNFO(sType)
  --
  -- this function configures the temperature measures for use with HWiNFO
  --
  -- Where:  sType = 0 for no monitoring detected or monitoring disabled
  --                 1 for HWiNFO
  --
  local aMeasureNames = asHWiNFOMeasures
  local i
  local nIndex
  local nType = tonumber(sType)
  local nDisabled = tonumber(SKIN:GetVariable("disableTemps", "1"))
  local nTotalCores = tonumber(SKIN:GetVariable("totalCores", "1"))
  local nThreadsPerCore = tonumber(SKIN:GetVariable("threadsPerCore", "1"))

  -- validate configuration type and log info
  if nType == 1 then
    SKIN:Bang("!Log", "HWiNFO detected.", "Notice")

  else
    nType = 0

    if nDisabled == 0 then
      SKIN:Bang("!Log", "No temperature monitor detected.", "Warning")
    end
  end

  -- set the CPU core display meters to show/hide temperatures
  for i = 1, #aMeasureNames do
    if nType == 0 then
      -- disable temperature measure
      SKIN:Bang("!DisableMeasure", aMeasureNames[i])
    else
      -- calculate measure index (the physical core corresponding to the logical core)
      nIndex = math.floor((i - 1) / nThreadsPerCore)

      -- configure temperature measure
      SKIN:Bang("!SetOption", aMeasureNames[i], "HWiNFOEntryId", "#HWiNFO-CPU0-DTS-Core" .. nIndex .. "Temp#")

      -- enable/disable temperature measure
      if i > nTotalCores then
        SKIN:Bang("!DisableMeasure", aMeasureNames[i])
      else
        SKIN:Bang("!EnableMeasure", aMeasureNames[i])
      end
    end
  end

  -- force temperature measures to be reloaded
  for i = 1, #asHWiNFOMeasures do
    SKIN:Bang("!SetOption", asHWiNFOMeasures[i], "Reload", 1)
  end

  return
end                                                                               -- ConfigureHWiNFO
