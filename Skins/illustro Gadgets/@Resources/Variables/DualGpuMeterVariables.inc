[Variables]
; -- General visual properties --
bgWidth=210
bgHeight=(#bodyStartY# + (#rowYOffset# * (7 - #hideCoreVoltage# - #hideShaderClock# - #hideMemController#) * 2) + ((#hideLineGraph# = 0 && #graphType# > 0) ? #rowYOffset# + #graphHeight# - 4 : 9))
bgCenterX=(#bgWidth# / 2)

generalXMarginRight=(#bgWidth# - 10)

barWidth=(#bgWidth# - #generalXMarginLeft# - (#bgWidth# - #generalXMarginRight#))
graphWidth=(#bgWidth# - #generalXMarginLeft# - (#bgWidth# - #generalXMarginRight# + 1))

; -- Dynamic (do not change) --
; Colors
gColorTotalUsage=0,0,0
gColorMemoryUsage=0,0,0
gColorFanUsage=0,0,0
gColorMemController=0,0,0

gAlphaTotalUsage=0
gAlphaMemoryUsage=0
gAlphaFanUsage=0
gAlphaMemController=0

; Text
textMemoryUsed=
textMemoryTotal=

; Dual meter text
textMemoryUsedGpu0=
textMemoryUsedGpu1=

textMemoryTotalGpu0=
textMemoryTotalGpu1=
