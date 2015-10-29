[MeasureCPUTempCore1]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore2]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) ||  (#hideCore2#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore3]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core1Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore3#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore4]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core1Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore4#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore5]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core2Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore5#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore6]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core2Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore6#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore7]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core3Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore7#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore8]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core3Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore8#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore9]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core4Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore9#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore10]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core4Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore10#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore11]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core5Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore11#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore12]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core5Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore12#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore13]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core6Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore13#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore14]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core6Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore14#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore15]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core7Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore15#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore16]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core7Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore16#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1
