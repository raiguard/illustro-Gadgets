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
Command1=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-SensorId "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-SensorId#" X=[Cpu0DtsSensorIdValue:X] Y=[Cpu0DtsSensorIdValue:Y] H=[Cpu0DtsSensorIdValue:H]
Command2=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-SensorInstance "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-SensorInstance#" X=[Cpu0DtsSensorInstanceValue:X] Y=[Cpu0DtsSensorInstanceValue:Y] H=[Cpu0DtsSensorInstanceValue:H]
Command3=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core0Temp "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core0Temp#" X=[Cpu0DtsCore0TempValue:X] Y=[Cpu0DtsCore0TempValue:Y] H=[Cpu0DtsCore0TempValue:H]
Command4=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core1Temp "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core1Temp#" X=[Cpu0DtsCore1TempValue:X] Y=[Cpu0DtsCore1TempValue:Y] H=[Cpu0DtsCore1TempValue:H]
Command5=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core2Temp "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core2Temp#" X=[Cpu0DtsCore2TempValue:X] Y=[Cpu0DtsCore2TempValue:Y] H=[Cpu0DtsCore2TempValue:H]
Command6=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core3Temp "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core3Temp#" X=[Cpu0DtsCore3TempValue:X] Y=[Cpu0DtsCore3TempValue:Y] H=[Cpu0DtsCore3TempValue:H]
Command7=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core4Temp "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core4Temp#" X=[Cpu0DtsCore4TempValue:X] Y=[Cpu0DtsCore4TempValue:Y] H=[Cpu0DtsCore4TempValue:H]
Command8=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core5Temp "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core5Temp#" X=[Cpu0DtsCore5TempValue:X] Y=[Cpu0DtsCore5TempValue:Y] H=[Cpu0DtsCore5TempValue:H]
Command9=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core6Temp "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core6Temp#" X=[Cpu0DtsCore6TempValue:X] Y=[Cpu0DtsCore6TempValue:Y] H=[Cpu0DtsCore6TempValue:H]
Command10=[!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core7Temp "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-CPU0-DTS-Core7Temp#" X=[Cpu0DtsCore7TempValue:X] Y=[Cpu0DtsCore7TempValue:Y] H=[Cpu0DtsCore7TempValue:H]

; ----- Sensor IDs -----

[Cpu0DtsSensorIdLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-DTS-SensorId:"

[Cpu0DtsSensorIdValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0DtsSensorIdLabel:W] + 2)r
Text="#HWiNFO-CPU0-DTS-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 1"]

[Cpu0DtsSensorInstanceLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-DTS-SensorInstance:"

[Cpu0DtsSensorInstanceValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0DtsSensorInstanceLabel:W] + 2)r
Text="#HWiNFO-CPU0-DTS-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 2"]

[Cpu0DtsCore0TempLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-DTS-Core0Temp:"

[Cpu0DtsCore0TempValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0DtsCore0TempLabel:W] + 2)r
Text="#HWiNFO-CPU0-DTS-Core0Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 3"]

[Cpu0DtsCore1TempLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-DTS-Core1Temp:"

[Cpu0DtsCore1TempValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0DtsCore1TempLabel:W] + 2)r
Text="#HWiNFO-CPU0-DTS-Core1Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 4"]

[Cpu0DtsCore2TempLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-DTS-Core2Temp:"

[Cpu0DtsCore2TempValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0DtsCore2TempLabel:W] + 2)r
Text="#HWiNFO-CPU0-DTS-Core2Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 5"]

[Cpu0DtsCore3TempLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-DTS-Core3Temp:"

[Cpu0DtsCore3TempValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0DtsCore3TempLabel:W] + 2)r
Text="#HWiNFO-CPU0-DTS-Core3Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 6"]

[Cpu0DtsCore4TempLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-DTS-Core4Temp:"

[Cpu0DtsCore4TempValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0DtsCore4TempLabel:W] + 2)r
Text="#HWiNFO-CPU0-DTS-Core4Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 7"]

[Cpu0DtsCore5TempLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-DTS-Core5Temp:"

[Cpu0DtsCore5TempValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0DtsCore5TempLabel:W] + 2)r
Text="#HWiNFO-CPU0-DTS-Core5Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 8"]

[Cpu0DtsCore6TempLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-DTS-Core6Temp:"

[Cpu0DtsCore6TempValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0DtsCore6TempLabel:W] + 2)r
Text="#HWiNFO-CPU0-DTS-Core6Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 9"]

[Cpu0DtsCore7TempLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-CPU0-DTS-Core7Temp:"

[Cpu0DtsCore7TempValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Cpu0DtsCore7TempLabel:W] + 2)r
Text="#HWiNFO-CPU0-DTS-Core7Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigCpu0 "Executebatch 10"]