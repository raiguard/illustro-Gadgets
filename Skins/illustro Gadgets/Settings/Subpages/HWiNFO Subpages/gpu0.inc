[Variables]
bgHeight=470

[MeasureInputHWiNFOConfigGpu0]
Measure=Plugin
Plugin=InputText
SolidColor=#colorInputTextBackground#
FontColor=#colorInputTextFont#
FontSize=#fontSize#
StringStyle=Bold
UpdateDivider=-1
FocusDismiss=1
W=80
Command1=[!WriteKeyValue Variables HWiNFO-GPU0-SensorId "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-SensorId#" X=[Gpu0SensorIdValue:X] Y=[Gpu0SensorIdValue:Y] H=[Gpu0SensorIdValue:H]
Command2=[!WriteKeyValue Variables HWiNFO-GPU0-SensorInstance "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-SensorInstance#" X=[Gpu0SensorInstanceValue:X] Y=[Gpu0SensorInstanceValue:Y] H=[Gpu0SensorInstanceValue:H]
Command3=[!WriteKeyValue Variables HWiNFO-GPU0-Clock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-Clock#" X=[Gpu0ClockValue:X] Y=[Gpu0ClockValue:Y] H=[Gpu0ClockValue:H]
Command4=[!WriteKeyValue Variables HWiNFO-GPU0-Temp "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-Temp#" X=[Gpu0TempValue:X] Y=[Gpu0TempValue:Y] H=[Gpu0TempValue:H]
Command5=[!WriteKeyValue Variables HWiNFO-GPU0-CoreLoad "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-CoreLoad#" X=[Gpu0CoreLoadValue:X] Y=[Gpu0CoreLoadValue:Y] H=[Gpu0CoreLoadValue:H]
Command6=[!WriteKeyValue Variables HWiNFO-GPU0-MemoryClock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-MemoryClock#" X=[Gpu0MemoryClockValue:X] Y=[Gpu0MemoryClockValue:Y] H=[Gpu0MemoryClockValue:H]
Command7=[!WriteKeyValue Variables HWiNFO-GPU0-MemoryUsage "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-MemoryUsage#" X=[Gpu0MemoryUsageValue:X] Y=[Gpu0MemoryUsageValue:Y] H=[Gpu0MemoryUsageValue:H]
Command8=[!WriteKeyValue Variables HWiNFO-GPU0-MemoryAlloc "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-MemoryAlloc#" X=[Gpu0MemoryAllocValue:X] Y=[Gpu0MemoryAllocValue:Y] H=[Gpu0MemoryAllocValue:H]
Command9=[!WriteKeyValue Variables HWiNFO-GPU0-FanSpeed "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-FanSpeed#" X=[Gpu0FanSpeedValue:X] Y=[Gpu0FanSpeedValue:Y] H=[Gpu0FanSpeedValue:H]
Command10=[!WriteKeyValue Variables HWiNFO-GPU0-FanUsage "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-FanUsage#" X=[Gpu0FanUsageValue:X] Y=[Gpu0FanUsageValue:Y] H=[Gpu0FanUsageValue:H]
Command11=[!WriteKeyValue Variables HWiNFO-GPU0-MemController "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-MemController#" X=[Gpu0MemControllerValue:X] Y=[Gpu0MemControllerValue:Y] H=[Gpu0MemControllerValue:H]
Command12=[!WriteKeyValue Variables HWiNFO-GPU0-CoreVoltage "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-CoreVoltage#" X=[Gpu0CoreVoltageValue:X] Y=[Gpu0CoreVoltageValue:Y] H=[Gpu0CoreVoltageValue:H]
Command13=[!WriteKeyValue Variables HWiNFO-GPU0-VideoClock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU0-VideoClock#" X=[Gpu0VideoClockValue:X] Y=[Gpu0VideoClockValue:Y] H=[Gpu0VideoClockValue:H]

; ----- Sensor IDs -----

[Gpu0SensorIdLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-SensorId:"

[Gpu0SensorIdValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0SensorIdLabel:W] + 2)r
Text="#HWiNFO-GPU0-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 1"]

[Gpu0SensorInstanceLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-SensorInstance:"

[Gpu0SensorInstanceValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0SensorInstanceLabel:W] + 2)r
Text="#HWiNFO-GPU0-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 2"]

[Gpu0ClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-Clock:"

[Gpu0ClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0ClockLabel:W] + 2)r
Text="#HWiNFO-GPU0-Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 3"]

[Gpu0TempLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-Temp:"

[Gpu0TempValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0TempLabel:W] + 2)r
Text="#HWiNFO-GPU0-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 4"]

[Gpu0CoreLoadLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-CoreLoad:"

[Gpu0CoreLoadValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0CoreLoadLabel:W] + 2)r
Text="#HWiNFO-GPU0-CoreLoad#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 5"]

[Gpu0MemoryClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-MemoryClock:"

[Gpu0MemoryClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0MemoryClockLabel:W] + 2)r
Text="#HWiNFO-GPU0-MemoryClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 6"]

[Gpu0MemoryUsageLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-MemoryUsage:"

[Gpu0MemoryUsageValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0MemoryUsageLabel:W] + 2)r
Text="#HWiNFO-GPU0-MemoryUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 7"]

[Gpu0MemoryAllocLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-MemoryAlloc:"

[Gpu0MemoryAllocValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0MemoryAllocLabel:W] + 2)r
Text="#HWiNFO-GPU0-MemoryAlloc#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 8"]

[Gpu0FanSpeedLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-FanSpeed:"

[Gpu0FanSpeedValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0FanSpeedLabel:W] + 2)r
Text="#HWiNFO-GPU0-FanSpeed#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 9"]

[Gpu0FanUsageLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-FanUsage:"

[Gpu0FanUsageValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0FanUsageLabel:W] + 2)r
Text="#HWiNFO-GPU0-FanUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 10"]

[Gpu0VideoClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-VideoClock:"

[Gpu0VideoClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0VideoClockLabel:W] + 2)r
Text="#HWiNFO-GPU0-VideoClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 13"]

[Gpu0MemControllerLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-MemController:"

[Gpu0MemControllerValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0MemControllerLabel:W] + 2)r
Text="#HWiNFO-GPU0-MemController#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 11"]

[Gpu0CoreVoltageLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU0-CoreVoltage:"

[Gpu0CoreVoltageValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu0CoreVoltageLabel:W] + 2)r
Text="#HWiNFO-GPU0-CoreVoltage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 12"]