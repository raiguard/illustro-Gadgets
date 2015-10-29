[Variables]
; -- General positioning --
bgWidth=210
bgHeight=(#bodyStartY# + ([CalcDiskCount] * #diskChunkY#) + (#hideGraph# = 0 ? #graphHeight# + 5 : 0) + 8)
bgCenterX=(#bgWidth# / 2)

generalXMarginRight=(#bgWidth# - 11)
diskChunkY=((#rowYOffset# * 3))

barWidth=(#bgWidth# - #generalXMarginLeft# - 11 - 3)

graphY=(#hideGraph# = 1 ? -#graphHeight# - 1 : 5)r
graphWidth=(#bgWidth# - #generalXMarginLeft# - 11)

; -- Disks --
; Drives to monitor
d01="C:"
d02="D:"
d03="E:"
d04="F:"
d05="G:"
d06="H:"
d07="I:"
d08="J:"
d09="K:"
d10="L:"

; Colors (Dynamic)
colorDiskC=0,0,0,0
colorDiskD=0,0,0,0
colorDiskE=0,0,0,0
colorDiskF=0,0,0,0
colorDiskG=0,0,0,0
colorDiskH=0,0,0,0
colorDiskI=0,0,0,0
colorDiskJ=0,0,0,0
colorDiskK=0,0,0,0
colorDiskL=0,0,0,0

; Disk not found
diskNotFoundC=0
diskNotFoundD=0
diskNotFoundE=0
diskNotFoundF=0
diskNotFoundG=0
diskNotFoundH=0
diskNotFoundI=0
diskNotFoundJ=0
diskNotFoundK=0
diskNotFoundL=0

; Text variables (dynamic)
textDiskSpaceFreeC=""
textDiskSpaceFreeD=""
textDiskSpaceFreeE=""
textDiskSpaceFreeF=""
textDiskSpaceFreeG=""
textDiskSpaceFreeH=""
textDiskSpaceFreeI=""
textDiskSpaceFreeJ=""
textDiskSpaceFreeK=""
textDiskSpaceFreeL=""
textDiskSpaceUsedC=""
textDiskSpaceUsedD=""
textDiskSpaceUsedE=""
textDiskSpaceUsedF=""
textDiskSpaceUsedG=""
textDiskSpaceUsedH=""
textDiskSpaceUsedI=""
textDiskSpaceUsedJ=""
textDiskSpaceUsedK=""
textDiskSpaceUsedL=""
textDiskSpaceTotalC=""
textDiskSpaceTotalD=""
textDiskSpaceTotalE=""
textDiskSpaceTotalF=""
textDiskSpaceTotalG=""
textDiskSpaceTotalH=""
textDiskSpaceTotalI=""
textDiskSpaceTotalJ=""
textDiskSpaceTotalK=""
textDiskSpaceTotalL=""
textDiskReadC=""
textDiskReadD=""
textDiskReadE=""
textDiskReadF=""
textDiskReadG=""
textDiskReadH=""
textDiskReadI=""
textDiskReadJ=""
textDiskReadK=""
textDiskReadL=""
textDiskWriteC=""
textDiskWriteD=""
textDiskWriteE=""
textDiskWriteF=""
textDiskWriteG=""
textDiskWriteH=""
textDiskWriteI=""
textDiskWriteJ=""
textDiskWriteK=""
textDiskWriteL=""
