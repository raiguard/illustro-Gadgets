[Variables]
; -- General visual properties --
bgWidth=210
bgHeight=(#bodyStartY# + (#rowYOffset# * 5) + (#showLineGraph# = 1 ? #graphHeight# + 3 : 0) + 5)
bgCenterX=(#bgWidth# / 2)

generalXMarginRight=(#bgWidth# - 11)

ipInfoTextX=50

graphWidth=(#bgWidth# - #generalXMarginLeft# - (#bgWidth# - #generalXMarginRight#))

; -- Dynamic (do not change)--
; Colors
colorUploadRgb=0,0,0
colorDownloadRgb=0,0,0

colorUploadA=0
colorDownloadA=0

; Data
dataIsInbound=0
dataIsOutbound=0
disableBroadband=0
disableEthernet=0
disableWireless=0
maxBytesPerSec=0

; Text
textNetIn=""
textNetInBits=""
textNetInBytesCurrent=""
textNetInBytesTotal=""
textNetOut=""
textNetOutBits=""
textNetOutBytesCurrent=""
textNetOutBytesTotal=""
