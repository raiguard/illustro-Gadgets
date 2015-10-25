[MeasureCPUTempCore1HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore2HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core0Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) ||  (#hideCore2#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore3HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core1Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore3#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore4HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core1Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore4#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore5HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core2Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore5#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore6HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core2Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore6#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore7HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core3Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore7#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore8HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core3Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore8#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore9HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core4Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore9#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore10HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core4Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore10#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore11HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core5Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore11#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore12HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core5Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore12#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore13HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core6Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore13#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore14HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core6Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore14#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore15HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core7Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore15#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1

[MeasureCPUTempCore16HWiNFO]
Measure=Plugin
Plugin=HWiNFO
HWiNFOSensorId=#HWiNFO-CPU0-DTS-SensorId#
HWiNFOSensorInstance=#HWiNFO-CPU0-DTS-SensorInstance#
HWiNFOEntryId=#HWiNFO-CPU0-DTS-Core7Temp#
HWiNFOType=CurrentValue
Disabled=(#disableTemps#) || (#hideCore16#) || (#isHWiNFOInUse# = 0)
DynamicVariables=1
