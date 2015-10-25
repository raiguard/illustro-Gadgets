[Variables]
@include4=#@#Settings/AllCpuMeterSettings.inc
varPath2=#@#Settings/AllCpuMeterSettings.inc

hwinfoSettingsXMargin=(#panelCenterX# - 72)
colorSettingsXMargin=(#bgWidth# - 128)

[StyleTextInterfacePrompt]
FontColor=#colorText#
FontSize=8
FontFace=#fontName#
StringAlign=Right
AntiAlias=1
X=(#hwinfoSettingsXMargin# - 5)
Y=22r
UpdateDivider=-1

[StyleTextInterfaceValue]
FontColor=#colorText#
FontSize=8
FontFace=Segoe UI
StringAlign=Left
SolidColor=#colorGraphBG#
AntiAlias=1
Y=-1r
X=#hwinfoSettingsXMargin#
H=16
W=65
Padding=2,0,0,0

[StyleTextPalettePrompt]
FontColor=#colorText#
FontSize=8
FontFace=#fontName#
StringAlign=Right
AntiAlias=1
X=(#colorSettingsXMargin# - 5)
Y=22r
UpdateDivider=-1

[StyleTextPaletteColor]
FontColor=#colorText#
FontSize=8
FontFace=Segoe UI
StringAlign=Left
SolidColor=#colorGraphBG#
AntiAlias=1
Y=-1r
X=#colorSettingsXMargin#
H=16
W=80
Padding=2,0,0,0

[StylePickColorButton]
H=16
W=28
X=(#colorSettingsXMargin# + 87)
Y=0r
SolidColor=255,255,255,80
StringAlign=Left
AntiAlias=1

[StyleColorTooltip]
ToolTipTitle="Color"
ToolTipText="Middle mouse click to reset color to default setting."

; ----------------------------------------------------------------------------------------------------------

[AllCpuMeterTitle]
Meter=String
MeterStyle=StyleText
FontSize=(#titleSize#)
StringAlign=Right
X=(#panelCenterX# - 10)
Y=(#bodyStartY#)
Text="A L L  C P U  M E T E R"

[AllCpuMeterSeparatorBar]
Meter=Image
SolidColor=192,192,192,64
X=#panelCenterX#
Y=(#bodyStartY# + 20)
H=(#bgHeight# - #bodyStartY# - 29)
W=1

; ## CHECKBOXES ##
; - Show Page File Info -
[PageButton]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOn.png
X=([NavMenuSeparatorBar:X] + 10)
Y=0r

[PageButtonMouseRegion]
Meter=Image
Solidcolor=0,0,0,0
X=([PageButton:X]*#scale#)
Y=([PageButton:Y]*#scale#)
W=([PageButton:W]*#scale#)
H=([PageButton:H]*#scale#)
LeftMouseDownAction=[!SetOption PageButton ImageAlpha 220][!UpdateMeter PageButton][!Redraw]
LeftMouseUpAction=[!SetOption PageButton ImageAlpha 200][!CommandMeasure MeasureVarManipulationScript "ToggleVariable('hidePage')"][!RefreshGroup illustroGadgetsSettings][!Redraw]
DynamicVariables=1

[PageText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
X=15r
Y=0r
Text="Show Page File Info"

; - Show Clock and Fan Speed -
[ClockAndFanShow]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOn.png
X=([NavMenuSeparatorBar:X] + 10)
Hidden=(#showClockAndFan# = 0 ? 1 : 0)

[ClockAndFanShowMouseRegion]
Meter=Image
Solidcolor=0,0,0,0
X=([ClockAndFanShow:X]*#scale#)
Y=([ClockAndFanShow:Y]*#scale#)
W=([ClockAndFanShow:W]*#scale#)
H=([ClockAndFanShow:H]*#scale#)
MouseOverAction=[!SetOption ClockAndFanShow ImageAlpha 220][!UpdateMeter ClockAndFanShow][!Redraw]
LeftMouseDownAction=[!SetOption ClockAndFanShow ImageAlpha 255][!UpdateMeter ClockAndFanShow][!Redraw]
LeftMouseUpAction=[!SetOption ClockAndFanShow ImageAlpha 200][!WriteKeyValue Variables showClockAndFan 0 "#varPath2#"][!RefreshGroup illustroGadgetsSettings][!Redraw]
MouseLeaveAction=[!SetOption ClockAndFanShow ImageAlpha 200][!UpdateMeter ClockAndFanShow][!Redraw]
Hidden=(#showClockAndFan# = 0 ? 1 : 0)
DynamicVariables=1

[ClockAndFanHide]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOff.png
X=0r
Y=0r
Hidden=#showClockAndFan#

[ClockAndFanHideMouseRegion]
Meter=Image
Solidcolor=0,0,0,0
X=([ClockAndFanHide:X]*#scale#)
Y=([ClockAndFanHide:Y]*#scale#)
W=([ClockAndFanHide:W]*#scale#)
H=([ClockAndFanHide:H]*#scale#)
MouseOverAction=[!SetOption ClockAndFanHide ImageAlpha 220][!UpdateMeter ClockAndFanHide][!Redraw]
LeftMouseDownAction=[!SetOption ClockAndFanHide ImageAlpha 255][!UpdateMeter ClockAndFanHide][!Redraw]
LeftMouseUpAction=[!SetOption ClockAndFanHide ImageAlpha 200][!WriteKeyValue Variables showClockAndFan 1 "#varPath2#"][!RefreshGroup illustroGadgetsSettings][!Redraw]
MouseLeaveAction=[!SetOption ClockAndFanHide ImageAlpha 200][!UpdateMeter ClockAndFanHide][!Redraw]
Hidden=#showClockAndFan#
DynamicVariables=1

[ClockAndFanText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
X=15r
Y=0r
Text="Show Clock and Fan Speed"

; - Show Line Graph -
[LineGraphShow]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOn.png
X=([NavMenuSeparatorBar:X] + 10)
Hidden=(#showLineGraph# = 0 ? 1 : 0)

[LineGraphShowMouseRegion]
Meter=Image
Solidcolor=0,0,0,0
X=([LineGraphShow:X]*#scale#)
Y=([LineGraphShow:Y]*#scale#)
W=([LineGraphShow:W]*#scale#)
H=([LineGraphShow:H]*#scale#)
MouseOverAction=[!SetOption LineGraphShow ImageAlpha 220][!UpdateMeter LineGraphShow][!Redraw]
LeftMouseDownAction=[!SetOption LineGraphShow ImageAlpha 255][!UpdateMeter LineGraphShow][!Redraw]
LeftMouseUpAction=[!SetOption LineGraphShow ImageAlpha 200][!WriteKeyValue Variables showLineGraph 0 "#varPath2#"][!RefreshGroup illustroGadgetsSettings][!Redraw]
MouseLeaveAction=[!SetOption LineGraphShow ImageAlpha 200][!UpdateMeter LineGraphShow][!Redraw]
Hidden=(#showLineGraph# = 0 ? 1 : 0)
DynamicVariables=1

[LineGraphHide]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOff.png
X=0r
Y=0r
Hidden=#showLineGraph#

[LineGraphHideMouseRegion]
Meter=Image
Solidcolor=0,0,0,0
X=([LineGraphHide:X]*#scale#)
Y=([LineGraphHide:Y]*#scale#)
W=([LineGraphHide:W]*#scale#)
H=([LineGraphHide:H]*#scale#)
MouseOverAction=[!SetOption LineGraphHide ImageAlpha 220][!UpdateMeter LineGraphHide][!Redraw]
LeftMouseDownAction=[!SetOption LineGraphHide ImageAlpha 255][!UpdateMeter LineGraphHide][!Redraw]
LeftMouseUpAction=[!SetOption LineGraphHide ImageAlpha 200][!WriteKeyValue Variables showLineGraph 1 "#varPath2#"][!RefreshGroup illustroGadgetsSettings][!Redraw]
MouseLeaveAction=[!SetOption LineGraphHide ImageAlpha 200][!UpdateMeter LineGraphHide][!Redraw]
Hidden=#showLineGraph#
DynamicVariables=1

[LineGraphText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
X=15r
Y=0r
Text="Show Line Graph"

; - Show Average CPU Graph Only -
[AvgCpuShow]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOn.png
X=([NavMenuSeparatorBar:X] + 28)
Hidden=(#showAvgCpuOnly# = 0 ? 1 : 0)

[AvgCpuShowMouseRegion]
Meter=Image
Solidcolor=0,0,0,0
X=([AvgCpuShow:X]*#scale#)
Y=([AvgCpuShow:Y]*#scale#)
W=([AvgCpuShow:W]*#scale#)
H=([AvgCpuShow:H]*#scale#)
MouseOverAction=[!SetOption AvgCpuShow ImageAlpha 220][!UpdateMeter AvgCpuShow][!Redraw]
LeftMouseDownAction=[!SetOption AvgCpuShow ImageAlpha 255][!UpdateMeter AvgCpuShow][!Redraw]
LeftMouseUpAction=[!SetOption AvgCpuShow ImageAlpha 200][!WriteKeyValue Variables showAvgCpuOnly 0 "#varPath2#"][!RefreshGroup illustroGadgetsSettings][!Redraw]
MouseLeaveAction=[!SetOption AvgCpuShow ImageAlpha 200][!UpdateMeter AvgCpuShow][!Redraw]
Hidden=(#showAvgCpuOnly# = 0 ? 1 : 0)
DynamicVariables=1

[AvgCpuHide]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOff.png
X=0r
Y=0r
Hidden=#showAvgCpuOnly#

[AvgCpuHideMouseRegion]
Meter=Image
Solidcolor=0,0,0,0
X=([AvgCpuHide:X]*#scale#)
Y=([AvgCpuHide:Y]*#scale#)
W=([AvgCpuHide:W]*#scale#)
H=([AvgCpuHide:H]*#scale#)
MouseOverAction=[!SetOption AvgCpuHide ImageAlpha 220][!UpdateMeter AvgCpuHide][!Redraw]
LeftMouseDownAction=[!SetOption AvgCpuHide ImageAlpha 255][!UpdateMeter AvgCpuHide][!Redraw]
LeftMouseUpAction=[!SetOption AvgCpuHide ImageAlpha 200][!WriteKeyValue Variables showAvgCpuOnly 1 "#varPath2#"][!RefreshGroup illustroGadgetsSettings][!Redraw]
MouseLeaveAction=[!SetOption AvgCpuHide ImageAlpha 200][!UpdateMeter AvgCpuHide][!Redraw]
Hidden=#showAvgCpuOnly#
DynamicVariables=1

[AvgCpuText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
X=15r
Y=0r
Text="Show Average CPU Only"

; - Show Core Temperatures -
[CoreTempsShow]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOn.png
X=([NavMenuSeparatorBar:X] + 10)
Hidden=#disableTemps#

[CoreTempsShowMouseRegion]
Meter=Image
SolidColor=0,0,0,0
X=([CoreTempsShow:X]*#scale#)
Y=([CoreTempsShow:Y]*#scale#)
W=([CoreTempsShow:W]*#scale#)
H=([CoreTempsShow:H]*#scale#)
MouseOverAction=[!SetOption CoreTempsShow ImageAlpha 220][!UpdateMeter CoreTempsShow][!Redraw]
LeftMouseDownAction=[!SetOption CoreTempsShow ImageAlpha 255][!UpdateMeter CoreTempsShow][!Redraw]
LeftMouseUpAction=[!SetOption CoreTempsShow ImageAlpha 200][!WriteKeyValue Variables disableTemps 1 "#varPath2#"][!RefreshGroup illustroGadgetsSettings][!Redraw]
MouseLeaveAction=[!SetOption CoreTempsShow ImageAlpha 200][!UpdateMeter CoreTempsShow][!Redraw]
Hidden=#disableTemps#
DynamicVariables=1

[CoreTempsHide]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOff.png
X=0r
Y=0r
Hidden=(#disableTemps# = 0 ? 1 : 0)

[CoreTempsHideMouseRegion]
Meter=Image
SolidColor=0,0,0,0
X=([CoreTempsHide:X]*#scale#)
Y=([CoreTempsHide:Y]*#scale#)
W=([CoreTempsHide:W]*#scale#)
H=([CoreTempsHide:H]*#scale#)
MouseOverAction=[!SetOption CoreTempsHide ImageAlpha 220][!UpdateMeter CoreTempsHide][!Redraw]
LeftMouseDownAction=[!SetOption CoreTempsHide ImageAlpha 255][!UpdateMeter CoreTempsHide][!Redraw]
LeftMouseUpAction=[!SetOption CoreTempsHide ImageAlpha 200][!WriteKeyValue Variables disableTemps 0 "#varPath2#"][!RefreshGroup illustroGadgetsSettings][!Redraw]
MouseLeaveAction=[!SetOption CoreTempsHide ImageAlpha 200][!UpdateMeter CoreTempsHide][!Redraw]
Hidden=(#disableTemps# = 0 ? 1 : 0)
DynamicVariables=1

[CoreTempsText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
X=15r
Y=0r
Text="Show Core Temperatures"

; - Core Temperature Units -
[CoreTempsUnitsShow]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOn.png
X=([NavMenuSeparatorBar:X] + 28)
Hidden=#tempsInCelsius#

[CoreTempsUnitsShowMouseRegion]
Meter=Image
Solidcolor=0,0,0,0
X=([CoreTempsUnitsShow:X]*#scale#)
Y=([CoreTempsUnitsShow:Y]*#scale#)
W=([CoreTempsUnitsShow:W]*#scale#)
H=([CoreTempsUnitsShow:H]*#scale#)
MouseOverAction=[!SetOption CoreTempsUnitsShow ImageAlpha 220][!UpdateMeter CoreTempsUnitsShow][!Redraw]
LeftMouseDownAction=[!SetOption CoreTempsUnitsShow ImageAlpha 255][!UpdateMeter CoreTempsUnitsShow][!Redraw]
LeftMouseUpAction=[!SetOption CoreTempsUnitsShow ImageAlpha 200][!WriteKeyValue Variables tempsInCelsius 1 "#varPath2#"][!RefreshGroup illustroGadgetsSettings][!Redraw]
MouseLeaveAction=[!SetOption CoreTempsUnitsShow ImageAlpha 200][!UpdateMeter CoreTempsUnitsShow][!Redraw]
Hidden=#tempsInCelsius#
DynamicVariables=1

[CoreTempsUnitsHide]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images/CheckboxOff.png
X=0r
Y=0r
Hidden=(#tempsInCelsius# = 0 ? 1 : 0)

[CoreTempsUnitsHideMouseRegion]
Meter=Image
Solidcolor=0,0,0,0
X=([CoreTempsUnitsHide:X]*#scale#)
Y=([CoreTempsUnitsHide:Y]*#scale#)
W=([CoreTempsUnitsHide:W]*#scale#)
H=([CoreTempsUnitsHide:H]*#scale#)
MouseOverAction=[!SetOption CoreTempsUnitsHide ImageAlpha 220][!UpdateMeter CoreTempsUnitsHide][!Redraw]
LeftMouseDownAction=[!SetOption CoreTempsUnitsHide ImageAlpha 255][!UpdateMeter CoreTempsUnitsHide][!Redraw]
LeftMouseUpAction=[!SetOption CoreTempsUnitsHide ImageAlpha 200][!WriteKeyValue Variables tempsInCelsius 0 "#varPath2#"][!RefreshGroup illustroGadgetsSettings][!Redraw]
MouseLeaveAction=[!SetOption CoreTempsUnitsHide ImageAlpha 200][!UpdateMeter CoreTempsUnitsHide][!Redraw]
Hidden=(#tempsInCelsius# = 0 ? 1 : 0)
DynamicVariables=1

[CoreTempsUnitsText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
X=15r
Y=0r
Text="Show Temps in °F"

; ## HWINFO SETTINGS ##
[HWiNFOSettingsSeparatorBar]
Meter=Image
SolidColor=#colorSeparator#
X=([NavMenuSeparatorBar:X] + 1)
Y=20r
W=([AllCpuMeterSeparatorBar:X] - [NavMenuSeparatorBar:X] - 1)
H=1

; - SMV Link -
[HWiNFOSettingsMemoryViewer]
Meter=String
MeterStyle=StyleText
fontColor=#colorTextLink#,#opacityNormal#
X=([NavMenuSeparatorBar:X] + 5)
Y=6r
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
X=(#panelCenterX# - 3)
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

[HWiNFOHDInput]
Measure=Plugin
Plugin=InputText
SolidColor=255,255,255,255
FontSize=8
FontFace=#fontName#
FontColor=0,0,0,255
UpdateDivider=-1
FocusDismiss=1
Command1= [!WriteKeyValue Variables HWiNFO-CPU0-DTS-SensorId "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CPU0-DTS-SensorId#" X=[CPUSensorIdInput:X] Y=[CPUSensorIdInput:Y] W=[CPUSensorIdInput:W] H=[CPUSensorIdInput:H]
Command2= [!WriteKeyValue Variables HWiNFO-CPU0-DTS-SensorInstance "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CPU0-DTS-SensorInstance#" X=[CPUSensorInstanceInput:X] Y=[CPUSensorInstanceInput:Y] W=[CPUSensorInstanceInput:W] H=[CPUSensorInstanceInput:H]
Command3= [!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core0Temp "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CPU0-DTS-Core0Temp#" X=[CPUCore0TempInput:X] Y=[CPUCore0TempInput:Y] W=[CPUCore0TempInput:W] H=[CPUCore0TempInput:H]
Command4= [!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core1Temp "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CPU0-DTS-Core1Temp#" X=[CPUCore1TempInput:X] Y=[CPUCore1TempInput:Y] W=[CPUCore1TempInput:W] H=[CPUCore1TempInput:H]
Command5= [!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core2Temp "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CPU0-DTS-Core2Temp#" X=[CPUCore2TempInput:X] Y=[CPUCore2TempInput:Y] W=[CPUCore2TempInput:W] H=[CPUCore2TempInput:H]
Command6= [!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core3Temp "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CPU0-DTS-Core3Temp#" X=[CPUCore3TempInput:X] Y=[CPUCore3TempInput:Y] W=[CPUCore3TempInput:W] H=[CPUCore3TempInput:H]
Command7= [!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core4Temp "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CPU0-DTS-Core4Temp#" X=[CPUCore4TempInput:X] Y=[CPUCore4TempInput:Y] W=[CPUCore4TempInput:W] H=[CPUCore4TempInput:H]
Command8= [!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core5Temp "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CPU0-DTS-Core5Temp#" X=[CPUCore5TempInput:X] Y=[CPUCore5TempInput:Y] W=[CPUCore5TempInput:W] H=[CPUCore5TempInput:H]
Command9= [!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core6Temp "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CPU0-DTS-Core6Temp#" X=[CPUCore6TempInput:X] Y=[CPUCore6TempInput:Y] W=[CPUCore6TempInput:W] H=[CPUCore6TempInput:H]
Command10= [!WriteKeyValue Variables HWiNFO-CPU0-DTS-Core7Temp "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CPU0-DTS-Core7Temp#" X=[CPUCore7TempInput:X] Y=[CPUCore7TempInput:Y] W=[CPUCore7TempInput:W] H=[CPUCore7TempInput:H]
Command11= [!WriteKeyValue Variables HWiNFO-MOBO-SensorId "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-MOBO-SensorId#" X=[MOBOSensorIdInput:X] Y=[MOBOSensorIdInput:Y] W=[MOBOSensorIdInput:W] H=[MOBOSensorIdInput:H]
Command12= [!WriteKeyValue Variables HWiNFO-MOBO-SensorInstance "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-MOBO-SensorInstance#" X=[MOBOSensorInstanceInput:X] Y=[MOBOSensorInstanceInput:Y] W=[MOBOSensorInstanceInput:W] H=[MOBOSensorInstanceInput:H]
Command13= [!WriteKeyValue Variables HWiNFO-MOBO-CPUFan "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-MOBO-CPUFan#" X=[MOBOCPUFanSpeedInput:X] Y=[MOBOCPUFanSpeedInput:Y] W=[MOBOCPUFanSpeedInput:W] H=[MOBOCPUFanSpeedInput:H]
Command50= [!WriteKeyValue Variables activeTempReader "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="HWiNFO" X=[SysMonitorToolInput:X] Y=[SysMonitorToolInput:Y] W=[SysMonitorToolInput:W] H=[SysMonitorToolInput:H]

; ## COLOR SETTINGS ##
; - RAM -
[RAMLabel]
Meter=String
MeterStyle=StyleTextPalettePrompt
Y=([AllCpuMeterTitle:Y] + 27)
Text="RAM Color"

[InputBarColorRAM]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorRAM#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 1"
MiddleMouseUpAction=[!WriteKeyValue Variables colorRAM "#dColorRAM#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorRAM]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorRAM#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorRAM" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorRAM "#dColorRAM#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]
Y=0r

; - Page File -
[PageLabel]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Page Color"

[InputBarColorPage]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorPage#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 2"
MiddleMouseUpAction=[!WriteKeyValue Variables colorPage "#dColorPage#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorPage]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorPage#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorPage" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorPage "#dcolorPage#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Average CPU -
[AvgCpuLabel]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Avg CPU Color"

[InputBarColorAVG.CPU]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorAvgCpu#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 19"
MiddleMouseUpAction=[!WriteKeyValue Variables colorAvgCpu "#dColorAvgCpu#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorAVG.CPU]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorAvgCpu#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorAvgCpu" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorAvgCpu "#dColorAvgCpu#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 1 -
[Core1Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 1 Color"

[InputCoreColor1]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore1#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 3"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore1 "#dColorCore1#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore1]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore1#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore1" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore1 "#dcolorCore1#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 2 -
[Core2Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 2 Color"

[InputCoreColor2]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore2#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 4"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore2 "#dColorCore2#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore2]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore2#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore2" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore2 "#dcolorCore2#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 3 -
[Core3Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 3 Color"

[InputCoreColor3]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore3#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 5"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore3 "#dColorCore3#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore3]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore3#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore3" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore3 "#dcolorCore3#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 4 -
[Core4Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 4 Color"

[InputCoreColor4]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore4#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 6"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore4 "#dcolorCore4#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore4]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore4#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore4" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore4 "#dcolorCore4#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 5 -
[Core5Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 5 Color"

[InputCoreColor5]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore5#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 7"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore5 "#dcolorCore5#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore5]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore5#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore5" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore5 "#dcolorCore5#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 6 -
[Core6Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 6 Color"

[InputCoreColor6]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore6#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 8"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore6 "#dcolorCore6#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore6]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore6#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore6" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore6 "#dcolorCore6#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 7 -
[Core7Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 7 Color"

[InputCoreColor7]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore7#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 9"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore7 "#dcolorCore7#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore7]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore7#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore7" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore7 "#dcolorCore7#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 8 -
[Core8Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 8 Color"

[InputCoreColor8]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore8#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 10"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore8 "#dcolorCore8#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore8]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore8#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore8" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore8 "#dcolorCore8#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 9 -
[Core9Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 9 Color"

[InputCoreColor9]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore9#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 11"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore9 "#dcolorCore9#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore9]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore9#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore9" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore9 "#dcolorCore9#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 10 -
[Core10Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 10 Color"

[InputCoreColor10]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore10#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 12"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore10 "#dcolorCore10#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore10]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore10#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore10" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore10 "#dcolorCore10#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 11 -
[Core11Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 11 Color"

[InputCoreColor11]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore11#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 13"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore11 "#dcolorCore11#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore11]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore11#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore11" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore11 "#dcolorCore11#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 12 -
[Core12Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 12 Color"

[InputCoreColor12]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore12#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 14"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore12 "#dcolorCore12#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore12]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore12#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore12" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore12 "#dcolorCore12#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 13 -
[Core13Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 13 Color"

[InputCoreColor13]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore13#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 15"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore13 "#dcolorCore13#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore13]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore13#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore13" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore13 "#dcolorCore13#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 14 -
[Core14Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 14 Color"

[InputCoreColor14]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore14#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 16"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore14 "#dcolorCore14#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore14]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore14#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore14" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore14 "#dcolorCore14#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 15 -
[Core15Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 15 Color"

[InputCoreColor15]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore15#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 17"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore15 "#dcolorCore15#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore15]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore15#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore15" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore15 "#dcolorCore15#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

; - Core 16 -
[Core16Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 16 Color"

[InputCoreColor16]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore16#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 18"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore16 "#dcolorCore16#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[PickBarColorCore16]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore16#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore16" "FileName=#varPath2#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore16 "#dcolorCore16#" "#varPath2#"][!RefreshGroup illustroGadgetsSettings]

[MeasureInputColor]
Measure=Plugin
Plugin=InputText
SolidColor=255,255,255,255
FontSize=8
FontFace=#fontName#
FontColor=0,0,0,255
UpdateDivider=-1
FocusDismiss=1
Command1= [!WriteKeyValue Variables colorRAM "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorRAM#" X=[InputBarColorRAM:X] Y=[InputBarColorRAM:Y] W=[InputBarColorRAM:W] H=[InputBarColorRAM:H]
Command2= [!WriteKeyValue Variables colorPage "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorPage#" X=[InputBarColorPage:X] Y=[InputBarColorPage:Y] W=[InputBarColorPage:W] H=[InputBarColorPage:H]
Command3= [!WriteKeyValue Variables colorCore1 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore1#" X=[InputCoreColor1:X] Y=[InputCoreColor1:Y] W=[InputCoreColor1:W] H=[InputCoreColor1:H]
Command4= [!WriteKeyValue Variables colorCore2 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore2#" X=[InputCoreColor2:X] Y=[InputCoreColor2:Y] W=[InputCoreColor2:W] H=[InputCoreColor2:H]
Command5= [!WriteKeyValue Variables colorCore3 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore3#" X=[InputCoreColor3:X] Y=[InputCoreColor3:Y] W=[InputCoreColor3:W] H=[InputCoreColor3:H]
Command6= [!WriteKeyValue Variables colorCore4 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore4#" X=[InputCoreColor4:X] Y=[InputCoreColor4:Y] W=[InputCoreColor4:W] H=[InputCoreColor4:H]
Command7= [!WriteKeyValue Variables colorCore5 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore5#" X=[InputCoreColor5:X] Y=[InputCoreColor5:Y] W=[InputCoreColor5:W] H=[InputCoreColor5:H]
Command8= [!WriteKeyValue Variables colorCore6 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore6#" X=[InputCoreColor6:X] Y=[InputCoreColor6:Y] W=[InputCoreColor6:W] H=[InputCoreColor6:H]
Command9= [!WriteKeyValue Variables colorCore7 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore7#" X=[InputCoreColor7:X] Y=[InputCoreColor7:Y] W=[InputCoreColor7:W] H=[InputCoreColor7:H]
Command10=[!WriteKeyValue Variables colorCore8 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore8#" X=[InputCoreColor8:X] Y=[InputCoreColor8:Y] W=[InputCoreColor8:W] H=[InputCoreColor8:H]
Command11=[!WriteKeyValue Variables colorCore9 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore9#" X=[InputCoreColor9:X] Y=[InputCoreColor9:Y] W=[InputCoreColor9:W] H=[InputCoreColor9:H]
Command12=[!WriteKeyValue Variables colorCore10 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore10#" X=[InputCoreColor10:X] Y=[InputCoreColor10:Y] W=[InputCoreColor10:W] H=[InputCoreColor10:H]
Command13=[!WriteKeyValue Variables colorCore11 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore11#" X=[InputCoreColor11:X] Y=[InputCoreColor11:Y] W=[InputCoreColor11:W] H=[InputCoreColor11:H]
Command14=[!WriteKeyValue Variables colorCore12 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore12#" X=[InputCoreColor12:X] Y=[InputCoreColor12:Y] W=[InputCoreColor12:W] H=[InputCoreColor12:H]
Command15=[!WriteKeyValue Variables colorCore13 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore13#" X=[InputCoreColor13:X] Y=[InputCoreColor13:Y] W=[InputCoreColor13:W] H=[InputCoreColor13:H]
Command16=[!WriteKeyValue Variables colorCore14 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore14#" X=[InputCoreColor14:X] Y=[InputCoreColor14:Y] W=[InputCoreColor14:W] H=[InputCoreColor14:H]
Command17=[!WriteKeyValue Variables colorCore15 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore15#" X=[InputCoreColor15:X] Y=[InputCoreColor15:Y] W=[InputCoreColor15:W] H=[InputCoreColor15:H]
Command18=[!WriteKeyValue Variables colorCore16 "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorCore16#" X=[InputCoreColor16:X] Y=[InputCoreColor16:Y] W=[InputCoreColor16:W] H=[InputCoreColor16:H]
Command19=[!WriteKeyValue Variables colorAvgCpu "$UserInput$" "#varPath2#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#colorAvgCpu#" X=[InputBarColorAVG.CPU:X] Y=[InputBarColorAVG.CPU:Y] W=[InputBarColorAVG.CPU:W] H=[InputBarColorAVG.CPU:H]