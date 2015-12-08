[Variables]
gadgetSettingsPath=#@#Settings\NetworkMeterSettings.inc
@includeNetworkMeterSettings=#gadgetSettingsPath#
bgHeight=470

; ========================================================================================================================
;   STYLES
; ========================================================================================================================

[StyleInterfacesString]
FontColor=#colorSecondary#
FontSize=#fontSize2#
Y=0r

; ========================================================================================================================
;   MEASURES
; ========================================================================================================================

[MeasureInputInterfaceConfig]
Measure=Plugin
Plugin=InputText
SolidColor=#colorInputTextBackground#
FontColor=#colorInputTextFont#
FontSize=#fontSize#
StringStyle=Bold
UpdateDivider=-1
FocusDismiss=1
W=40
Command1=[!WriteKeyValue Variables interfaceBroadband "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup NetworkMeter][!Refresh] DefaultValue="#interfaceBroadband#" X=[InterfacesBroadbandString:X] Y=[InterfacesBroadbandString:Y] H=[InterfacesBroadbandString:H]
Command2=[!WriteKeyValue Variables interfaceEthernet "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup NetworkMeter][!Refresh] DefaultValue="#interfaceEthernet#" X=[InterfacesEthernetString:X] Y=[InterfacesEthernetString:Y] H=[InterfacesEthernetString:H]
Command3=[!WriteKeyValue Variables interfaceWireless "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup NetworkMeter][!Refresh] DefaultValue="#interfaceWireless#" X=[InterfacesWirelessString:X] Y=[InterfacesWirelessString:Y] H=[InterfacesWirelessString:H]

[MeasureInputColorConfig]
Measure=Plugin
Plugin=InputText
SolidColor=#colorInputTextBackground#
FontColor=#colorInputTextFont#
FontSize=#fontSize#
StringStyle=Bold
UpdateDivider=-1
FocusDismiss=1
Command1=[!WriteKeyValue Variables sColorUpload "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup NetworkMeter][!Refresh] DefaultValue="#sColorUpload#" X=[ColorsUploadString:X] Y=[ColorsUploadString:Y] W=[ColorsUploadString:W] H=[ColorsUploadString:H]
Command2=[!WriteKeyValue Variables sColorDownload "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup NetworkMeter][!Refresh] DefaultValue="#sColorDownload#" X=[ColorsDownloadString:X] Y=[ColorsDownloadString:Y] W=[ColorsDownloadString:W] H=[ColorsDownloadString:H]

; ========================================================================================================================
;   METERS
; ========================================================================================================================

; ----- Toggles -----

; Refresh Buttons
[RefreshLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Refresh Buttons:"

[RefreshButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[RefreshLabel:W]r
Y=0r
Text="Enabled"
Hidden=(#showRefreshButtons# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "showRefreshButtons" 0 "#gadgetSettingsPath#"][!RefreshGroup "NetworkMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showRefreshButtons" "#dShowRefreshButtons#" "#gadgetSettingsPath#"][!RefreshGroup "NetworkMeter"][!Refresh]

[RefreshButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=#showRefreshButtons#
LeftMouseUpAction=[!WriteKeyValue Variables "showRefreshButtons" 1 "#gadgetSettingsPath#"][!RefreshGroup "NetworkMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showRefreshButtons" "#dShowRefreshButtons#" "#gadgetSettingsPath#"][!RefreshGroup "NetworkMeter"][!Refresh]

; Line Graph
[LineGraphLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Line Graph:"

[LineGraphButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[LineGraphLabel:W]r
Y=0r
Text="Enabled"
Hidden=(#showLineGraph# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "showLineGraph" 0 "#gadgetSettingsPath#"][!RefreshGroup "NetworkMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showLineGraph" "#dShowLineGraph#" "#gadgetSettingsPath#"][!RefreshGroup "NetworkMeter"][!Refresh]

[LineGraphButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=#showLineGraph#
LeftMouseUpAction=[!WriteKeyValue Variables "showLineGraph" 1 "#gadgetSettingsPath#"][!RefreshGroup "NetworkMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "showLineGraph" "#dShowLineGraph#" "#gadgetSettingsPath#"][!RefreshGroup "NetworkMeter"][!Refresh]

; ----- Colors -----
[ColorsLabel]
Meter=String
MeterStyle=StyleText | StyleSectionLabel
Text="Coloring Options"

; Upload Color
[ColorsUploadLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Upload Color"

[ColorsUploadBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsUploadBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorUpload" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorUpload "#dColorUpload#" "#gadgetSettingsPath#"][!RefreshGroup illustroGadgets]
SolidColor=#sColorUpload#

[ColorsUploadAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsUploadAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsUploadString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorUpload#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 1"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorUpload "#dColorUpload#" "#gadgetSettingsPath#"][!RefreshGroup illustroGadgets]

; Download Color
[ColorsDownloadLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=([ColorsUploadAlphaBarBg:X] + [ColorsUploadAlphaBarBg:W] + 3)
Y=[ColorsUploadLabel:Y]
Text="Download Color"

[ColorsDownloadBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDownloadBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=sColorDownload" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorDownload "#dColorDownload#" "#gadgetSettingsPath#"][!RefreshGroup illustroGadgets]
SolidColor=#sColorDownload#

[ColorsDownloadAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDownloadAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDownloadString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#sColorDownload#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 2"]
MiddleMouseUpAction=[!WriteKeyValue Variables sColorDownload "#dColorDownload#" "#gadgetSettingsPath#"][!RefreshGroup illustroGadgets]

; ----- Interface Options -----

[InterfacesTitle]
Meter=String
MeterStyle=StyleText | StyleSectionLabel
Text="Interface Identifiers"

[InterfacesDescription]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
FontSize=#fontSize2#
ClipString=2
ClipStringW=(#bgWidth# - [InterfacesDescription:X] - (#bgWidth# - #generalXMarginRight#) - 5)
X=#panelContentMarginLeftX#
Y=25r
Text="Set the interface identifiers to match your system. If your machine does not have have an adapter of the specified type or to turn off monitoring, use 0 as the identifier. Set all interfaces to 0 to have rainmeter report on all adapters, but if you have any virtualized interfaces active, the NetIn/NetOut/NetTotal measures will be incorrect. See http://docs.rainmeter.net/tips/network-skin for an explanation and details on how to find your network interface indentifiers. Unless you have a machine with multiple network cards installed (i.e., like a server), you should only have one ACTIVE PHYSICAL network interface of each type, all other reported interfaces should be virtual or disconnected."

[InterfacesBroadbandLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Y=([InterfacesDescription:H] + 10)r
Text="Broadband Interface:"

[InterfacesBroadbandString]
Meter=String
MeterStyle=StyleText | StyleInterfacesString
X=[InterfacesBroadbandLabel:W]r
Text="#interfaceBroadband#"
LeftMouseUpAction=[!CommandMeasure MeasureInputInterfaceConfig "Executebatch 1"]

[InterfacesEthernetLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Ethernet Interface:"

[InterfacesEthernetString]
Meter=String
MeterStyle=StyleText | StyleInterfacesString
X=[InterfacesEthernetLabel:W]r
Text="#interfaceEthernet#"
LeftMouseUpAction=[!CommandMeasure MeasureInputInterfaceConfig "Executebatch 2"]

[InterfacesWirelessLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Wireless Interface:"

[InterfacesWirelessString]
Meter=String
MeterStyle=StyleText | StyleInterfacesString
X=[InterfacesWirelessLabel:W]r
Text="#interfaceWireless#"
LeftMouseUpAction=[!CommandMeasure MeasureInputInterfaceConfig "Executebatch 3"]