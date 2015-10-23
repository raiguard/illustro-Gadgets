; ## COLOR SETTINGS ##
; - RAM -
[RAMLabel]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="RAM Color"

[InputBarColorRAM]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorRAM#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 1"
MiddleMouseUpAction=[!WriteKeyValue Variables colorRAM "#dColorRAM#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorRAM]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorRAM#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorRAM" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorRAM "#dColorRAM#" "#VarPath#"][!RefreshGroup AllCPUMeter]
Y=0r

; - Page File -
[PageLabel]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Page Color"

[InputBarColorPage]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorPage#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 2"
MiddleMouseUpAction=[!WriteKeyValue Variables colorPage "#dColorPage#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorPage]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorPage#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorPage" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorPage "#dcolorPage#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Average CPU -
[AvgCpuLabel]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Avg CPU Color"

[InputBarColorAVG.CPU]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorAvgCpu#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 19"
MiddleMouseUpAction=[!WriteKeyValue Variables colorAvgCpu "#dColorAvgCpu#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorAVG.CPU]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorAvgCpu#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorAvgCpu" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorAvgCpu "#dColorAvgCpu#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 1 -
[Core1Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 1 Color"

[InputCoreColor1]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore1#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 3"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore1 "#dColorCore1#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore1]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore1#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore1" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore1 "#dcolorCore1#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 2 -
[Core2Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 2 Color"

[InputCoreColor2]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore2#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 4"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore2 "#dColorCore2#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore2]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore2#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore2" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore2 "#dcolorCore2#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 3 -
[Core3Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 3 Color"

[InputCoreColor3]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore3#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 5"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore3 "#dColorCore3#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore3]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore3#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore3" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore3 "#dcolorCore3#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 4 -
[Core4Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 4 Color"

[InputCoreColor4]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore4#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 6"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore4 "#dcolorCore4#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore4]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore4#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore4" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore4 "#dcolorCore4#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 5 -
[Core5Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 5 Color"

[InputCoreColor5]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore5#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 7"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore5 "#dcolorCore5#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore5]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore5#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore5" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore5 "#dcolorCore5#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 6 -
[Core6Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 6 Color"

[InputCoreColor6]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore6#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 8"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore6 "#dcolorCore6#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore6]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore6#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore6" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore6 "#dcolorCore6#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 7 -
[Core7Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 7 Color"

[InputCoreColor7]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore7#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 9"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore7 "#dcolorCore7#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore7]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore7#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore7" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore7 "#dcolorCore7#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 8 -
[Core8Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 8 Color"

[InputCoreColor8]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore8#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 10"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore8 "#dcolorCore8#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore8]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore8#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore8" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore8 "#dcolorCore8#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 9 -
[Core9Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 9 Color"

[InputCoreColor9]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore9#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 11"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore9 "#dcolorCore9#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore9]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore9#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore9" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore9 "#dcolorCore9#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 10 -
[Core10Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 10 Color"

[InputCoreColor10]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore10#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 12"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore10 "#dcolorCore10#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore10]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore10#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore10" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore10 "#dcolorCore10#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 11 -
[Core11Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 11 Color"

[InputCoreColor11]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore11#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 13"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore11 "#dcolorCore11#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore11]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore11#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore11" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore11 "#dcolorCore11#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 12 -
[Core12Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 12 Color"

[InputCoreColor12]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore12#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 14"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore12 "#dcolorCore12#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore12]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore12#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore12" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore12 "#dcolorCore12#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 13 -
[Core13Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 13 Color"

[InputCoreColor13]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore13#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 15"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore13 "#dcolorCore13#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore13]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore13#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore13" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore13 "#dcolorCore13#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 14 -
[Core14Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 14 Color"

[InputCoreColor14]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore14#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 16"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore14 "#dcolorCore14#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore14]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore14#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore14" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore14 "#dcolorCore14#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 15 -
[Core15Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 15 Color"

[InputCoreColor15]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore15#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 17"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore15 "#dcolorCore15#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore15]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore15#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore15" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore15 "#dcolorCore15#" "#VarPath#"][!RefreshGroup AllCPUMeter]

; - Core 16 -
[Core16Label]
Meter=String
MeterStyle=StyleTextPalettePrompt
Text="Core 16 Color"

[InputCoreColor16]
Meter=String
MeterStyle=StyleTextPaletteColor | StyleColorTooltip
Text=#colorCore16#
LeftMouseUpAction=!CommandMeasure "MeasureInputColor" "ExecuteBatch 18"
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore16 "#dcolorCore16#" "#VarPath#"][!RefreshGroup AllCPUMeter]

[PickBarColorCore16]
Meter=Image
MeterStyle=StylePickColorButton | StyleColorTooltip
SolidColor=#colorCore16#,200
LeftMouseUpAction=["#RainRGB#" "VarName=colorCore16" "FileName=#VarPath#" "#ColorPickRefresh#"]
MiddleMouseUpAction=[!WriteKeyValue Variables colorCore16 "#dcolorCore16#" "#VarPath#"][!RefreshGroup AllCPUMeter]


; ====================
;   UTILITIES
; ====================

