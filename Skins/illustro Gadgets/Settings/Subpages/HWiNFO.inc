;
; HWiNFO CONFIGURATION SETTINGS - SUBSET OF SETTINGS.INI
;

; ============================================================
;   STYLES
; ============================================================

; -- Input boxes --
[StyleInputBoxText]
FontColor=#fontColor#,#generalOpacity#
FontSize=#fontSize#
FontFace=#fontFace#
StringAlign=Left
SolidColor=#graphBgColorAlt#,#graphOpacity#
AntiAlias=1
X=([HWiNFOConfigSeparatorBar:X] + 5)
Y=20r
H=14
W=(#generalXMarginRight# - ([HWiNFOConfigSeparatorBar:X] + 5) - 2)
Padding=2,2,0,0

; ============================================================
;   METERS
; ============================================================

[HWiNFOConfigTitle]
Meter=String
MeterStyle=StyleText
FontSize=(#titleSize#)
StringAlign=Right
X=(#panelCenterX# - 10)
Y=(#bodyStartY#)
Text="H W i N F O   C O N F I G"

[HWiNFOConfigSeparatorBar]
Meter=Image
SolidColor=#separatorBarColor#,#separatorBarOpacity#
X=#panelCenterX#
Y=([HWiNFOConfigTitle:Y] + 20)
H=(#bgHeight# - [HWiNFOConfigSeparatorBar:Y] - 8)
W=1

; -- Navigation Buttons --
[HWiNFOSmvViewButton]
Meter=String
MeterStyle=StyleText
FontColor=#fontColorLink#,#generalOpacity#
X=([HWiNFOConfigSeparatorBar:X] + 5)
Y=([HWiNFOConfigTitle:Y] + 3)
Text="HWiNFO SMV"

[HWiNFOSmvViewButtonMouseRegion]
Meter=Image
SolidColor=0,0,0,0
X=[HWiNFOSmvViewButton:X]
Y=[HWiNFOSmvViewButton:Y]
W=[HWiNFOSmvViewButton:W]
H=[HWiNFOSmvViewButton:H]
LeftMouseUpAction=["#@#Addons\HWiNFO\HWiNFOSharedMemoryViewer.exe"]
DynamicVariables=1

[HWiNFOHelpButton]
Meter=Image
ImageName=#@#Images\Settings\Help.png
ImageAlpha=#generalOpacity#
X=(#generalXMarginRight# - 11)
Y=0r
W=11
H=11
AntiAlias=1
ToolTipTitle="How to configure HWiNFO sensors"
ToolTipText="By SilverAzide, edited by iamanai"

[HWiNFOHelpButtonMouseRegion]
Meter=Image
SolidColor=0,0,0,0
X=[HWiNFOHelpButton:X]
Y=[HWiNFOHelpButton:Y]
W=[HWiNFOHelpButton:W]
H=[HWiNFOHelpButton:H]
LeftMouseUpAction=["#@#Addons\HWiNFO\HWiNFOHowTo.txt"]
DynamicVariables=1

; -- Configuration Backup --
[HWiNFOConfigBackupLabel]
Meter=String
MeterStyle=StyleText
FontSize=10
StringAlign=Right
X=(#separatorBarX# - 5)
Y=[HWiNFOConfigSeparatorBar:Y]
Text="Config Backup"

[HWiNFOConfigBackupViewFileButton]
Meter=String
MeterStyle=StyleText
FontColor=#fontColorLink#,#generalOpacity#
X=([HWiNFOConfigSeparatorBar:X] + 5)
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

[HWiNFOConfigBackupFilePathLabel]
Meter=String
MeterStyle=StyleText
FontColor=#fontColor#,#ghostedOpacity#
StringAlign=Right
X=([HWiNFOConfigSeparatorBar:X] - 5)
Text="File Path"

[HWiNFOConfigBackupFilePathTextBox]
Meter=String
MeterStyle=StyleInputBoxText
Y=-2r
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