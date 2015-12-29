[Variables]
gadgetSettingsPath=#@#Settings\DrivesMeterSettings.inc
@includeDrivesMeterSettings=#gadgetSettingsPath#

; ========================================================================================================================
;   STYLES
; ========================================================================================================================

[StyleHideDiskLabel]
X=20r
Y=-16r
FontSize=#fontSize#
FontColor=#colorPrimary#

[StyleCheckbox]
X=0r
Y=16r
W=13
H=13
ImageTint=#colorButton#
ImageAlpha=#alphaButton#

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
W=#colorAlphaBarBgWidth#
Command1=[!WriteKeyValue Variables colorDisk1 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDisk1#" X=[ColorsDisk1String:X] Y=[ColorsDisk1String:Y] H=[ColorsDisk1String:H]
Command2=[!WriteKeyValue Variables colorDisk2 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDisk2#" X=[ColorsDisk2String:X] Y=[ColorsDisk2String:Y] H=[ColorsDisk2String:H]
Command3=[!WriteKeyValue Variables colorDisk3 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDisk3#" X=[ColorsDisk3String:X] Y=[ColorsDisk3String:Y] H=[ColorsDisk3String:H]
Command4=[!WriteKeyValue Variables colorDisk4 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDisk4#" X=[ColorsDisk4String:X] Y=[ColorsDisk4String:Y] H=[ColorsDisk4String:H]
Command5=[!WriteKeyValue Variables colorDisk5 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDisk5#" X=[ColorsDisk5String:X] Y=[ColorsDisk5String:Y] H=[ColorsDisk5String:H]
Command6=[!WriteKeyValue Variables colorDisk6 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDisk6#" X=[ColorsDisk6String:X] Y=[ColorsDisk6String:Y] H=[ColorsDisk6String:H]
Command7=[!WriteKeyValue Variables colorDisk7 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDisk7#" X=[ColorsDisk7String:X] Y=[ColorsDisk7String:Y] H=[ColorsDisk7String:H]
Command8=[!WriteKeyValue Variables colorDisk8 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDisk8#" X=[ColorsDisk8String:X] Y=[ColorsDisk8String:Y] H=[ColorsDisk8String:H]
Command9=[!WriteKeyValue Variables colorDisk9 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDisk9#" X=[ColorsDisk9String:X] Y=[ColorsDisk9String:Y] H=[ColorsDisk9String:H]
Command10=[!WriteKeyValue Variables colorDisk10 "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDisk10#" X=[ColorsDisk10String:X] Y=[ColorsDisk10String:Y] H=[ColorsDisk10String:H]
Command11=[!WriteKeyValue Variables colorDiskThresholdWarn "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDiskThresholdWarn#" X=[ColorsThresholdWarnString:X] Y=[ColorsThresholdWarnString:Y] H=[ColorsThresholdWarnString:H]
Command12=[!WriteKeyValue Variables colorDiskThresholdFull "$UserInput$" "#gadgetSettingsPath#"][!RefreshGroup DrivesMeter][!Refresh] DefaultValue="#colorDiskThresholdFull#" X=[ColorsThresholdFullString:X] Y=[ColorsThresholdFullString:Y] H=[ColorsThresholdFullString:H]

; ========================================================================================================================
;   METERS
; ========================================================================================================================

; ----- Toggles -----

; Disk Capacity Warnings
[CapacityWarningsLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Drive Capacity Warnings:"

[CapacityWarningsButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[CapacityWarningsLabel:W]r
Y=0r
Text="Enabled"
Hidden=#hideCapacityWarnings#
LeftMouseUpAction=[!WriteKeyValue Variables "hideCapacityWarnings" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideCapacityWarnings" "#dHideCapacityWarnings#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[CapacityWarningsButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=(#hideCapacityWarnings# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "hideCapacityWarnings" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideCapacityWarnings" "#dHideCapacityWarnings#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Line Graph
[LineGraphLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Drive Usage Line Graph:"

[LineGraphButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[LineGraphLabel:W]r
Y=0r
Text="Enabled"
Hidden=#hideLineGraph#
LeftMouseUpAction=[!WriteKeyValue Variables "hideLineGraph" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideLineGraph" "#dHideLineGraph#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[LineGraphButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=(#hideLineGraph# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "hideLineGraph" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideLineGraph" "#dHideLineGraph#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Histogram
[HistogramLabel]
Meter=String
MeterStyle=StyleText | StyleToggleButtonLabel
Text="Drive Read/Write Time Histogram:"

[HistogramButtonEnabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=[HistogramLabel:W]r
Y=0r
Text="Enabled"
Hidden=#hideHistogram#
LeftMouseUpAction=[!WriteKeyValue Variables "hideHistogram" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideHistogram" "#dHideHistogram#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[HistogramButtonDisabled]
Meter=String
MeterStyle=StyleText | StyleToggleButton
X=0r
Y=0r
Text="Disabled"
Hidden=(#hideHistogram# = 1 ? 0 : 1)
LeftMouseUpAction=[!WriteKeyValue Variables "hideHistogram" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
MiddleMouseUpAction=[!WriteKeyValue Variables "hideHistogram" "#dHideHistogram#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; ----- Force Hide Disks -----

[HideDisksLabel]
Meter=String
MeterStyle=StyleText | StyleSectionLabel
Text="Force Hide Disks"

; Disk D
[HideDiskDLabel]
Meter=String
MeterStyle=StyleText | StyleHideDiskLabel
X=(#panelContentMarginLeftX# + 3)
Y=25r
Text="D:"

[HideDiskDCheckboxOn]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOn.png

Hidden=(#hideDiskD# = 0 ? 1 : 0)
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskD" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[HideDiskDCheckboxOff]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOff.png
X=0r
Y=0r
Hidden=#hideDiskD#
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskD" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk E
[HideDiskELabel]
Meter=String
MeterStyle=StyleText | StyleHideDiskLabel
Text="E:"

[HideDiskECheckboxOn]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOn.png
Hidden=(#hideDiskE# = 0 ? 1 : 0)
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskE" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[HideDiskECheckboxOff]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOff.png
X=0r
Y=0r
Hidden=#hideDiskE#
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskE" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk F
[HideDiskFLabel]
Meter=String
MeterStyle=StyleText | StyleHideDiskLabel
Text="F:"

[HideDiskFCheckboxOn]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOn.png
Hidden=(#hideDiskF# = 0 ? 1 : 0)
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskF" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[HideDiskFCheckboxOff]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOff.png
X=0r
Y=0r
Hidden=#hideDiskF#
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskF" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk G
[HideDiskGLabel]
Meter=String
MeterStyle=StyleText | StyleHideDiskLabel
Text="G:"

[HideDiskGCheckboxOn]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOn.png
Hidden=(#hideDiskG# = 0 ? 1 : 0)
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskG" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[HideDiskGCheckboxOff]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOff.png
X=0r
Y=0r
Hidden=#hideDiskG#
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskG" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk H
[HideDiskHLabel]
Meter=String
MeterStyle=StyleText | StyleHideDiskLabel
Text="H:"

[HideDiskHCheckboxOn]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOn.png
Hidden=(#hideDiskH# = 0 ? 1 : 0)
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskH" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[HideDiskHCheckboxOff]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOff.png
X=0r
Y=0r
Hidden=#hideDiskH#
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskH" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk I
[HideDiskILabel]
Meter=String
MeterStyle=StyleText | StyleHideDiskLabel
Text="I:"

[HideDiskICheckboxOn]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOn.png
Hidden=(#hideDiskI# = 0 ? 1 : 0)
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskI" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[HideDiskICheckboxOff]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOff.png
X=0r
Y=0r
Hidden=#hideDiskI#
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskI" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk J
[HideDiskJLabel]
Meter=String
MeterStyle=StyleText | StyleHideDiskLabel
Text="J:"

[HideDiskJCheckboxOn]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOn.png
Hidden=(#hideDiskJ# = 0 ? 1 : 0)
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskJ" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[HideDiskJCheckboxOff]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOff.png
X=0r
Y=0r
Hidden=#hideDiskJ#
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskJ" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk K
[HideDiskKLabel]
Meter=String
MeterStyle=StyleText | StyleHideDiskLabel
Text="K:"

[HideDiskKCheckboxOn]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOn.png
Hidden=(#hideDiskK# = 0 ? 1 : 0)
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskK" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[HideDiskKCheckboxOff]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOff.png
X=0r
Y=0r
Hidden=#hideDiskK#
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskK" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk L
[HideDiskLLabel]
Meter=String
MeterStyle=StyleText | StyleHideDiskLabel
Text="L:"

[HideDiskLCheckboxOn]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOn.png
Hidden=(#hideDiskL# = 0 ? 1 : 0)
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskL" 0 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

[HideDiskLCheckboxOff]
Meter=Image
MeterStyle=StyleCheckbox
ImageName=#@#Images\Settings\CheckboxOff.png
X=0r
Y=0r
Hidden=#hideDiskL#
LeftMouseUpAction=[!WriteKeyValue Variables "hideDiskL" 1 "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; ----- Colors -----
[ColorsLabel]
Meter=String
MeterStyle=StyleText | StyleSectionLabel
Text="Coloring Options"

; Disk 1 Color
[ColorsDisk1Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Disk 1 Color"

[ColorsDisk1BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDisk1Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDisk1" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk1 "#dColorDisk1#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDisk1#

[ColorsDisk1AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDisk1AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDisk1String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDisk1#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 1"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk1 "#dColorDisk1#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk 2 Color
[ColorsDisk2Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Disk 2 Color"

[ColorsDisk2BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDisk2Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDisk2" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk2 "#dColorDisk2#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDisk2#

[ColorsDisk2AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDisk2AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDisk2String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDisk2#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 2"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk2 "#dColorDisk2#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk 3 Color
[ColorsDisk3Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Disk 3 Color"

[ColorsDisk3BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDisk3Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDisk3" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk3 "#dColorDisk3#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDisk3#

[ColorsDisk3AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDisk3AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDisk3String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDisk3#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 3"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk3 "#dColorDisk3#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk 4 Color
[ColorsDisk4Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
Text="Disk 4 Color"

[ColorsDisk4BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDisk4Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDisk4" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk4 "#dColorDisk4#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDisk4#

[ColorsDisk4AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDisk4AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDisk4String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDisk4#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 4"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk4 "#dColorDisk4#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk 5 Color
[ColorsDisk5Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=([ColorsDisk1AlphaBarBg:X] + [ColorsDisk1AlphaBarBg:W] + 3)
Y=[ColorsDisk1Label:Y]
Text="Disk 5 Color"

[ColorsDisk5BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDisk5Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDisk5" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk5 "#dColorDisk5#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDisk5#

[ColorsDisk5AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDisk5AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDisk5String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDisk5#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 5"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk5 "#dColorDisk5#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk 6 Color
[ColorsDisk6Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsDisk5Label:X]
Text="Disk 6 Color"

[ColorsDisk6BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDisk6Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDisk6" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk6 "#dColorDisk6#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDisk6#

[ColorsDisk6AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDisk6AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDisk6String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDisk6#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 6"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk6 "#dColorDisk6#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk 7 Color
[ColorsDisk7Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsDisk5Label:X]
Text="Disk 7 Color"

[ColorsDisk7BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDisk7Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDisk7" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk7 "#dColorDisk7#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDisk7#

[ColorsDisk7AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDisk7AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDisk7String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDisk7#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 7"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk7 "#dColorDisk7#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk 8 Color
[ColorsDisk8Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsDisk5Label:X]
Text="Disk 8 Color"

[ColorsDisk8BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDisk8Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDisk8" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk8 "#dColorDisk8#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDisk8#

[ColorsDisk8AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDisk8AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDisk8String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDisk8#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 8"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk8 "#dColorDisk8#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk 9 Color
[ColorsDisk9Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=([ColorsDisk5AlphaBarBg:X] + [ColorsDisk5AlphaBarBg:W] + 3)
Y=[ColorsDisk1Label:Y]
Text="Disk 9 Color"

[ColorsDisk9BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDisk9Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDisk9" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk9 "#dColorDisk9#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDisk9#

[ColorsDisk9AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDisk9AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDisk9String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDisk9#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 9"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk9 "#dColorDisk9#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk 10 Color
[ColorsDisk10Label]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsDisk9Label:X]
Text="Disk 10 Color"

[ColorsDisk10BoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsDisk10Box]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDisk10" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk10 "#dColorDisk10#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDisk10#

[ColorsDisk10AlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsDisk10AlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsDisk10String]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDisk10#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 10"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDisk10 "#dColorDisk10#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk Capacity Warning Color
[ColorsThresholdWarningLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsDisk9Label:X]
Text="Capacity Warning Color"

[ColorsThresholdWarnBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsThresholdWarnBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDiskThresholdWarn" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDiskThresholdWarn "#dColorDiskThresholdWarn#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDiskThresholdWarn#

[ColorsThresholdWarnAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsThresholdWarnAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsThresholdWarnString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDiskThresholdWarn#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 11"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDiskThresholdWarn "#dColorDiskThresholdWarn#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]

; Disk Capacity Full Color
[ColorsThresholdFullLabel]
Meter=String
MeterStyle=StyleText | StyleColorsLabel
X=[ColorsDisk9Label:X]
Text="Capacity Full Color"

[ColorsThresholdFullBoxBg]
Meter=Image
MeterStyle=StyleColorsBoxBg

[ColorsThresholdFullBox]
Meter=Image
MeterStyle=StyleColorsBox
LeftMouseUpAction=["#rainRgb#" "VarName=colorDiskThresholdFull" "FileName=#gadgetSettingsPath#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDiskThresholdFull "#dColorDiskThresholdFull#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]
SolidColor=#colorDiskThresholdFull#

[ColorsThresholdFullAlphaBarBg]
Meter=Image
MeterStyle=StyleColorsAlphaBarBg

[ColorsThresholdFullAlphaBar]
Meter=Image
MeterStyle=StyleColorsAlphaBar
SolidColor=#colorPrimary#
W=80
; LeftMouseUpAction=[!CommandMeasure #settingsScript# "settingsScript" "changeAlpha('primaryColor',$MouseX:%$)"][!RefreshGroup illustroGadgets]

[ColorsThresholdFullString]
Meter=String
MeterStyle=StyleText | StyleColorsString
Text=#colorDiskThresholdFull#
LeftMouseUpAction=[!CommandMeasure MeasureInputColorConfig "Executebatch 12"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorDiskThresholdFull "#dColorDiskThresholdFull#" "#gadgetSettingsPath#"][!RefreshGroup "DrivesMeter"][!Refresh]