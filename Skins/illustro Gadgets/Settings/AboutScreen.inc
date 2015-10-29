; 
; =======================================================================
;  STYLES
; =======================================================================

[StyleUpdateCaptionConnecting]
FontColor=#fontColorLink#,#generalOpacity#
Text="Connecting to GitHub..."

[StyleUpdateCaptionYes]
FontColor=#fontColorLink#,#generalOpacity#
Text="Update Available!"

[StyleUpdateCaptionNo]
FontColor=#fontColor#,#ghostedOpacity#
Text="None"

; ------

[StyleUpdateNotesConnecting]
Text="If this message does not disappear, illustro Gadgets may be unable to check for updates. Check your network and firewall settings, or follow the link below to go to GitHub."

[StyleUpdateNotesYes]
MeasureName=MeasureReleaseVer
Text="Head to the illustro Gadgets page on the Rainmeter forums (linked below) to grab version %1"

[StyleUpdateNotesNo]
Text="illustro Gadgets is up to date."

[StyleUpdateNotesAlpha]
Text="Your version is newer than the last released version. Thanks for being a development tester!"

; =======================================================================
;  MEASURES
; =======================================================================

[MeasureIPAddress]
Measure=Plugin
Plugin=Plugins/WebParser.dll
UpdateRate=1000
Url="https://github.com/iamanai/illustro-Gadgets/blob/master/CurrentReleaseVer.txt"
RegExp="(?siU)<td id="LC1" class="blob-code blob-code-inner js-file-line">(.*)</td>.*"
FinishAction=[!EnableMeasure MeasureVersionCheck]

[MeasureReleaseVer]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureIPAddress]
StringIndex=1

[MeasureReleaseVerAbsolute]
Measure=Plugin
Plugin=Plugins\WebParser.dll
Url=[MeasureIPAddress]
StringIndex=1
Substitute=".":"","-d":""

[MeasureVersionCheck]
Measure=Calc
Formula=[MeasureReleaseVerAbsolute] - #versionAbsolute#
IfAboveValue=0
IfAboveAction=[!SetOption UpdateCaption MeterStyle "StyleText | StyleUpdateCaptionYes"][!SetOption UpdateNotes MeterStyle "StyleText | StyleUpdateNotesYes"][!Redraw]
IfEqualValue=0
IfEqualAction=[!SetOption UpdateCaption MeterStyle "StyleText | StyleUpdateCaptionNo"][!SetOption UpdateNotes MeterStyle "StyleText | StyleUpdateNotesNo"][!Redraw]
IfBelowValue=0
IfBelowAction=[!SetOption UpdateCaption MeterStyle "StyleText | StyleUpdateCaptionNo"][!SetOption UpdateNotes MeterStyle "StyleText | StyleUpdateNotesAlpha"][!Redraw]
DynamicVariables=1
Disabled=1

; =======================================================================
;  Meters
; =======================================================================

[AboutScreenTitle]
Meter=String
MeterStyle=StyleText
FontSize=(#titleSize#)
StringAlign=Right
X=(#separatorBarX# - 5)
Y=#bodyStartY#
Text="A B O U T"

[AboutScreenSeparatorBar]
Meter=Image
SolidColor=192,192,192,64
X=#separatorBarX#
Y=(#bodyStartY# + 20)
H=(#bgHeight# - #bodyStartY# - 28)
W=1

; ## VERSION ##
[VersionLabel]
Meter=String
MeterStyle=StyleText
FontColor=#fontColor#,#ghostedOpacity#
StringAlign=Right
X=(#separatorBarX# - 5)
Y=0r
Text="Version"

[VersionText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
FontSize=10
X=10r
Y=0r
Text="illustro Gadgets #version#"

; ## DATE ##
[DateLabel]
Meter=String
MeterStyle=StyleText
FontColor=#fontColor#,#ghostedOpacity#
StringAlign=Right
X=(#separatorBarX# - 5)
Y=18r
Text="Date"

[DateText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
FontSize=10
X=10r
Y=0r
Text="#updatedDate#"

; ## PLATFORM ##
[PlatformLabel]
Meter=String
MeterStyle=StyleText
FontColor=#fontColor#,#ghostedOpacity#
StringAlign=Right
X=(#separatorBarX# - 5)
Y=18r
Text="Platform"

[PlatformText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
FontSize=10
X=10r
Y=0r
Text="#platform#"

; ## LICENSE ##
[LicenseLabel]
Meter=String
MeterStyle=StyleText
FontColor=#fontColor#,#ghostedOpacity#
StringAlign=Right
X=(#separatorBarX# - 5)
Y=18r
Text="License"

[LicenseText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
FontSize=10
X=10r
Y=0r
Text="#license#"

; ## AUTHOR ##
[AuthorLabel]
Meter=String
MeterStyle=StyleText
FontColor=#fontColor#,#ghostedOpacity#
StringAlign=Right
X=(#separatorBarX# - 5)
Y=18r
Text="Author"

[AuthorText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
FontSize=10
X=10r
Y=0r
Text="#author#"

; ## UPDATE ##
[UpdateLabel]
Meter=String
MeterStyle=StyleText
FontSize=10
StringAlign=Right
X=(#separatorBarX# - 5)
Y=30r
Text="Update"

[UpdateCaption]
Meter=String
MeterStyle=StyleText | StyleUpdateCaptionConnecting
StringStyle=Bold
FontSize=10
X=10r
Y=0r

[UpdateNotes]
Meter=String
MeterStyle=StyleText | StyleUpdateNotesConnecting
StringStyle=Normal
X=0r
Y=17r
W=(#bgWidth# - #separatorBarX# - 18)
ClipString=2

; ## README ##
[ReadmeLabel]
Meter=String
MeterStyle=StyleText
FontSize=10
StringAlign=Right
X=(#separatorBarX# - 5)
Y=80r
Text="Readme"

[ReadmeViewButton]
Meter=String
MeterStyle=StyleText
FontColor=#fontColorLink#,#generalOpacity#
StringStyle=Bold
FontSize=10
X=10r
Y=0r
Text="View"
ToolTipText="#ROOTCONFIGPATH#@Resources\Readme.txt"
LeftMouseUpAction=["#ROOTCONFIGPATH#@Resources\Readme.txt"]

[ReadmeButtonDescription]
Meter=String
MeterStyle=StyleText
X=0r
Y=17r
Text="Contact, credits and changelog."

; ## LINKS ##
[LinksLabel]
Meter=String
MeterStyle=StyleText
FontSize=10
StringAlign=Right
X=(#separatorBarX# - 5)
Y=30r
Text="Links"

[LinksGithubButton]
Meter=String
MeterStyle=StyleText
FontColor=#fontColorLink#,#generalOpacity#
StringStyle=Bold
FontSize=10
X=10r
Y=0r
Text="Github"
ToolTipText="https://github.com/iamanai/illustro-Gadgets"
LeftMouseUpAction=["https://github.com/iamanai/illustro-Gadgets"]

[LinksGithubButtonDescription]
Meter=String
MeterStyle=StyleText
X=0r
Y=17r
Text="Report issues, contribute and beta test."

[LinksRmForumsButton]
Meter=String
MeterStyle=StyleText
FontColor=#fontColorLink#,#generalOpacity#
StringStyle=Bold
FontSize=10
X=0r
Y=20r
Text="Rainmeter Forums Post"
ToolTipText="https://forum.rainmeter.net/viewtopic.php?f=27&t=21496"
LeftMouseDownAction=["https://forum.rainmeter.net/viewtopic.php?f=27&t=21496"]

[LinksRmForumsButtonDescription]
Meter=String
MeterStyle=StyleText
X=0r
Y=17r
Text="View update info and ask questions."

[LinksRainmeterButton]
Meter=String
MeterStyle=StyleText
FontColor=#fontColorLink#,#generalOpacity#
StringStyle=Bold
FontSize=10
X=0r
Y=20r
Text="Rainmeter Website"
ToolTipText="https://rainmeter.net"
LeftMouseDownAction=["https://rainmeter.net"]

[LinksRainmeterButtonDescription]
Meter=String
MeterStyle=StyleText
X=0r
Y=17r
Text="Learn more about Rainmeter."

[LinksTwitterButton]
Meter=String
MeterStyle=StyleText
FontColor=#fontColorLink#,#generalOpacity#
StringStyle=Bold
FontSize=10
X=0r
Y=20r
Text="@iamanai_ on Twitter"
ToolTipText="https://twitter.com/iamanai_"
LeftMouseDownAction=["https://twitter.com/iamanai_"]

[LinksTwitterButtonDescription]
Meter=String
MeterStyle=StyleText
X=0r
Y=17r
Text="View the ramblings of a teenager."