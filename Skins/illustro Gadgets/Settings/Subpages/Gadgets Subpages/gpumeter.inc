[Variables]
gadgetSettingsPath=#@#Settings\GpuMeterSettings.inc
@includeGpuMeterSettings=#gadgetSettingsPath#

; ========================================================================================================================
;   STYLES
; ========================================================================================================================

; ========================================================================================================================
;   MEASURES
; ========================================================================================================================

[MeasureInputColorConfig]
Measure=Plugin
Plugin=InputText
SolidColor=#colorInputTextBackground#
FontColor=#colorInputTextFont#
FontSize=#fontSize#
StringStyle=Bold
UpdateDivider=-1
FocusDismiss=1
Command1=[!WriteKeyValue Variables sColorTotalUsage "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup GpuMeter][!Refresh] DefaultValue="#sColorTotalUsage#" X=[ColorsTotalUsageString:X] Y=[ColorsTotalUsageString:Y] W=[ColorsTotalUsageString:W] H=[ColorsTotalUsageString:H]
Command2=[!WriteKeyValue Variables sColorMemoryUsage "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup GpuMeter][!Refresh] DefaultValue="#sColorMemoryUsage#" X=[ColorsMemoryUsageString:X] Y=[ColorsMemoryUsageString:Y] W=[ColorsMemoryUsageString:W] H=[ColorsMemoryUsageString:H]
Command3=[!WriteKeyValue Variables sColorFanUsage "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup GpuMeter][!Refresh] DefaultValue="#sColorFanUsage#" X=[ColorsFanUsageString:X] Y=[ColorsFanUsageString:Y] W=[ColorsFanUsageString:W] H=[ColorsFanUsageString:H]
Command4=[!WriteKeyValue Variables sColorMemController "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup GpuMeter][!Refresh] DefaultValue="#sColorMemController#" X=[ColorsMemControllerString:X] Y=[ColorsMemControllerString:Y] W=[ColorsMemControllerString:W] H=[ColorsMemControllerString:H]

; ========================================================================================================================
;   METERS
; ========================================================================================================================

; ----- Toggles -----

; Memory Controller
[MemControllerLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Memory Controller Information:"

[MemControllerButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[MemControllerLabel:W]r
Y=0r
Text="Enabled"
Hidden=#hideMemController#
LeftMouseUpAction=[!WriteKeyValue Variables "hideMemController" 1 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideMemController" "#dHideMemController#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

[MemControllerButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=(#hideMemController# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "hideMemController" 0 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideMemController" "#dHideMemController#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

; Core Voltage
[CoreVoltageLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Core Voltage Information:"

[CoreVoltageButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[CoreVoltageLabel:W]r
Y=0r
Text="Enabled"
Hidden=#hideCoreVoltage#
LeftMouseUpAction=[!WriteKeyValue Variables "hideCoreVoltage" 1 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideCoreVoltage" "#dHideCoreVoltage#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

[CoreVoltageButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=(#hideCoreVoltage# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "hideCoreVoltage" 0 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideCoreVoltage" "#dHideCoreVoltage#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

; Line Graph
[LineGraphLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Line Graph:"

[LineGraphButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[LineGraphLabel:W]r
Y=0r
Text="Enabled"
Hidden=#hideLineGraph#
LeftMouseUpAction=[!WriteKeyValue Variables "hideLineGraph" 1 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideLineGraph" "#dHideLineGraph#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

[LineGraphButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=(#hideLineGraph# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "hideLineGraph" 0 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideLineGraph" "#dHideLineGraph#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

; ----- Colors -----
[ColorsLabel]
Meter=String
MeterStyle=StyleText | StyleSectionLabel
Text="Coloring Options"

; Total Usage Color
[ColorsTotalUsageLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Total Usage Color"

[ColorsTotalUsageBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsTotalUsageBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorTotalUsage" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorTotalUsage "#dColorTotalUsage#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
SolidColor=#sColorTotalUsage#

[ColorsTotalUsageAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsTotalUsageAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsTotalUsageString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorTotalUsage#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 1"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorTotalUsage "#dColorTotalUsage#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

; Memory Usage Color
[ColorsMemoryUsageLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Memory Usage Color"

[ColorsMemoryUsageBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsMemoryUsageBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorMemoryUsage" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorMemoryUsage "#dColorMemoryUsage#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
SolidColor=#sColorMemoryUsage#

[ColorsMemoryUsageAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsMemoryUsageAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsMemoryUsageString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorMemoryUsage#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 2"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorMemoryUsage "#dColorMemoryUsage#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

; Fan Usage Color
[ColorsFanUsageLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Fan Usage Color"

[ColorsFanUsageBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsFanUsageBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorFanUsage" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorFanUsage "#dColorFanUsage#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
SolidColor=#sColorFanUsage#

[ColorsFanUsageAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsFanUsageAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsFanUsageString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorFanUsage#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 3"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorFanUsage "#dColorFanUsage#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

; Memory Controller Color
[ColorsMemControllerLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Mem. Controller Color"

[ColorsMemControllerBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsMemControllerBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorMemController" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorMemController "#dColorMemController#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
SolidColor=#sColorMemController#

[ColorsMemControllerAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsMemControllerAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsMemControllerString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorMemController#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 4"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorMemController "#dColorMemController#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]