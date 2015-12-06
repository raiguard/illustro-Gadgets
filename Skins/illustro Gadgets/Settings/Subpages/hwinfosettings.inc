;
; ========================================================================================================================
;   STYLES
; ========================================================================================================================



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
MeterSTyle=StyleText | StyleFileString
Text="#HWiNFO-CONFIGPATH#"