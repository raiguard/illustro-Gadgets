;
; ========================================================================================================================
;   STYLES
; ========================================================================================================================

[StyleHWiNFOLabel]
FontSize=#fontSize2#
X=#panelContentMarginLeftX#

[StyleHWiNFOValue]
FontSize=#fontSize2#
FontColor=#colorSecondary#
Y=0r
ToolTipText="Left-click to edit"

; ========================================================================================================================
;   MEASURES
; ========================================================================================================================

; ========================================================================================================================
;   METERS
; ========================================================================================================================

; ----- Nav Menu Indicator -----

[NavMenuIndicatorTop]
Meter=Image
MeterStyle=StyleNavMenuIndicatorTop
Y=([NavMenuButtonHWiNFOSettings:Y] + 4)

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
Text="HWiNFO File backup options, sensor ID configuration settings"

; ----- Config file backup -----

[ConfigFileLabel]
Meter=String
MeterStyle=StyleText | StyleFileLabel
Text="HWiNFO Backup File Location"

[ConfigFileString]
Meter=String
MeterStyle=StyleText | StyleFileString
Text="#HWiNFO-CONFIGPATH#"
LeftMouseUpAction=["#rainFile#" "File" "Variables" "HWiNFO-CONFIGPATH" "#commonSettingsPath#" "#HWINFO-CONFIGPATH#"]

[ConfigFileDescription]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
X=#panelContentMarginLeftX#
W=#panelWidth#
ClipString=2
Text="By default, these sensor IDs are stored in a file contained inside illustro Gadgets' skins folder. However, when updating the skin pack these values will be overwritten. To prevent this, click on the file path above and cut the 'HWINFOConfig.inc' file out of the folder and paste it elsewhere. For example, you could move it to 'C:\Users\iamanai\Documents'. If you move the file, all you will have to do after updating is re-point the skin pack to the file's location and you won't have to keep redoing the sensor IDs on every update!"

; ----- Sensor IDs -----

; Title and links
[SensorIdsSectionLabel]
Meter=String
MeterStyle=StyleText | StyleSectionLabel
Y=([ConfigFileDescription:H] + 5)r
Text="HWiNFO Sensor IDs"

; Section navigation
[HWiNFONavCpu0]
Meter=String
MeterStyle=StyleText
FontColor=#colorAccent#
X=#panelContentMarginLeftX#
Y=20r
Text="CPU0"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoSubpage "cpu0" "#varPath#"][!Refresh]

[HWiNFONavCpu0Div]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
X=([HWiNFONavCpu0:W] + 3)r
Y=-1r
Text="|"

[HWiNFONavCpu0Dts]
Meter=String
MeterStyle=StyleText
FontColor=#colorAccent#
X=12r
Y=1r
Text="CPU0-DTS"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoSubpage "cpu0-dts" "#varPath#"][!Refresh]

[HWiNFONavCpu0DtsDiv]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
X=([HWiNFONavCpu0Dts:W] + 3)r
Y=-1r
Text="|"

[HWiNFONavMobo]
Meter=String
MeterStyle=StyleText
FontColor=#colorAccent#
X=12r
Y=1r
Text="MOBO"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoSubpage "mobo" "#varPath#"][!Refresh]

[HWiNFONavMoboDiv]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
X=([HWiNFONavMobo:W] + 3)r
Y=-1r
Text="|"

[HWiNFONavGpu0]
Meter=String
MeterStyle=StyleText
FontColor=#colorAccent#
X=12r
Y=1r
Text="GPU0"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoSubpage "gpu0" "#varPath#"][!Refresh]

[HWiNFONavGpu0Div]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
X=([HWiNFONavGpu0:W] + 3)r
Y=-1r
Text="|"

[HWiNFONavGpu1]
Meter=String
MeterStyle=StyleText
FontColor=#colorAccent#
X=12r
Y=1r
Text="GPU1"
LeftMouseUpAction=[!WriteKeyValue Variables hwinfoSubpage "gpu1" "#varPath#"][!Refresh]

; Links
[HWiNFOHelpButton]
Meter=String
MeterStyle=StyleText
FontColor=#colorAccent#
StringAlign=Right
X=(#generalXMarginRight# - 3)
Y=0r
Text="How-to"
LeftMouseUpAction=["#@#Addons\HWiNFO\HWiNFOHowTo.txt"]

[HWiNFOSmvViewDivider]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
X=(-[HWiNFOHelpButton:W] - 12)r
Y=-1r
Text="|"

[HWiNFOSmvViewButton]
Meter=String
MeterStyle=StyleText
FontColor=#colorAccent#
StringAlign=Right
X=-3r
Y=1r
Text="HWiNFO SMV"
LeftMouseUpAction=["#hwinfoSmv#"]

@includeHWiNFOSubpage="HWiNFO Subpages\#hwinfoSubpage#.inc"