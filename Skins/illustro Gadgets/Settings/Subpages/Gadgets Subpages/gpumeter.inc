[Variables]
gadgetSettingsPath=#@#Settings\GpuMeterSettings.inc
gadgetSettingsPathLua=Settings\\GpuMeterSettings.inc
@includeGpuMeterSettings=#gadgetSettingsPath#

bgHeight=500

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

; Gpu Name
[GpuNameLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="GPU Name:"

[GpuNameButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[GpuNameLabel:W]r
Y=0r
Text="Enabled"
Hidden=#hideGpuName#
LeftMouseUpAction=[!WriteKeyValue Variables "hideGpuName" 1 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideGpuName" "#dHideGpuName#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

[GpuNameButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=(#hideGpuName# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "hideGpuName" 0 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideGpuName" "#dHideGpuName#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

; Shader Clock Information
[ShaderClockLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Shader Clock Information:"

[ShaderClockButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[ShaderClockLabel:W]r
Y=0r
Text="Enabled"
Hidden=#hideShaderClock#
LeftMouseUpAction=[!WriteKeyValue Variables "hideShaderClock" 1 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideShaderClock" "#dHideShaderClock#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

[ShaderClockButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=(#hideShaderClock# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "hideShaderClock" 0 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideShaderClock" "#dHideShaderClock#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

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
LeftMouseUpAction=[!CommandMeasure MeasureSettingsScript "changeAlpha('sColorTotalUsage',$MouseX:%$, '#gadgetSettingsPathLua#')"][!RefreshGroup GpuMeter][!Refresh]

[ColorsTotalUsageAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#

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
LeftMouseUpAction=[!CommandMeasure MeasureSettingsScript "changeAlpha('sColorMemoryUsage',$MouseX:%$, '#gadgetSettingsPathLua#')"][!RefreshGroup GpuMeter][!Refresh]

[ColorsMemoryUsageAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#

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
LeftMouseUpAction=[!CommandMeasure MeasureSettingsScript "changeAlpha('sColorFanUsage',$MouseX:%$, '#gadgetSettingsPathLua#')"][!RefreshGroup GpuMeter][!Refresh]

[ColorsFanUsageAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#

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
LeftMouseUpAction=[!CommandMeasure MeasureSettingsScript "changeAlpha('sColorMemController',$MouseX:%$, '#gadgetSettingsPathLua#')"][!RefreshGroup GpuMeter][!Refresh]

[ColorsMemControllerAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#

[ColorsMemControllerString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorMemController#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 4"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorMemController "#dColorMemController#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

; ----- Dual GPU Meter -----

[DualGpuMeterSettingsSectionLabel]
Meter=String
MeterStyle=StyleText | StyleSectionLabel
Text="Dual GPU Meter Settings"

[DualGpuMeterSettingsSectionNote]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
X=#panelContentMarginLeftX#
Y=20r
Text="All of the previous settings also affect Dual GPU Meter"

[DualGpuMeterGraphTypeLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Y=20r
Text="Graph Type:"

[DualGpuMeterGraphTypeButton0]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[DualGpuMeterGraphTypeLabel:W]r
Y=0r
Text="Disabled"
Hidden=(#graphType# = 0 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "graphType" 1 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "graphType" "#dGraphType#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

[DualGpuMeterGraphTypeButton1]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="GPU 0 Only"
Hidden=(#graphType# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "graphType" 2 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "graphType" "#dGraphType#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

[DualGpuMeterGraphTypeButton2]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="GPU 1 Only"
Hidden=(#graphType# = 2 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "graphType" 3 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "graphType" "#dGraphType#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]

[DualGpuMeterGraphTypeButton3]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Average"
Hidden=(#graphType# = 3 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "graphType" 0 "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "graphType" "#dGraphType#" "#gadgetSettingsPath#"][!RefreshGroup "GpuMeter"][!Refresh]