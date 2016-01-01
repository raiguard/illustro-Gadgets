[Variables]
; -- General positioning --
bgWidth=210
bgHeight=(#bodyStartY# + ([CalcDiskCount] * #diskChunkY#) + (#hideLineGraph# = 0 ? #graphHeight# + 5 : 3) + 8)
bgCenterX=(#bgWidth# / 2)

generalXMarginRight=(#bgWidth# - 11)
diskChunkY=((#rowYOffset# * 3) + 1)

barWidth=(#bgWidth# - #generalXMarginLeft# - 11 - 3)

graphY=(#hideLineGraph# = 1 ? -#graphHeight# - 1 : 5)r
graphWidth=(#bgWidth# - #generalXMarginLeft# - 11)

alphaHistogram=50

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

gColorDiskC=0,0,0
gColorDiskD=0,0,0
gColorDiskE=0,0,0
gColorDiskF=0,0,0
gColorDiskG=0,0,0
gColorDiskH=0,0,0
gColorDiskI=0,0,0
gColorDiskJ=0,0,0
gColorDiskK=0,0,0
gColorDiskL=0,0,0

gAlphaDiskC=0
gAlphaDiskD=0
gAlphaDiskE=0
gAlphaDiskF=0
gAlphaDiskG=0
gAlphaDiskH=0
gAlphaDiskI=0
gAlphaDiskJ=0
gAlphaDiskK=0
gAlphaDiskL=0

gColorDisk1=0,0,0
gColorDisk2=0,0,0
gColorDisk3=0,0,0
gColorDisk4=0,0,0
gColorDisk5=0,0,0
gColorDisk6=0,0,0
gColorDisk7=0,0,0
gColorDisk8=0,0,0
gColorDisk9=0,0,0
gColorDisk10=0,0,0

gAlphaDisk1=0
gAlphaDisk2=0
gAlphaDisk3=0
gAlphaDisk4=0
gAlphaDisk5=0
gAlphaDisk6=0
gAlphaDisk7=0
gAlphaDisk8=0
gAlphaDisk9=0
gAlphaDisk10=0

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
