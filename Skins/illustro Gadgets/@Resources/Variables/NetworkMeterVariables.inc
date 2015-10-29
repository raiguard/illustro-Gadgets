[Variables]
; -- General visual properties --
bgWidth=210
bgHeight=(#bodyStartY# + (#rowYOffset# * 5) + (#hideLineGraph# = 0 ? #graphHeight# + 3 : 0) + 7)
bgCenterX=(#bgWidth# / 2)

generalXMarginRight=(#bgWidth# - 11)

ipInfoTextX=50

graphWidth=(#bgWidth# - #generalXMarginLeft# - (#bgWidth# - #generalXMarginRight#))

; -- Dynamic (do not change)--
; Colors
colorHyperlink=0,0,0,0
colorUpload=0,0,0,0
colorDownload=0,0,0,0

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