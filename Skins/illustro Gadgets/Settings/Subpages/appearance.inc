;
; ========================================================================================================================
;   STYLES
; ========================================================================================================================

[StyleColorsLabel]
FontSize=#fontSize2#
X=(#navMenuSeparatorX# + 10)
Y=23r

[StyleColorsBoxBg]
SolidColor=0,0,0,255
X=3r
Y=20r
W=24
H=24

[StyleColorsBox]
X=2r
Y=2r
W=20
H=20

[StyleColorsAlphaBarBg]
SolidColor=#colorDim#
X=26r
Y=0r
W=110
H=4

[StyleColorsAlphaBar]
SolidColor=#colorPrimary#
X=0r
Y=0r
H=4

[StyleColorsString]
FontSize=#fontSize2#
FontColor=#colorSecondary#
X=-2r
Y=8r

[StyleToggleButtonLabel]
FontSize=#fontSize2#
Y=25r

[StyleToggleButton]
FontSize=#fontSize2#
FontColor=#colorSecondary#

; ========================================================================================================================
;   MEASURES
; ========================================================================================================================

[MeasureInputColorConfig]
Measure=Plugin
Plugin=InputText
SolidColor=#colorInputTextBackground#
FontColor=#colorInputTextFont#
FontFace=#fontFace#
FontSize=#fontSize#
StringStyle=Bold
UpdateDivider=-1
FocusDismiss=1
Command1=[!WriteKeyValue Variables colorPrimary "$UserInput$" "#commonSettingsPath#"][!RefreshGroup illustroGadgets] DefaultValue="#colorPrimary#" X=[ColorsPrimaryString:X] Y=[ColorsPrimaryString:Y] W=[ColorsPrimaryString:W] H=[ColorsPrimaryString:H]

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
X=([GraphAntialiasingLabel:W] + 2)r
Y=0r
Text="Enabled"
LeftMouseUpAction=[!WriteKeyValue Variables enableLineGraphAntialiasing 0 "#commonSettingsPath#"][!RefreshGroup illustroGadgets]
Hidden=(#enableLineGraphAntialiasing# = 1) ? 0 : 1

[GraphAntialiasingToggleButtonOff]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
LeftMouseUpAction=[!WriteKeyValue Variables enableLineGraphAntialiasing 1 "#commonSettingsPath#"][!RefreshGroup illustroGadgets]
Hidden=#enableLineGraphAntialiasing#

; ----- Colors -----
[ColorsLabel]
Meter=String
MeterStyle=StyleText
FontColor=#colorAccent#
FontSize=#fontSize3#
X=(#navMenuSeparatorX# + 10)
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
SolidColor=#colorPrimary#

[ColorsPrimaryAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsPrimaryAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80

[ColorsPrimaryString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorPrimary#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 1"]

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

[ColorsSecondaryAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsSecondaryAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
W=80

[ColorsSecondaryString]
Meter=String
MeterStyle=StyleText | StyleColorsString
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

[ColorsAccentAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsAccentAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
W=80

[ColorsAccentString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorAccent#

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

[ColorsDimAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDimAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
W=80

[ColorsDimString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDim#