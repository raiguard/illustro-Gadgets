[MeasureInputHWiNFOConfigMobo]
Measure=Plugin
Plugin=InputText
SolidColor=#colorInputTextBackground#
FontColor=#colorInputTextFont#
FontSize=#fontSize#
StringStyle=Bold
UpdateDivider=-1
FocusDismiss=1
W=80
Command1=[!WriteKeyValue Variables HWiNFO-MOBO-SensorId "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-MOBO-SensorId#" X=[MoboSensorIdValue:X] Y=[MoboSensorIdValue:Y] H=[MoboSensorIdValue:H]
Command2=[!WriteKeyValue Variables HWiNFO-MOBO-SensorInstance "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-MOBO-SensorInstance#" X=[MoboSensorInstanceValue:X] Y=[MoboSensorInstanceValue:Y] H=[MoboSensorInstanceValue:H]
Command3=[!WriteKeyValue Variables HWiNFO-MOBO-CPUFan "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-MOBO-CPUFan#" X=[MoboCPUFanValue:X] Y=[MoboCPUFanValue:Y] H=[MoboCPUFanValue:H]
Command4=[!WriteKeyValue Variables HWiNFO-MOBO-GPUFan "$UserInput$" "#HWiNFO-CONFIGPATH#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#HWiNFO-MOBO-GPUFan#" X=[MoboGPUFanValue:X] Y=[MoboGPUFanValue:Y] H=[MoboGPUFanValue:H]

; ----- Sensor IDs -----

[MoboSensorIdLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-MOBO-SensorId:"

[MoboSensorIdValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([MoboSensorIdLabel:W] + 2)r
Text="#HWiNFO-MOBO-SensorId#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigMobo "Executebatch 1"]

[MoboSensorInstanceLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-MOBO-SensorInstance:"

[MoboSensorInstanceValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([MoboSensorInstanceLabel:W] + 2)r
Text="#HWiNFO-MOBO-SensorInstance#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigMobo "Executebatch 2"]

[MoboCPUFanLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-MOBO-CPUFan:"

[MoboCPUFanValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([MoboCPUFanLabel:W] + 2)r
Text="#HWiNFO-MOBO-CPUFan#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigMobo "Executebatch 3"]

[MoboGPUFanLabel]
Meter=String
MeterStyle=StyleText | StyleHWiNFOLabel
Text="HWiNFO-MOBO-GPUFan:"

[MoboGPUFanValue]
Meter=String
MeterStyle=StyleText | StyleHWiNFOValue
X=([MoboGPUFanLabel:W] + 2)r
Text="#HWiNFO-MOBO-GPUFan#"
LeftMouseUpAction=[!CommandMeasure MeasureInputHWiNFOConfigMobo "Executebatch 4"]