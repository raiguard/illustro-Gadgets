[Variables]
bgHeight=570

[MeasureInputHWiNFOConfigCpu0]
Measure=Plugin
Plugin=InputText
SolidColor=#colorInputTextBackground#
FontColor=#colorInputTextFont#
FontSize=#fontSize#
StringStyle=Bold
UpdateDivider=-1
FocusDismiss=1
W=80
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-SensorId "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-SensorId#" X=[Cpu0SensorIdValue:X] Y=[Cpu0SensorIdValue:Y] H=[Cpu0SensorIdValue:H]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-SensorInstance "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-SensorInstance#" X=[Cpu0SensorInstanceValue:X] Y=[Cpu0SensorInstanceValue:Y] H=[Cpu0SensorInstanceValue:H]
Command3=[!WriteKeyValue Variables HWiNFO-CPU0-Usage "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Usage#" X=[Cpu0UsageValue:X] Y=[Cpu0UsageValue:Y] H=[Cpu0UsageValue:H]
Command4=[!WriteKeyValue Variables HWiNFO-CPU0-Core0Clock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core0Clock#" X=[Cpu0Core0ClockValue:X] Y=[Cpu0Core0ClockValue:Y] H=[Cpu0Core0ClockValue:H]
Command5=[!WriteKeyValue Variables HWiNFO-CPU0-Core1Clock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core1Clock#" X=[Cpu0Core1ClockValue:X] Y=[Cpu0Core1ClockValue:Y] H=[Cpu0Core1ClockValue:H]
Command6=[!WriteKeyValue Variables HWiNFO-CPU0-Core2Clock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core2Clock#" X=[Cpu0Core2ClockValue:X] Y=[Cpu0Core2ClockValue:Y] H=[Cpu0Core2ClockValue:H]
Command7=[!WriteKeyValue Variables HWiNFO-CPU0-Core3Clock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core3Clock#" X=[Cpu0Core3ClockValue:X] Y=[Cpu0Core3ClockValue:Y] H=[Cpu0Core3ClockValue:H]
Command8=[!WriteKeyValue Variables HWiNFO-CPU0-Core4Clock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core4Clock#" X=[Cpu0Core4ClockValue:X] Y=[Cpu0Core4ClockValue:Y] H=[Cpu0Core4ClockValue:H]
Command9=[!WriteKeyValue Variables HWiNFO-CPU0-Core5Clock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core5Clock#" X=[Cpu0Core5ClockValue:X] Y=[Cpu0Core5ClockValue:Y] H=[Cpu0Core5ClockValue:H]
Command10=[!WriteKeyValue Variables HWiNFO-CPU0-Core6Clock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core6Clock#" X=[Cpu0Core6ClockValue:X] Y=[Cpu0Core6ClockValue:Y] H=[Cpu0Core6ClockValue:H]
Command11=[!WriteKeyValue Variables HWiNFO-CPU0-Core7Clock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core7Clock#" X=[Cpu0Core7ClockValue:X] Y=[Cpu0Core7ClockValue:Y] H=[Cpu0Core7ClockValue:H]
Command12=[!WriteKeyValue Variables HWiNFO-CPU0-Core0Volts "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core0Volts#" X=[Cpu0Core0VoltsValue:X] Y=[Cpu0Core0VoltsValue:Y] H=[Cpu0Core0VoltsValue:H]
Command13=[!WriteKeyValue Variables HWiNFO-CPU0-Core1Volts "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core1Volts#" X=[Cpu0Core1VoltsValue:X] Y=[Cpu0Core1VoltsValue:Y] H=[Cpu0Core1VoltsValue:H]
Command14=[!WriteKeyValue Variables HWiNFO-CPU0-Core2Volts "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core2Volts#" X=[Cpu0Core2VoltsValue:X] Y=[Cpu0Core2VoltsValue:Y] H=[Cpu0Core2VoltsValue:H]
Command15=[!WriteKeyValue Variables HWiNFO-CPU0-Core3Volts "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core3Volts#" X=[Cpu0Core3VoltsValue:X] Y=[Cpu0Core3VoltsValue:Y] H=[Cpu0Core3VoltsValue:H]
Command16=[!WriteKeyValue Variables HWiNFO-CPU0-Core4Volts "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core4Volts#" X=[Cpu0Core4VoltsValue:X] Y=[Cpu0Core4VoltsValue:Y] H=[Cpu0Core4VoltsValue:H]
Command17=[!WriteKeyValue Variables HWiNFO-CPU0-Core5Volts "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core5Volts#" X=[Cpu0Core5VoltsValue:X] Y=[Cpu0Core5VoltsValue:Y] H=[Cpu0Core5VoltsValue:H]
Command18=[!WriteKeyValue Variables HWiNFO-CPU0-Core6Volts "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core6Volts#" X=[Cpu0Core6VoltsValue:X] Y=[Cpu0Core6VoltsValue:Y] H=[Cpu0Core6VoltsValue:H]
Command19=[!WriteKeyValue Variables HWiNFO-CPU0-Core7Volts "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-Core7Volts#" X=[Cpu0Core7VoltsValue:X] Y=[Cpu0Core7VoltsValue:Y] H=[Cpu0Core7VoltsValue:H]

; ----- Sensor IDs -----

; CPU 0
[Cpu0SensorIdLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-SensorId:"

[Cpu0SensorIdValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0SensorIdLabel:W] + 2)r
Text="#HWiNFO-CPU0-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 1"]

[Cpu0SensorInstanceLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-SensorInstance:"

[Cpu0SensorInstanceValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0SensorInstanceLabel:W] + 2)r
Text="#HWiNFO-CPU0-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 2"]

[Cpu0UsageLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Usage:"

[Cpu0UsageValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0UsageLabel:W] + 2)r
Text="#HWiNFO-CPU0-Usage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 3"]

[Cpu0Core0ClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core0Clock:"

[Cpu0Core0ClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core0ClockLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core0Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 4"]

[Cpu0Core1ClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core1Clock:"

[Cpu0Core1ClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core1ClockLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core1Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 5"]

[Cpu0Core2ClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core2Clock:"

[Cpu0Core2ClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core2ClockLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core2Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 6"]

[Cpu0Core3ClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core3Clock:"

[Cpu0Core3ClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core3ClockLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core3Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 7"]

[Cpu0Core4ClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core4Clock:"

[Cpu0Core4ClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core4ClockLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core4Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 8"]

[Cpu0Core5ClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core5Clock:"

[Cpu0Core5ClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core5ClockLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core5Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 9"]

[Cpu0Core6ClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core6Clock:"

[Cpu0Core6ClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core6ClockLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core6Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 10"]

[Cpu0Core7ClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core7Clock:"

[Cpu0Core7ClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core7ClockLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core7Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 11"]

[Cpu0Core0VoltsLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core0Volts:"

[Cpu0Core0VoltsValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core0VoltsLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core0Volts#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 12"]

[Cpu0Core1VoltsLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core1Volts:"

[Cpu0Core1VoltsValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core1VoltsLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core1Volts#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 13"]

[Cpu0Core2VoltsLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core2Volts:"

[Cpu0Core2VoltsValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core2VoltsLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core2Volts#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 14"]

[Cpu0Core3VoltsLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core3Volts:"

[Cpu0Core3VoltsValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core3VoltsLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core3Volts#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 15"]

[Cpu0Core4VoltsLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core4Volts:"

[Cpu0Core4VoltsValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core4VoltsLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core4Volts#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 16"]

[Cpu0Core5VoltsLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core5Volts:"

[Cpu0Core5VoltsValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core5VoltsLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core5Volts#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 17"]

[Cpu0Core6VoltsLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core6Volts:"

[Cpu0Core6VoltsValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core6VoltsLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core6Volts#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 18"]

[Cpu0Core7VoltsLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-Core7Volts:"

[Cpu0Core7VoltsValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0Core7VoltsLabel:W] + 2)r
Text="#HWiNFO-CPU0-Core7Volts#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 19"]