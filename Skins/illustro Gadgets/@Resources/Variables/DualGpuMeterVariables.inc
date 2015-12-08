[Variables]
; -- General visual properties --
bgWidth=210
bgHeight=(#bodyStartY# + (#rowYOffset# * (6 - #hideCoreVoltage# - #hideMemController#) * 2) + (#hideLineGraph# = 0 ? #rowYOffset# + #graphHeight# - 5 : 9))
bgCenterX=(#bgWidth# / 2)

generalXMarginRight=(#bgWidth# - 10)

barWidth=(#bgWidth# - #generalXMarginLeft# - (#bgWidth# - #generalXMarginRight#))
graphWidth=(#bgWidth# - #generalXMarginLeft# - (#bgWidth# - #generalXMarginRight# + 1))

; -- Dynamic (do not change) --
; Colors
colorTotalUsage=0,0,0
colorMemoryUsage=0,0,0
colorFanUsage=0,0,0
colorMemController=0,0,0

; Text
textMemoryUsed=
textMemoryTotal=

; Dual meter text
textMemoryUsedGpu0=
textMemoryUsedGpu1=

textMemoryTotalGpu0=
textMemoryTotalGpu1=
