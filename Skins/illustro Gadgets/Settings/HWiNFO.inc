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
H=15
W=(#generalXMarginRight# - ([HWiNFOConfigSeparatorBar:X] + 5) - 2)
Padding=2,3,0,0

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
Meter=String
MeterStyle=StyleText
StringAlign=Right
FontColor=#fontColorLink#,#generalOpacity#
X=#generalXMarginRight#
Y=0r
Text="Help"

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
[LinksLabel]
Meter=String
MeterStyle=StyleText
FontSize=10
StringAlign=Right
X=(#separatorBarX# - 5)
Y=[HWiNFOConfigSeparatorBar:Y]
Text="Config Backup"

[HWiNFOConfigBackupLabel]
Meter=String
MeterStyle=StyleText
FontColor=#fontColor#,#ghostedOpacity#
StringAlign=Right
X=([HWiNFOConfigSeparatorBar:X] - 5)
Text="File Path"

[HWiNFOConfigBackupTextBox]
Meter=String
MeterStyle=StyleInputBoxText
Y=-2r
Text="C:\Users\Caleb\Documents\Rainmeter\External\illustro Gadgets\HWiNFOConfig.inc"
LeftMouseUpAction=[!CommandMeasure "MeasureInputHWiNFOConfig" "Executebatch 1"]
ClipString=1

[MeaureInputHWiNFOConfig]
Measure=Plugin
Plugin=InputText
SolidColor=#colorInputTextBackground#
FontColor=#colorInputTextFont#,#alphaInputTextFont#
FontFace=#fontFace#
UpdateDivider=-1
FocusDismiss=1
Command1=[!WriteKeyValue Variables HWiNFO-CONFIGPATH "$UserInput$" "#commonSettingsPath#"] DefaultValue="#@#Addons\HWiNFO\HWiNFOConfig.inc" X=[HWiNFOConfigBackupTextBox:X] Y=[HWiNFOConfigBackupTextBox:Y]  W=[HWiNFOConfigBackupTextBox:W] H=[HWiNFOConfigBackupTextBox:H]