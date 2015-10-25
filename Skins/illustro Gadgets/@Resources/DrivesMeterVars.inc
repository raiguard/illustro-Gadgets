[Variables]
; ## SHOW / HIDE ##
hideHistogram=0
hideGraph=0
hideDriveWarnings=0

; - Disks -
hideDiskD=0
hideDiskE=0
hideDiskF=0
hideDiskG=0
hideDiskH=0
hideDiskI=0
hideDiskJ=0
hideDiskK=0
hideDiskL=0

; ## POSITIONING ##
bgWidth=210
diskChunkY=((#rowYOffset# * 3) + 3)
bgHeight=(#bodyStartY# + ([CalcDiskCount] * #diskChunkY#) + (#hideGraph# = 0 ? #graphHeight# + 5 : 0) + 8)
textXMarginRight=(#bgWidth# - 11)
bgCenterX=(#bgWidth# / 2)
barWidth=(#bgWidth# - #textXMarginLeft# - 11 - 3)
graphY=(#hideGraph# = 1 ? -#graphHeight# - 1 : 5)r
graphWidth=(#bgWidth# - #textXMarginLeft# - 11)
; - Settings -
settingsBGWidth=210
settingsBGHeight=346
settingsBGCenterX=(#settingsBGWidth# / 2)
settingsSubCheckboxX=56
settingsTextXMarginRight=(#settingsBGWidth# - 11)
settingsInterfaceXMargin=(#settingsTextXMarginRight# - 69)
settingsColorXMargin=(#settingsTextXMarginRight# - 101)

; ## DRIVES TO MONITOR ##
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

; ## COLORS ##
colorDisk1=107,238,98
colorDisk2=255,246,42
colorDisk3=250,158,0
colorDisk4=236,28,70
colorDisk5=199,36,199
colorDisk6=145,70,232
colorDisk7=42,112,250
colorDisk8=43,224,224
colorDisk9=121,182,62
colorDisk10=204,255,0
colorDiskCapacityWarn=220,200,0
colorDiskCapacityFull=200,0,0

; ## DISK WARNING THRESHOLDS ##
diskThreshholdFull=0.90
diskThreshholdWarn=0.80

; ## DYNAMIC VALUES - DO NOT CHANGE ##
; - Colors -
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

; - Alpha -
alphaHistogram=50

; - Disk not Found Variables -
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

; - Text Variables -
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
