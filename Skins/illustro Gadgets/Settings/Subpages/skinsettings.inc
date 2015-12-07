;
; ========================================================================================================================
;   STYLES
; ========================================================================================================================

[StyleSubNavMenuButton]
FontSize=#fontSize2#
FontColor=#colorAccent#
Y=0r

[StyleSubNavMenuSeparator]
FontSize=#fontSize2#
Y=0r
Text="|"

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
Y=([NavMenuButtonSkinSettings:Y] + 4)

[NavMenuIndicatorBottom]
Meter=Image
MeterStyle=StyleNavMenuIndicatorBottom
Y=[NavMenuIndicatorTop:H]r

; ----- Instructions -----
[InstructionsString]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
X=#panelContentMarginLeftX#
Y=[CopyrightText:Y]
Text="Left-click to edit, middle-click to set default"

; ----- Subpage Navigation -----

[SubNavMenuButtonCpu]
Meter=String
MeterStyle=StyleText | StyleSubNavMenuButton
X=(#navMenuSeparatorX# + 10)
Y=(#bodyStartY# + 5)
Text="All CPU Meter"
LeftMouseUpAction=[!WriteKeyValue Variables "gadgetsSubpage" "allcpumeter" "#varPath#"][!Refresh]

[SubNavMenuSeparatorCpu]
Meter=String
MeterStyle=StyleText | StyleSubNavMenuSeparator
X=([SubNavMenuButtonCpu:W] + 3)r

[SubNavMenuButtonNetwork]
Meter=String
MeterStyle=StyleText | StyleSubNavMenuButton
X=([SubNavMenuSeparatorCpu:W] + 3)r
Text="Network Meter"
LeftMouseUpAction=[!WriteKeyValue Variables "gadgetsSubpage" "networkmeter" "#varPath#"][!Refresh]

[SubNavMenuSeparatorNetwork]
Meter=String
MeterStyle=StyleText | StyleSubNavMenuSeparator
X=([SubNavMenuButtonNetwork:W] + 3)r

[SubNavMenuButtonGpu]
Meter=String
MeterStyle=StyleText | StyleSubNavMenuButton
X=([SubNavMenuSeparatorNetwork:W] + 3)r
Text="GPU Meter"
LeftMouseUpAction=[!WriteKeyValue Variables "gadgetsSubpage" "gpumeter" "#varPath#"][!Refresh]

[SubNavMenuSeparatorGpu]
Meter=String
MeterStyle=StyleText | StyleSubNavMenuSeparator
X=([SubNavMenuButtonGpu:W] + 3)r

[SubNavMenuButtonDrives]
Meter=String
MeterStyle=StyleText | StyleSubNavMenuButton
X=([SubNavMenuSeparatorGpu:W] + 3)r
Text="Drives Meter"
LeftMouseUpAction=[!WriteKeyValue Variables "gadgetsSubpage" "drivesmeter" "#varPath#"][!Refresh]

@includeGadgetsSubpage="Gadgets Subpages\#gadgetsSubpage#.inc"