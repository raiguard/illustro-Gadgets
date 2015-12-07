[Variables]
gadgetSettingsPath=#@#Settings\AllCpuMeterSettings.inc
@includeAllCpuMeterSettings=#gadgetSettingsPath#
bgHeight=660

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
Command1=[!WriteKeyValue Variables sColorRam "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorRam#" X=[ColorsRamString:X] Y=[ColorsRamString:Y] W=[ColorsRamString:W] H=[ColorsRamString:H]
Command2=[!WriteKeyValue Variables sColorPage "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorPage#" X=[ColorsPageString:X] Y=[ColorsPageString:Y] W=[ColorsPageString:W] H=[ColorsPageString:H]
Command3=[!WriteKeyValue Variables sColorFan "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorFan#" X=[ColorsFanString:X] Y=[ColorsFanString:Y] W=[ColorsFanString:W] H=[ColorsFanString:H]
Command4=[!WriteKeyValue Variables sColorAvgCpu "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorAvgCpu#" X=[ColorsAvgCpuString:X] Y=[ColorsAvgCpuString:Y] W=[ColorsAvgCpuString:W] H=[ColorsAvgCpuString:H]
Command5=[!WriteKeyValue Variables sColorCore1 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore1#" X=[ColorsCore1String:X] Y=[ColorsCore1String:Y] W=[ColorsCore1String:W] H=[ColorsCore1String:H]
Command6=[!WriteKeyValue Variables sColorCore2 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore2#" X=[ColorsCore2String:X] Y=[ColorsCore2String:Y] W=[ColorsCore2String:W] H=[ColorsCore2String:H]
Command7=[!WriteKeyValue Variables sColorCore3 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore3#" X=[ColorsCore3String:X] Y=[ColorsCore3String:Y] W=[ColorsCore3String:W] H=[ColorsCore3String:H]
Command8=[!WriteKeyValue Variables sColorCore4 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore4#" X=[ColorsCore4String:X] Y=[ColorsCore4String:Y] W=[ColorsCore4String:W] H=[ColorsCore4String:H]
Command9=[!WriteKeyValue Variables sColorCore5 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore5#" X=[ColorsCore5String:X] Y=[ColorsCore5String:Y] W=[ColorsCore5String:W] H=[ColorsCore5String:H]
Command10=[!WriteKeyValue Variables sColorCore6 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore6#" X=[ColorsCore6String:X] Y=[ColorsCore6String:Y] W=[ColorsCore6String:W] H=[ColorsCore6String:H]
Command11=[!WriteKeyValue Variables sColorCore7 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore7#" X=[ColorsCore7String:X] Y=[ColorsCore7String:Y] W=[ColorsCore7String:W] H=[ColorsCore7String:H]
Command12=[!WriteKeyValue Variables sColorCore8 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore8#" X=[ColorsCore8String:X] Y=[ColorsCore8String:Y] W=[ColorsCore8String:W] H=[ColorsCore8String:H]
Command13=[!WriteKeyValue Variables sColorCore9 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore9#" X=[ColorsCore9String:X] Y=[ColorsCore9String:Y] W=[ColorsCore9String:W] H=[ColorsCore9String:H]
Command14=[!WriteKeyValue Variables sColorCore10 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore10#" X=[ColorsCore10String:X] Y=[ColorsCore10String:Y] W=[ColorsCore10String:W] H=[ColorsCore10String:H]
Command15=[!WriteKeyValue Variables sColorCore11 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore11#" X=[ColorsCore11String:X] Y=[ColorsCore11String:Y] W=[ColorsCore11String:W] H=[ColorsCore11String:H]
Command16=[!WriteKeyValue Variables sColorCore12 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore12#" X=[ColorsCore12String:X] Y=[ColorsCore12String:Y] W=[ColorsCore12String:W] H=[ColorsCore12String:H]
Command17=[!WriteKeyValue Variables sColorCore13 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore13#" X=[ColorsCore13String:X] Y=[ColorsCore13String:Y] W=[ColorsCore13String:W] H=[ColorsCore13String:H]
Command18=[!WriteKeyValue Variables sColorCore14 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore14#" X=[ColorsCore14String:X] Y=[ColorsCore14String:Y] W=[ColorsCore14String:W] H=[ColorsCore14String:H]
Command19=[!WriteKeyValue Variables sColorCore15 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore15#" X=[ColorsCore15String:X] Y=[ColorsCore15String:Y] W=[ColorsCore15String:W] H=[ColorsCore15String:H]
Command20=[!WriteKeyValue Variables sColorCore16 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh] DefaultValue="#sColorCore16#" X=[ColorsCore16String:X] Y=[ColorsCore16String:Y] W=[ColorsCore16String:W] H=[ColorsCore16String:H]

; ========================================================================================================================
;   METERS
; ========================================================================================================================

; ----- Toggles -----

; Show page file information
[ShowPageLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Page File Information:"

[ShowPageButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[ShowPageLabel:W]r
Y=0r
Text="Enabled"
Hidden=(#showPage# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "showPage" 0 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showPage" "#dShowPage#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

[ShowPageButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=#showPage#
LeftMouseUpAction=[!WriteKeyValue Variables "showPage" 1 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showPage" "#dShowPage#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

; Show CPU clock speed and name
[ShowCpuAndNameLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="CPU Clock Speed and Name:"

[ShowCpuAndNameButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[ShowCpuAndNameLabel:W]r
Y=0r
Text="Enabled"
Hidden=(#showCpuClockSpeed# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "showCpuClockSpeed" 0 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showCpuClockSpeed" "#dShowCpuClockSpeed#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

[ShowCpuAndNameButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=#showCpuClockSpeed#
LeftMouseUpAction=[!WriteKeyValue Variables "showCpuClockSpeed" 1 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showCpuClockSpeed" "#dShowCpuClockSpeed#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

; Use HWiNFO Clock Speed
[UseHWiNFOClockSpeedLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="HWiNFO Clock Speed:"

[UseHWiNFOClockSpeedButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[UseHWiNFOClockSpeedLabel:W]r
Y=0r
Text="Enabled"
Hidden=(#useHWiNFOClockSpeed# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "useHWiNFOClockSpeed" 0 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "useHWiNFOClockSpeed" "#dUseHWiNFOClockSpeed#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

[UseHWiNFOClockSpeedButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=#useHWiNFOClockSpeed#
LeftMouseUpAction=[!WriteKeyValue Variables "useHWiNFOClockSpeed" 1 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "useHWiNFOClockSpeed" "#dUseHWiNFOClockSpeed#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

; Show CPU fan speed information
[ShowCpuFanSpeedLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Fan Speed Information:"

[ShowCpuFanSpeedButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[ShowCpuFanSpeedLabel:W]r
Y=0r
Text="Enabled"
Hidden=(#showCpuFanSpeed# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "showCpuFanSpeed" 0 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showCpuFanSpeed" "#dShowCpuFanSpeed#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

[ShowCpuFanSpeedButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=#showCpuFanSpeed#
LeftMouseUpAction=[!WriteKeyValue Variables "showCpuFanSpeed" 1 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showCpuFanSpeed" "#dShowCpuFanSpeed#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

; Line Graph
[ShowLineGraphLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Line Graph:"

[ShowLineGraphButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[ShowLineGraphLabel:W]r
Y=0r
Text="Enabled"
Hidden=(#showLineGraph# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "showLineGraph" 0 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showLineGraph" "#dShowLineGraph#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

[ShowLineGraphButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=#showLineGraph#
LeftMouseUpAction=[!WriteKeyValue Variables "showLineGraph" 1 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showLineGraph" "#dShowLineGraph#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

; Average Cpu Only
[ShowAvgCpuLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Average Cpu Usage Graph (overrides):"

[ShowAvgCpuButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[ShowAvgCpuLabel:W]r
Y=0r
Text="Enabled"
Hidden=(#showAvgCpuOnly# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "showAvgCpuOnly" 0 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showAvgCpuOnly" "#dShowAvgCpuOnly#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

[ShowAvgCpuButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=#showAvgCpuOnly#
LeftMouseUpAction=[!WriteKeyValue Variables "showAvgCpuOnly" 1 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showAvgCpuOnly" "#dShowAvgCpuOnly#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

; Core Temperatures
[ShowCoreTempsLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Core Temperatures (requires HWiNFO):"

[ShowCoreTempsButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[ShowCoreTempsLabel:W]r
Y=0r
Text="Enabled"
Hidden=#disableTemps#
LeftMouseUpAction=[!WriteKeyValue Variables "disableTemps" 1 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "disableTemps" "#dDisableTemps#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

[ShowCoreTempsButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=(#disableTemps# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "disableTemps" 0 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "disableTemps" "#dDisableTemps#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

; Temperatures UOM
[TempUOMLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Temps Unit of Measurement:"

[TempUOMDegFButton]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[TempUOMLabel:W]r
Y=0r
Text="Fahrenheit"
Hidden=#tempsInCelsius#
LeftMouseUpAction=[!WriteKeyValue Variables "tempUOM" "C" "#gadgetSettingsPath#"][!WriteKeyValue Variables "tempsInCelsius" 1 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "tempUOM" "#dTempUOM#" "#gadgetSettingsPath#"][!WriteKeyValue Variables "tempsInCelsius" "#dTempsInCelsius#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

[TempUOMDegCButton]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Celsius"
Hidden=(#tempsInCelsius# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "tempUOM" "F" "#gadgetSettingsPath#"][!WriteKeyValue Variables "tempsInCelsius" 0 "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "tempUOM" "#dTempUOM#" "#gadgetSettingsPath#"][!WriteKeyValue Variables "tempsInCelsius" "#dTempsInCelsius#" "#gadgetSettingsPath#"][!RefreshGroup "AllCPUMeter"][!Refresh]

; ----- Colors -----
[ColorsLabel]
Meter=String
MeterStyle=StyleText | StyleSectionLabel
Text="Coloring Options"

; RAM Color
[ColorsRamLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="RAM Color"

[ColorsRamBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsRamBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorRam" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorRam "#dColorRam#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorRam#

[ColorsRamAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsRamAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsRamString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorRam#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 1"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorRam "#dColorRam#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Page Color
[ColorsPageLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Page File Color"

[ColorsPageBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsPageBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorPage" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorPage "#dColorPage#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorPage#

[ColorsPageAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsPageAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsPageString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorPage#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 2"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorPage "#dColorPage#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Fan Color
[ColorsFanLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Fan Color"

[ColorsFanBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsFanBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorFan" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorFan "#dColorFan#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorFan#

[ColorsFanAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsFanAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsFanString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorFan#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 3"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorFan "#dColorFan#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Average Cpu Color
[ColorsAvgCpuLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Average CPU Color"

[ColorsAvgCpuBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsAvgCpuBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorAvgCpu" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorAvgCpu "#dColorAvgCpu#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorAvgCpu#

[ColorsAvgCpuAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsAvgCpuAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsAvgCpuString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorAvgCpu#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 4"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorAvgCpu "#dColorAvgCpu#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 1 Color
[ColorsCore1Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Core 1 Color"

[ColorsCore1BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore1Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore1" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore1 "#dColorCore1#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore1#

[ColorsCore1AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore1AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore1String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore1#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 5"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore1 "#dColorCore1#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 2 Color
[ColorsCore2Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Core 2 Color"

[ColorsCore2BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore2Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore2" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore2 "#dColorCore2#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore2#

[ColorsCore2AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore2AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore2String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore2#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 6"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore2 "#dColorCore2#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 3 Color
[ColorsCore3Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Core 3 Color"

[ColorsCore3BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore3Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore3" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore3 "#dColorCore3#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore3#

[ColorsCore3AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore3AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore3String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore3#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 7"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore3 "#dColorCore3#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 4 Color
[ColorsCore4Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=([ColorsRamAlphaBarBg:X] + [ColorsRamAlphaBarBg:W] + 3)
Y=[ColorsRamLabel:Y]
Text="Core 4 Color"

[ColorsCore4BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore4Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore4" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore4 "#dColorCore4#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore4#

[ColorsCore4AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore4AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore4String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore4#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 8"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore4 "#dColorCore4#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 5 Color
[ColorsCore5Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore4Label:X]
Text="Core 5 Color"

[ColorsCore5BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore5Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore5" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore5 "#dColorCore5#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore5#

[ColorsCore5AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore5AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore5String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore5#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 9"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore5 "#dColorCore5#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 6 Color
[ColorsCore6Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore4Label:X]
Text="Core 6 Color"

[ColorsCore6BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore6Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore6" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore6 "#dColorCore6#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore6#

[ColorsCore6AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore6AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore6String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore6#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 10"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore6 "#dColorCore6#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 7 Color
[ColorsCore7Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore4Label:X]
Text="Core 7 Color"

[ColorsCore7BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore7Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore7" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore7 "#dColorCore7#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore7#

[ColorsCore7AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore7AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore7String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore7#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 11"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore7 "#dColorCore7#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 8 Color
[ColorsCore8Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore4Label:X]
Text="Core 8 Color"

[ColorsCore8BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore8Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore8" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore8 "#dColorCore8#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore8#

[ColorsCore8AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore8AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore8String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore8#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 12"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore8 "#dColorCore8#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 9 Color
[ColorsCore9Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore4Label:X]
Text="Core 9 Color"

[ColorsCore9BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore9Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore9" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore9 "#dColorCore9#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore9#

[ColorsCore9AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore9AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore9String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore9#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 13"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore9 "#dColorCore9#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 10 Color
[ColorsCore10Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore4Label:X]
Text="Core 10 Color"

[ColorsCore10BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore10Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore10" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore10 "#dColorCore10#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore10#

[ColorsCore10AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore10AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore10String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore10#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 14"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore10 "#dColorCore10#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 11 Color
[ColorsCore11Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=([ColorsCore4AlphaBarBg:X] + [ColorsCore4AlphaBarBg:W] + 3)
Y=[ColorsCore4Label:Y]
Text="Core 11 Color"

[ColorsCore11BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore11Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore11" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore11 "#dColorCore11#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore11#

[ColorsCore11AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore11AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore11String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore11#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 15"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore11 "#dColorCore11#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 12 Color
[ColorsCore12Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore11Label:X]
Text="Core 12 Color"

[ColorsCore12BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore12Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore12" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore12 "#dColorCore12#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore12#

[ColorsCore12AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore12AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore12String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore12#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 16"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore12 "#dColorCore12#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 13 Color
[ColorsCore13Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore11Label:X]
Text="Core 13 Color"

[ColorsCore13BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore13Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore13" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore13 "#dColorCore13#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore13#

[ColorsCore13AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore13AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore13String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore13#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 17"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore13 "#dColorCore13#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 14 Color
[ColorsCore14Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore11Label:X]
Text="Core 14 Color"

[ColorsCore14BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore14Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore14" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore14 "#dColorCore14#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore14#

[ColorsCore14AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore14AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore14String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore14#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 18"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore14 "#dColorCore14#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 15 Color
[ColorsCore15Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore11Label:X]
Text="Core 15 Color"

[ColorsCore15BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore15Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore15" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore15 "#dColorCore15#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore15#

[ColorsCore15AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore15AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore15String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore15#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 19"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore15 "#dColorCore15#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]

; Core 16 Color
[ColorsCore16Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsCore11Label:X]
Text="Core 16 Color"

[ColorsCore16BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsCore16Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorCore16" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore16 "#dColorCore16#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]
SolidColor=#sColorCore16#

[ColorsCore16AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsCore16AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup AllCPUMeter][!Refresh]

[ColorsCore16String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorCore16#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 20"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorCore16 "#dColorCore16#" "#gadgetSettingsPath#"][!RefreshGroup AllCPUMeter][!Refresh]