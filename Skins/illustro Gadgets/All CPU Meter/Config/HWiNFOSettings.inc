; - SMV Link -
[HWiNFOSettingsMemoryViewer]
Meter=String
MeterStyle=StyleText
fontColor=#colorTextLink#,#opacityNormal#
Y=15r
Text="HWiNFO SMV"

[HWiNFOSettingsMemoryViewerMouseRegion]
Meter=Image
SolidColor=0,0,0,0
X=([HWiNFOSettingsMemoryViewer:X]*#scale#)
Y=([HWiNFOSettingsMemoryViewer:Y]*#scale#)
W=([HWiNFOSettingsMemoryViewer:W]*#scale#)
H=([HWiNFOSettingsMemoryViewer:H]*#scale#)
MouseOverAction=[!SetOption HWiNFOSettingsMemoryViewer FontColor #colorTextLink#,220][!UpdateMeter "HWiNFOSettingsMemoryViewer"][!Redraw]
LeftMouseDownAction=[!SetOption HWiNFOSettingsMemoryViewer FontColor #colorTextLink#,255][!UpdateMeter "HWiNFOSettingsMemoryViewer"][!Redraw]
LeftMouseUpAction=[!SetOption HWiNFOSettingsMemoryViewer FontColor #colorTextLink#,220][!UpdateMeter "HWiNFOSettingsMemoryViewer"]["#ROOTCONFIGPATH#@Resources\HWiNFOSharedMemoryViewer.exe"][!Redraw]
MouseLeaveAction=[!SetOption HWiNFOSettingsMemoryViewer FontColor #colorTextLink#,#opacityNormal#][!UpdateMeter "HWiNFOSettingsMemoryViewer"][!Redraw]
DynamicVariables=1

; - How-to Link -
[HWiNFOHowto]
Meter=String
MeterStyle=StyleText
StringAlign=RIGHT
FontColor=#colorTextLink#,#opacityNormal#
X=(#settingsTextXMarginRight# - 3)
Y=0r
Text="How-to"

[HWiNFOHowtoMouseRegion]
Meter=Image
SolidColor=0,0,0,0
X=([HWiNFOHowto:X]*#scale#)
Y=([HWiNFOHowto:Y]*#scale#)
W=([HWiNFOHowto:W]*#scale#)
H=([HWiNFOHowto:H]*#scale#)
MouseOverAction=[!SetOption HWiNFOHowto FontColor #colorTextLink#,220][!UpdateMeter "HWiNFOHowto"][!Redraw]
LeftMouseDownAction=[!SetOption HWiNFOHowto FontColor #colorTextLink#,255][!UpdateMeter "HWiNFOHowto"][!Redraw]
LeftMouseUpAction=[!SetOption HWiNFOHowto FontColor #colorTextLink#,220][!UpdateMeter "HWiNFOHowto"]["#ROOTCONFIGPATH#@Resources\HWiNFOHowto.txt"][!Redraw]
MouseLeaveAction=[!SetOption HWiNFOHowto FontColor #colorTextLink#,#opacityNormal#][!UpdateMeter "HWiNFOHowto"][!Redraw]
DynamicVariables=1

[CPUSensorIdLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="CPU Sensor Id"
ToolTipText="HWiNFO-CPU0-DTS-SensorId"

[CPUSensorIdInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-CPU0-DTS-SensorId#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 1"

[CPUSensorInstanceLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="CPU Sensor Instance"
ToolTipText="HWiNFO-CPU0-DTS-SensorInstance"

[CPUSensorInstanceInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-CPU0-DTS-SensorInstance#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 2"

[CPUCore0TempLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="CPU Core 0 Temp"
ToolTipText="HWiNFO-CPU0-DTS-Core0Temp"

[CPUCore0TempInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-CPU0-DTS-Core0Temp#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 3"

[CPUCore1TempLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="CPU Core 1 Temp"
ToolTipText="HWiNFO-CPU0-DTS-Core1Temp"

[CPUCore1TempInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-CPU0-DTS-Core1Temp#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 4"

[CPUCore2TempLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="CPU Core 2 Temp"
ToolTipText="HWiNFO-CPU0-DTS-Core2Temp"

[CPUCore2TempInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-CPU0-DTS-Core2Temp#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 5"

[CPUCore3TempLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="CPU Core 3 Temp"
ToolTipText="HWiNFO-CPU0-DTS-Core3Temp"

[CPUCore3TempInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-CPU0-DTS-Core3Temp#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 6"

[CPUCore4TempLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="CPU Core 4 Temp"
ToolTipText="HWiNFO-CPU0-DTS-Core4Temp"

[CPUCore4TempInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-CPU0-DTS-Core4Temp#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 7"

[CPUCore5TempLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="CPU Core 5 Temp"
ToolTipText="HWiNFO-CPU0-DTS-Core5Temp"

[CPUCore5TempInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-CPU0-DTS-Core5Temp#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 8"

[CPUCore6TempLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="CPU Core 6 Temp"
ToolTipText="HWiNFO-CPU0-DTS-Core6Temp"

[CPUCore6TempInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-CPU0-DTS-Core6Temp#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 9"

[CPUCore7TempLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="CPU Core 7 Temp"
ToolTipText="HWiNFO-CPU0-DTS-Core7Temp"

[CPUCore7TempInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-CPU0-DTS-Core7Temp#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 10"

[MOBOSensorIdLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="Motherboard Sensor Id"
ToolTipText="HWiNFO-MOBO-SensorId"

[MOBOSensorIdInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-MOBO-SensorId#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 11"

[MOBOSensorInstanceLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="Mobo. Sensor Instance"
ToolTipText="HWiNFO-MOBO-SensorInstance"

[MOBOSensorInstanceInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-MOBO-SensorInstance#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 12"

[MOBOCPUFanSpeedLabel]
Meter=String
MeterStyle=StyleTextInterfacePrompt
Text="Mobo. CPU Fan Speed"
ToolTipText="HWiNFO-MOBO-CPUFan"

[MOBOCPUFanSpeedInput]
Meter=String
MeterStyle=StyleTextInterfaceValue | StyleIntValueTooltip
Text=#HWiNFO-MOBO-CPUFan#
LeftMouseUpAction=!CommandMeasure "HWiNFOHDInput" "ExecuteBatch 13"