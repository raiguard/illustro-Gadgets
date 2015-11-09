;
; GENERAL CONFIGURATION SETTINGS - SUBSET OF SETTINGS.INI
;

; ============================================================
;   STYLES
; ============================================================

; -- Input boxes --
[StyleInputBoxText]
FontColor=#colorFont#,#generalOpacity#
FontSize=#fontSize#
FontFace=#fontFace#
StringAlign=Left
SolidColor=#graphBgColorAlt#,#ghostedOpacity#
AntiAlias=1
X=([GeneralConfigSeparatorBar:X] + 5)
Y=-2r
H=14
Padding=2,2,0,0

[StyleInputBoxColor]  
X=([GeneralConfigSeparatorBar:X] + 5)
Y=-2r
H=16
W=28
SolidColor=255,255,255,80
AntiAlias=1

; -- Text / Labels --
[StyleTextLabel]
FontColor=#colorFont#,#alphaGeneral#
Y=30r

[StyleTextSubLabelBoxContent]
FontColor=#colorFont#,#alphaGhosted#
Y=22r

; ============================================================
;   METERS
; ============================================================

[GeneralConfigTitle]
Meter=String
MeterStyle=StyleText
FontSize=(#titleSize#)
StringAlign=Right
X=(#panelCenterX# - 5)
Y=(#bodyStartY#)
Text="G E N E R A L"

[GeneralConfigSeparatorBar]
Meter=Image
SolidColor=#separatorBarColor#,#separatorBarOpacity#
X=#panelCenterX#
Y=([GeneralConfigTitle:Y] + 20)
H=(#bgHeight# - [GeneralConfigSeparatorBar:Y] - 8)
W=1

; -- General Toggles --
[EnableLineGraphAntialiasingLabel]
Meter=String
MeterStyle=StyleText
FontColor=#colorFont#,#ghostedOpacity#
StringAlign=Right
X=([GeneralConfigSeparatorBar:X] - 5)
Y=0r
Text="Line Graph Antialiasing"
ToolTipText="Default: Enabled | Disabling AA improves accuracy, but enabling it looks better"

[EnableLineGraphAntialiasingButtonEnabled]
Meter=String
MeterStyle=StyleText
FontColor=#colorFontLink#,#generalOpacity#
StringStyle=Bold
FontSize=#fontSize2#
X=10r
Y=0r
Text="Enabled"
Hidden=(#enableLineGraphAntialiasing# = 1 ? 0 : 1)

[EnableLineGraphAntialiasingButtonEnabledMouseRegion]
Meter=Image
SolidColor=0,0,0,0
X=[EnableLineGraphAntialiasingButtonEnabled:X]
Y=[EnableLineGraphAntialiasingButtonEnabled:Y]
W=[EnableLineGraphAntialiasingButtonEnabled:W]
H=[EnableLineGraphAntialiasingButtonEnabled:H]
LeftMouseUpAction=[!WriteKeyValue Variables enableLineGraphAntialiasing 0 "#commonSettingsPath#"][!RefreshGroup "illustroGadgets"]
MiddleMouseUpAction=[!WriteKeyValue Variables enableLineGraphAntialiasing "#dEnableLineGraphAntialiasing#" "#commonSettingsPath#"][!RefreshGroup "illustroGadgets"]
DynamicVariables=1
Hidden=(#enableLineGraphAntialiasing# = 1 ? 0 : 1)

[EnableLineGraphAntialiasingButtonDisabled]
Meter=String
MeterStyle=StyleText
FontColor=#colorFontLink#,#generalOpacity#
StringStyle=Bold
FontSize=#fontSize2#
X=0r
Y=0r
Text="Disabled"
Hidden=#enableLineGraphAntialiasing#

[EnableLineGraphAntialiasingButtonDisabledMouseRegion]
Meter=Image
SolidColor=0,0,0,0
X=[EnableLineGraphAntialiasingButtonDisabled:X]
Y=[EnableLineGraphAntialiasingButtonDisabled:Y]
W=[EnableLineGraphAntialiasingButtonDisabled:W]
H=[EnableLineGraphAntialiasingButtonDisabled:H]
LeftMouseUpAction=[!WriteKeyValue Variables enableLineGraphAntialiasing 1 "#commonSettingsPath#"][!RefreshGroup "illustroGadgets"]
MiddleMouseUpAction=[!WriteKeyValue Variables enableLineGraphAntialiasing "#dEnableLineGraphAntialiasing#" "#commonSettingsPath#"][!RefreshGroup "illustroGadgets"]
DynamicVariables=1
Hidden=#enableLineGraphAntialiasing#

; -- General colors --
; Primary Font Color
[ColorFontLabel]
Meter=String
MeterStyle=StyleText | StyleTextSubLabelBoxContent
FontColor=#colorFont#,#ghostedOpacity#
StringAlign=Right
X=([GeneralConfigSeparatorBar:X] - 5)
Text="Primary Font Color"
ToolTipText="Default: Enabled | Disabling AA improves accuracy, but enabling it looks better"

[ColorFontInputBoxText]
Meter=String
MeterStyle=StyleInputBoxText
W=80
Text=#colorFont#
LeftMouseUpAction=[!CommandMeasure "MeasureInputColorConfig" "Executebatch 1"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorFont "#dColorFont#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]

[ColorFontInputBoxColor]
Meter=Image
MeterStyle=StyleInputBoxColor
SolidColor=#colorFont#,#generalOpacity#
X=85r
Y=0r

; Link Font Color
[ColorFontLinkLabel]
Meter=String
MeterStyle=StyleText | StyleTextSubLabelBoxContent
FontColor=#colorFont#,#ghostedOpacity#
StringAlign=Right
X=([GeneralConfigSeparatorBar:X] - 5)
Text="Link Font Color"
ToolTipText="Default: Enabled | Disabling AA improves accuracy, but enabling it looks better"

[ColorFontLinkInputBoxText]
Meter=String
MeterStyle=StyleInputBoxText
W=80
Text=#colorFontLink#
LeftMouseUpAction=[!CommandMeasure "MeasureInputColorConfig" "Executebatch 2"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorFontLink "#dColorFontLink#" "#commonSettingsPath#"][!RefreshGroup illustroGadgets]

[ColorFontLinkInputBoxColor]
Meter=Image
MeterStyle=StyleInputBoxColor
SolidColor=#colorFontLink#,#generalOpacity#
X=85r
Y=0r
LeftMouseUpAction=["#rainRGB#" "VarName=colorFontLink" "FileName=#commonSettingsPath#"]

; -- HWiNFO Configuration Backup --
[HWiNFOConfigBackupLabel]
Meter=String
MeterStyle=StyleText | StyleTextLabel
FontSize=10
StringAlign=Right
X=(#separatorBarX# - 5)
Text="HWiNFO Config Backup"

[HWiNFOConfigBackupViewFileButton]
Meter=String
MeterStyle=StyleText
FontColor=#colorFontLink#,#generalOpacity#
X=([GeneralConfigSeparatorBar:X] + 5)
Y=3r
Text="View File"
ToolTipTitle="View raw data file"
ToolTipText="#HWiNFO-CONFIGPATH#"

[HWiNFOConfigBackupViewFileButtonMouseRegion]
Meter=Image
SolidColor=0,0,0,0
X=[HWiNFOConfigBackupViewFileButton:X]
Y=[HWiNFOConfigBackupViewFileButton:Y]
W=[HWiNFOConfigBackupViewFileButton:W]
H=[HWiNFOConfigBackupViewFileButton:H]
LeftMouseUpAction=["#HWiNFO-CONFIGPATH#"]
DynamicVariables=1

[HWiNFOConfigBackupViewFileHelpButton]
Meter=Image
ImageName=#@#Images\Settings\Help.png
ImageAlpha=#generalOpacity#
X=(#generalXMarginRight# - 11)
Y=0r
W=11
H=11
AntiAlias=1
ToolTipTitle="How to configure HWiNFO sensors"
ToolTipText="Written by SilverAzide, edited by iamanai"

[HWiNFOConfigBackupFilePathLabel]
Meter=String
MeterStyle=StyleText
FontColor=#colorFont#,#ghostedOpacity#
StringAlign=Right
X=([GeneralConfigSeparatorBar:X] - 5)
Text="File Path"

[HWiNFOConfigBackupFilePathTextBox]
Meter=String
MeterStyle=StyleInputBoxText
W=(#generalXMarginRight# - ([GeneralConfigSeparatorBar:X] + 5) - 3)
Text="#HWiNFO-CONFIGPATH#"
LeftMouseUpAction=[!CommandMeasure "MeasureInputHWiNFOConfig" "Executebatch 1"]
ClipString=1

[MeasureInputHWiNFOConfig]
Measure=Plugin
Plugin=InputText
SolidColor=#colorInputTextBackground#
FontColor=#colorInputTextFont#,#alphaInputTextFont#
FontFace=#fontFace#
FontSize=#fontSize#
StringStyle=Bold
UpdateDivider=-1
FocusDismiss=1
Command1=[!WriteKeyValue Variables HWiNFO-CONFIGPATH "$UserInput$" "#commonSettingsPath#"][!RefreshGroup illustroGadgetsSettings] DefaultValue="#HWiNFO-CONFIGPATH#" X=[HWiNFOConfigBackupFilePathTextBox:X] Y=[HWiNFOConfigBackupFilePathTextBox:Y]  W=[HWiNFOConfigBackupFilePathTextBox:W] H=[HWiNFOConfigBackupFilePathTextBox:H]

[MeasureInputColorConfig]
Measure=Plugin
Plugin=InputText
SolidColor=#colorInputTextBackground#
FontColor=#colorInputTextFont#,#alphaInputTextFont#
FontFace=#fontFace#
FontSize=#fontSize#
StringStyle=Bold
UpdateDivider=-1
FocusDismiss=1
Command1=[!WriteKeyValue Variables colorFont "$UserInput$" "#commonSettingsPath#"][!RefreshGroup illustroGadgets] DefaultValue="#colorFont#" X=[ColorFontInputBoxText:X] Y=[ColorFontInputBoxText:Y] W=[ColorFontInputBoxText:W] H=[ColorFontInputBoxText:H]
Command2=[!WriteKeyValue Variables colorFontLink "$UserInput$" "#commonSettingsPath#"][!RefreshGroup illustroGadgets] DefaultValue="#colorFontLink#" X=[ColorFontLinkInputBoxText:X] Y=[ColorFontLinkInputBoxText:Y] W=[ColorFontLinkInputBoxText:W] H=[ColorFontLinkInputBoxText:H]