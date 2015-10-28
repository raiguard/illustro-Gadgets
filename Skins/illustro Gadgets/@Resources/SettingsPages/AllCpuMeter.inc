;
; ALL CPU METER CONFIGURATION SETTINGS - SUBSET OF SETTINGS.INI
;

[CpuConfigTitle]
Meter=String
MeterStyle=StyleText
FontSize=(#titleSize#)
StringAlign=Right
X=(#panelCenterX# - 10)
Y=(#bodyStartY#)
Text="A L L  C P U  M E T E R"

[CpuConfigSeparatorBar]
Meter=Image
SolidColor=#separatorBarColor#,#separatorBarOpacity#
X=#panelCenterX#
Y=([CpuConfigTitle:Y] + 20)
H=(#bgHeight# - [CpuConfigSeparatorBar:Y] - 8)
W=1

