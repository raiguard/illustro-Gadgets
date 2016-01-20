;
; ========================================================================================================================
;   STYLES
; ========================================================================================================================

[StylePackTitle]
FontSize=15
StringStyle=Normal
StringAlign=Center
X=#panelCenterX#
Y=(#bodyStartY# + 5)

[StyleLinksBar]
FontSize=#fontSize3#
FontColor=#colorAccent#
X=20r
Y=0r
DynamicVariables=1

; ----- Update Checker -----

[StyleUpdateCheckerConnecting]
FontColor=#colorSecondary#
Text="Connecting to GitHub..."

[StyleUpdateCheckerYes]
FontColor=#colorPrimary#
Text="v[MeasureCurrentReleaseVer] is avaliable for download!"
DynamicVariables=1

[StyleUpdateCheckerNo]
FontColor=#colorSecondary#
Text="illustro Gadgets is up to date"

[StyleUpdateCheckerDev]
FontColor=#colorSecondary#
Text="Using development version"

; ========================================================================================================================
;   MEASURES
; ========================================================================================================================

[MeasureVersionAbsolute]
Measure=String
String=#version#
Substitute=".":"","-d":""

[MeasureIPAddress]
Measure=Plugin
Plugin=WebParser
UpdateRate=1000
Url="https://github.com/iamanai/illustro-Gadgets/blob/master/CurrentReleaseVer.txt"
RegExp="(?siU)<td id="LC1" class="blob-code blob-code-inner js-file-line">(.*)</td>.*"
FinishAction=[!EnableMeasure MeasureVersionCheck]

[MeasureCurrentReleaseVer]
Measure=Plugin
Plugin=WebParser
Url=[MeasureIPAddress]
StringIndex=1

[MeasureCurrentReleaseVerAbsolute]
Measure=Plugin
Plugin=WebParser
Url=[MeasureIPAddress]
StringIndex=1
Substitute=".":"","-d":""

[MeasureVersionCheck]
Measure=Calc
Formula=[MeasureCurrentReleaseVerAbsolute] - [MeasureVersionAbsolute]
IfAboveValue=0
IfAboveAction=[!SetOption UpdateCheckerString MeterStyle "StyleText | StyleUpdateCheckerYes"][!Redraw]
IfEqualValue=0
IfEqualAction=[!SetOption UpdateCheckerString MeterStyle "StyleText | StyleUpdateCheckerNo"][!Redraw]
IfBelowValue=0
IfBelowAction=[!SetOption UpdateCheckerString MeterStyle "StyleText | StyleUpdateCheckerDev"][!Redraw]
DynamicVariables=1
Disabled=1

; ========================================================================================================================
;   METERS
; ========================================================================================================================

; ----- Nav Menu Indicator -----

[NavMenuIndicatorTop]
Meter=Image
MeterStyle=StyleNavMenuIndicatorTop
Y=([NavMenuButtonWelcome:Y] + 4)

[NavMenuIndicatorBottom]
Meter=Image
MeterStyle=StyleNavMenuIndicatorBottom
Y=[NavMenuIndicatorTop:H]r

; ----- Title -----

[WelcomeTitle]
Meter=String
MeterStyle=StyleText | StylePackTitle
Text="illustro Gadgets #version#"

[WelcomeText]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
FontSize=#fontSize2#
ClipString=2
ClipStringW=(#bgWidth# - [WelcomeText:X] - (#bgWidth# - #generalXMarginRight#) - 5)
X=#panelContentMarginLeftX#
Y=30r
Text="illustro Gadgets is a skin suite designed to present the information provided by the AddGadgets.com gadgets from Windows 7, in the sleek theme of illustro. The included All CPU Meter, Network Meter, GPU Meter, and Drives Meter present various bits of information about your system. For full functionality, the skin pack requires HWiNFO to be installed."

; ----- Links Bar -----
[LinksBarDeviantartButton]
Meter=String
MeterStyle=StyleText | StyleLinksBar
X=(#navMenuSeparatorX# + 15)
Y=([WelcomeText:H] + 10)r
Text="DeviantArt"
ToolTipText="http://iamanai.deviantart.com/art/illustro-Gadgets-0-7-1-576638584"
LeftMouseUpAction=["http://iamanai.deviantart.com/art/illustro-Gadgets-0-7-1-576638584"]

[LinksBarDeviantartSeparator]
Meter=String
MeterStyle=StyleText | StyleLinksBar
FontColor=#colorPrimary#
X=([LinksBarDeviantartButton:W] + 5)r
Text="|"

[LinksBarGithubButton]
Meter=String
MeterStyle=StyleText | StyleLinksBar
Text="GitHub"
ToolTipText="https://github.com/iamanai/illustro-Gadgets"
LeftMouseUpAction=["https://github.com/iamanai/illustro-Gadgets"]

[LinksBarGithubSeparator]
Meter=String
MeterStyle=StyleText | StyleLinksBar
FontColor=#colorPrimary#
X=([LinksBarGithubButton:W] + 5)r
Text="|"

[LinksBarTwitterButton]
Meter=String
MeterStyle=StyleText | StyleLinksBar
Text="Twitter"
ToolTipText="https://twitter.com/iamanai_"
LeftMouseUpAction=["https://twitter.com/iamanai_"]

[LinksBarTwitterSeparator]
Meter=String
MeterStyle=StyleText | StyleLinksBar
FontColor=#colorPrimary#
X=([LinksBarTwitterButton:W] + 5)r
Text="|"

[LinksBarRmForumsButton]
Meter=String
MeterStyle=StyleText | StyleLinksBar
Text="RM Forums Post"
ToolTipText="https://forum.rainmeter.net/viewtopic.php?t=21496"
LeftMouseUpAction=["https://forum.rainmeter.net/viewtopic.php?t=21496"]

; ----- Update Checker -----

[UpdateCheckerLabel]
Meter=String
MeterStyle=StyleText
FontColor=#colorAccent#
X=#panelContentMarginLeftX#
Y=[CopyrightText:Y]
Text="Update:"

[UpdateCheckerString]
Meter=String
MeterStyle=StyleText | StyleUpdateCheckerConnecting
X=([UpdateCheckerLabel:W] + 2)r
Y=0r
DynamicVariables=1
