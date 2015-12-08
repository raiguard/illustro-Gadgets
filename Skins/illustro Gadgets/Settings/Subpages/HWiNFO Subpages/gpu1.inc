[Variables]
bgHeight=460

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
Command1=[!WriteKeyValue Variables HWiNFO-GPU1-SensorId "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-SensorId#" X=[Gpu1SensorIdValue:X] Y=[Gpu1SensorIdValue:Y] H=[Gpu1SensorIdValue:H]
Command2=[!WriteKeyValue Variables HWiNFO-GPU1-SensorInstance "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-SensorInstance#" X=[Gpu1SensorInstanceValue:X] Y=[Gpu1SensorInstanceValue:Y] H=[Gpu1SensorInstanceValue:H]
Command3=[!WriteKeyValue Variables HWiNFO-GPU1-Clock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-Clock#" X=[Gpu1ClockValue:X] Y=[Gpu1ClockValue:Y] H=[Gpu1ClockValue:H]
Command4=[!WriteKeyValue Variables HWiNFO-GPU1-Temp "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-Temp#" X=[Gpu1TempValue:X] Y=[Gpu1TempValue:Y] H=[Gpu1TempValue:H]
Command5=[!WriteKeyValue Variables HWiNFO-GPU1-CoreLoad "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-CoreLoad#" X=[Gpu1CoreLoadValue:X] Y=[Gpu1CoreLoadValue:Y] H=[Gpu1CoreLoadValue:H]
Command6=[!WriteKeyValue Variables HWiNFO-GPU1-MemoryClock "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-MemoryClock#" X=[Gpu1MemoryClockValue:X] Y=[Gpu1MemoryClockValue:Y] H=[Gpu1MemoryClockValue:H]
Command7=[!WriteKeyValue Variables HWiNFO-GPU1-MemoryUsage "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-MemoryUsage#" X=[Gpu1MemoryUsageValue:X] Y=[Gpu1MemoryUsageValue:Y] H=[Gpu1MemoryUsageValue:H]
Command8=[!WriteKeyValue Variables HWiNFO-GPU1-MemoryAlloc "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-MemoryAlloc#" X=[Gpu1MemoryAllocValue:X] Y=[Gpu1MemoryAllocValue:Y] H=[Gpu1MemoryAllocValue:H]
Command9=[!WriteKeyValue Variables HWiNFO-GPU1-FanSpeed "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-FanSpeed#" X=[Gpu1FanSpeedValue:X] Y=[Gpu1FanSpeedValue:Y] H=[Gpu1FanSpeedValue:H]
Command10=[!WriteKeyValue Variables HWiNFO-GPU1-FanUsage "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-FanUsage#" X=[Gpu1FanUsageValue:X] Y=[Gpu1FanUsageValue:Y] H=[Gpu1FanUsageValue:H]
Command11=[!WriteKeyValue Variables HWiNFO-GPU1-MemController "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-MemController#" X=[Gpu1MemControllerValue:X] Y=[Gpu1MemControllerValue:Y] H=[Gpu1MemControllerValue:H]
Command12=[!WriteKeyValue Variables HWiNFO-GPU1-CoreVoltage "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup GPUMeter][!Refresh] DefaultValue="#HWiNFO-GPU1-CoreVoltage#" X=[Gpu1CoreVoltageValue:X] Y=[Gpu1CoreVoltageValue:Y] H=[Gpu1CoreVoltageValue:H]

; ----- Sensor IDs -----

[Gpu1SensorIdLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-SensorId:"

[Gpu1SensorIdValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1SensorIdLabel:W] + 2)r
Text="#HWiNFO-GPU1-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 1"]

[Gpu1SensorInstanceLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-SensorInstance:"

[Gpu1SensorInstanceValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1SensorInstanceLabel:W] + 2)r
Text="#HWiNFO-GPU1-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 2"]

[Gpu1ClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-Clock:"

[Gpu1ClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1ClockLabel:W] + 2)r
Text="#HWiNFO-GPU1-Clock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 3"]

[Gpu1TempLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-Temp:"

[Gpu1TempValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1TempLabel:W] + 2)r
Text="#HWiNFO-GPU1-Temp#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 4"]

[Gpu1CoreLoadLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-CoreLoad:"

[Gpu1CoreLoadValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1CoreLoadLabel:W] + 2)r
Text="#HWiNFO-GPU1-CoreLoad#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 5"]

[Gpu1MemoryClockLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-MemoryClock:"

[Gpu1MemoryClockValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1MemoryClockLabel:W] + 2)r
Text="#HWiNFO-GPU1-MemoryClock#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 6"]

[Gpu1MemoryUsageLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-MemoryUsage:"

[Gpu1MemoryUsageValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1MemoryUsageLabel:W] + 2)r
Text="#HWiNFO-GPU1-MemoryUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 7"]

[Gpu1MemoryAllocLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-MemoryAlloc:"

[Gpu1MemoryAllocValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1MemoryAllocLabel:W] + 2)r
Text="#HWiNFO-GPU1-MemoryAlloc#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 8"]

[Gpu1FanSpeedLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-FanSpeed:"

[Gpu1FanSpeedValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1FanSpeedLabel:W] + 2)r
Text="#HWiNFO-GPU1-FanSpeed#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 9"]

[Gpu1FanUsageLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-FanUsage:"

[Gpu1FanUsageValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1FanUsageLabel:W] + 2)r
Text="#HWiNFO-GPU1-FanUsage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 10"]

[Gpu1MemControllerLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-MemController:"

[Gpu1MemControllerValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1MemControllerLabel:W] + 2)r
Text="#HWiNFO-GPU1-MemController#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 11"]

[Gpu1CoreVoltageLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-GPU1-CoreVoltage:"

[Gpu1CoreVoltageValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([Gpu1CoreVoltageLabel:W] + 2)r
Text="#HWiNFO-GPU1-CoreVoltage#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigGpu0 "Executebatch 12"]