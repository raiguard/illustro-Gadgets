[MeasureIPAddress]
Measure=Plugin
Plugin=Plugins/WebParser.dll
UpdateRate=1000
Url="https://github.com/Exhelah/illustro-Gadgets/blob/master/CurrentReleaseVer.txt"
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
IfAboveAction=[!SetOption UpdateCaption MeterStyle "StyleText | StyleUpdateCaptionYes"][!SetOption UpdateNotes MeterStyle "StyleText | StyleUpdateNotesYes"][!ShowMeter UpdateDownload][!Redraw]
IfEqualValue=0
IfEqualAction=[!SetOption UpdateCaption MeterStyle "StyleText | StyleUpdateCaptionNo"][!SetOption UpdateNotes MeterStyle "StyleText | StyleUpdateNotesNo"][!HideMeter UpdateDownload][!Redraw]
IfBelowValue=0
IfBelowAction=[!SetOption UpdateCaption MeterStyle "StyleText | StyleUpdateCaptionNo"][!SetOption UpdateNotes MeterStyle "StyleText | StyleUpdateNotesAlpha"][!HideMeter UpdateDownload][!Redraw]
DynamicVariables=1
Disabled=1

; -----

[AboutScreenTitle]
Meter=String
MeterStyle=StyleText
FontSize=(#titleSize#)
StringAlign=Right
X=(#panelCenterX# - 5)
Y=#bodyStartY#
Text="A B O U T"

[AboutScreenSeparatorBar]
Meter=Image
SolidColor=192,192,192,64
X=#panelCenterX#
Y=(#bodyStartY# + 20)
H=(#bgHeight# - #bodyStartY# - 29)
W=1

; ## VERSION ##
[VersionLabel]
Meter=String
MeterStyle=StyleText
FontColor=#colorTextGhosted#
StringAlign=Right
X=(#panelCenterX# - 5)
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
FontColor=#colorTextGhosted#
StringAlign=Right
X=(#panelCenterX# - 5)
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
FontColor=#colorTextGhosted#
StringAlign=Right
X=(#panelCenterX# - 5)
Y=18r
Text="Platform"

[PlatformText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
FontSize=10
X=10r
Y=0r
Text="Rainmeter 3.3 (r2468)"

; ## LICENSE ##
[LicenseLabel]
Meter=String
MeterStyle=StyleText
FontColor=#colorTextGhosted#
StringAlign=Right
X=(#panelCenterX# - 5)
Y=18r
Text="License"

[LicenseText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
FontSize=10
X=10r
Y=0r
Text="Creative Commons BY-NC-SA 3.0"

; ## AUTHOR ##
[AuthorLabel]
Meter=String
MeterStyle=StyleText
FontColor=#colorTextGhosted#
StringAlign=Right
X=(#panelCenterX# - 5)
Y=18r
Text="Author"

[AuthorText]
Meter=String
MeterStyle=StyleText
StringStyle=Normal
FontSize=10
X=10r
Y=0r
Text="iamanai"

; ## UPDATE ##
[UpdateLabel]
Meter=String
MeterStyle=StyleText
FontSize=10
StringAlign=Right
X=(#panelCenterX# - 5)
Y=30r
Text="Update"

[UpdateCaption]
Meter=String
MeterStyle=StyleText | StyleUpdateCaptionConnecting
StringStyle=Normal
FontSize=10
X=10r
Y=0r

[UpdateNotes]
Meter=String
MeterStyle=StyleText | StyleUpdateNotesConnecting
StringStyle=Normal
X=0r
Y=17r
W=(#bgWidth# - #panelCenterX# - 18)
ClipString=2

[UpdateDownload]
Meter=String
MeterStyle=StyleText
Hidden=1

; ------

[StyleUpdateCaptionConnecting]
FontColor=#colorTextLink#,#opacityNormal#
Text="Connecting to GitHub..."

[StyleUpdateCaptionYes]
FontColor=#colorTextLink#,#opacityNormal#
Text="Update Available!"

[StyleUpdateCaptionNo]
FontColor=#colorTextGhosted#
Text="None"

; ------

[StyleUpdateNotesConnecting]
Text="If this message does not disappear, illustro Gadgets may be unable to check for updates. Check your network and firewall settings, or click above to go to GitHub."

[StyleUpdateNotesYes]
MeasureName=MeasureReleaseVer
Text="Click the download button to recieve the update (%1)."

[StyleUpdateNotesNo]
Text="illustro Gadgets is up to date."

[StyleUpdateNotesAlpha]
Text="Your version is newer than the last released version. Thanks for being a development tester!"

; ## README ##
[ReadmeLabel]
Meter=String
MeterStyle=StyleText
FontSize=10
StringAlign=Right
X=(#panelCenterX# - 5)
Y=60r
Text="Readme"

[ReadmeViewButton]
Meter=String
MeterStyle=StyleText
FontColor=#colorTextLink#,#opacityNormal#
StringStyle=Bold
FontSize=10
X=10r
Y=0r
Text="View"
ToolTipText="#ROOTCONFIGPATH#@Resources\Readme.txt"

[ReadmeViewButtonMouseRegion]
Meter=Image
Solidcolor=0,0,0,0
X=([ReadmeViewButton:X]*#scale#)
Y=([ReadmeViewButton:Y]*#scale#)
W=([ReadmeViewButton:W]*#scale#)
H=([ReadmeViewButton:H]*#scale#)
MouseOverAction=[!SetOption ReadmeViewButton FontColor #colorTextLink#,220][!UpdateMeter ReadmeViewButton][!Redraw]
LeftMouseDownAction=[!SetOption ReadmeViewButton FontColor #colorTextLink#,255][!UpdateMeter ReadmeViewButton][!Redraw]
LeftMouseUpAction=[!SetOption ReadmeViewButton FontColor #colorTextLink#,200]["#ROOTCONFIGPATH#@Resources\Readme.txt"][!Redraw]
MouseLeaveAction=[!SetOption ReadmeViewButton FontColor #colorTextLink#,200][!UpdateMeter ReadmeViewButton][!Redraw]
DynamicVariables=1

[ReadmeButtonDescription]
Meter=String
MeterStyle=StyleText
X=0r
Y=17r
Text="Contact, credits and changelog."