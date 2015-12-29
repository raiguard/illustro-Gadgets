;
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
Command1=[!WriteKeyValue Variables colorPrimary "$UserInput$" "#commonSettingsPath#"][!RefreshGroup illustroGadgets] DefaultValue="#colorPrimary#" X=[ColorsPrimaryString:X] Y=[ColorsPrimaryString:Y] W=[ColorsPrimaryString:W] H=[ColorsPrimaryString:H]
Command2=[!WriteKeyValue Variables colorSecondary "$UserInput$" "#commonSettingsPath#"][!RefreshGroup illustroGadgets] DefaultValue="#colorSecondary#" X=[ColorsSecondaryString:X] Y=[ColorsSecondaryString:Y] W=[ColorsSecondaryString:W] H=[ColorsSecondaryString:H]
Command3=[!WriteKeyValue Variables colorAccent "$UserInput$" "#commonSettingsPath#"][!RefreshGroup illustroGadgets] DefaultValue="#colorAccent#" X=[ColorsAccentString:X] Y=[ColorsAccentString:Y] W=[ColorsAccentString:W] H=[ColorsAccentString:H]
Command4=[!WriteKeyValue Variables colorDim "$UserInput$" "#commonSettingsPath#"][!RefreshGroup illustroGadgets] DefaultValue="#colorDim#" X=[ColorsDimString:X] Y=[ColorsDimString:Y] W=[ColorsDimString:W] H=[ColorsDimString:H]

; ========================================================================================================================
;   METERS
; ========================================================================================================================

[NavMenuIndicatorTop]
Meter=Image
MeterStyle=StyleNavMenuIndicatorTop
Y=([NavMenuButtonAppearance:Y] + 4)

[NavMenuIndicatorBottom]
Meter=Image
MeterStyle=StyleNavMenuIndicatorBottom
Y=[NavMenuIndicatorTop:H]r

[PageDescription]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
X=(#navMenuSeparatorX# + 10)
Y=(#bodyStartY# + 5)
Text="General visual options across all skins"

; ----- Graph Antialiasing -----

[GraphAntialiasingLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
X=0r
Text="Line Graph Antialiasing:"

[GraphAntialiasingToggleButtonOn]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[GraphAntialiasingLabel:W]r
Y=0r
Text="Enabled"
LeftMouseUpAction=[!WriteKeyValue Variables enableLineGraphAntialiasing 0 "#commonSettingsPath#"][!RefreshGroup illustroGadgets]
MiddleMouseUpAction=[!WriteKeyValue Variables enableLineGraphAntialiasing "#dEnableLineGraphAntialiasing#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]
Hidden=(#enableLineGraphAntialiasing# = 1) ? 0 : 1

[GraphAntialiasingToggleButtonOff]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
LeftMouseUpAction=[!WriteKeyValue Variables enableLineGraphAntialiasing 1 "#commonSettingsPath#"][!RefreshGroup illustroGadgets]
MiddleMouseUpAction=[!WriteKeyValue Variables enableLineGraphAntialiasing "#dEnableLineGraphAntialiasing#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]
Hidden=#enableLineGraphAntialiasing#

; ----- Colors -----
[ColorsLabel]
Meter=String
MeterStyle=StyleText
FontColor=#colorAccent#
FontSize=#fontSize3#
X=(#navMenuSeparatorX# + 9)
Y=25r
Text="Coloring Options"

; Primary Color
[ColorsPrimaryLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Primary Color"

[ColorsPrimaryBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsPrimaryBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorPrimary" "FileName=#commonSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorPrimary "#dColorPrimary#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]
SolidColor=#colorPrimary#

[ColorsPrimaryAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg
LeftMouseUpAction=[!CommandMeasure MeasureSettingsScript "changeAlpha('colorPrimary',$MouseX:%$,#commonSettingsPath#)"][!RefreshGroup illustroGadgets]

[ColorsPrimaryAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=1

[ColorsPrimaryString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorPrimary#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 1"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorPrimary "#dColorPrimary#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]

; Secondary color
[ColorsSecondaryLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Secondary Color"

[ColorsSecondaryBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsSecondaryBox]
Meter=Image
MeterStyle=StyleColorsBox
SolidColor=#colorSecondary#
LeftMouseUpAction=["#rainRgb#" "VarName=colorSecondary" "FileName=#commonSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorSecondary "#dColorSecondary#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]

[ColorsSecondaryAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg
LeftMouseUpAction=[!CommandMeasure MeasureSettingsScript "changeAlpha('colorSecondary',$MouseX:%$,#commonSettingsPath#)"][!RefreshGroup illustroGadgets]

[ColorsSecondaryAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
W=1

[ColorsSecondaryString]
Meter=String
MeterStyle=StyleText | StyleColorsString
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 2"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorSecondary "#dColorSecondary#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]
Text=#colorSecondary#

; Accent color
[ColorsAccentLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Accent Color"

[ColorsAccentBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsAccentBox]
Meter=Image
MeterStyle=StyleColorsBox
SolidColor=#colorAccent#
LeftMouseUpAction=["#rainRgb#" "VarName=colorAccent" "FileName=#commonSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorAccent "#dColorAccent#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]

[ColorsAccentAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg
LeftMouseUpAction=[!CommandMeasure MeasureSettingsScript "changeAlpha('colorAccent',$MouseX:%$,#commonSettingsPath#)"][!RefreshGroup illustroGadgets]

[ColorsAccentAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
W=1

[ColorsAccentString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorAccent#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 3"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorAccent "#dColorAccent#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]

; Dim color
[ColorsDimLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Dim Color"

[ColorsDimBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDimBox]
Meter=Image
MeterStyle=StyleColorsBox
SolidColor=#colorDim#
LeftMouseUpAction=["#rainRgb#" "VarName=colorDim" "FileName=#commonSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDim "#dColorDim#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]

[ColorsDimAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg
LeftMouseUpAction=[!CommandMeasure MeasureSettingsScript "changeAlpha('colorDim',$MouseX:%$,#commonSettingsPath#)"][!RefreshGroup illustroGadgets]

[ColorsDimAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
W=1

[ColorsDimString]
Meter=String
MeterStyle=StyleText | StyleColorsString
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 4"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDim "#dColorDim#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]
Text=#colorDim#