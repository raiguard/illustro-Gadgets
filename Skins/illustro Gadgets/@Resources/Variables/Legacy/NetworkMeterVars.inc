[Variables]
; ## SHOW / HIDE ##
hideRefresh=1
hideGraph=0

; ## POSITIONING ##
bgWidth=210
bgHeight=(#bodyStartY# + (#rowYOffset# * 5) + (#hideGraph# = 0 ? #graphHeight# + 3 : 0) + 7)
bgCenterX=(#bgWidth# / 2)
ipInfoTextX=50
lowerBGIntersect=(#bgHeight# - 60)
; - Settings -
settingsBGWidth=220
settingsBGHeight=258
settingsBottomBGIntersect=(#settingsBGHeight# - 60)
settingsSubCheckboxX=56
settingsInterfaceXMargin=((#bgWidth# / 2) + 34)
settingsColorXMargin=94

; ## COLORS ##
colorHyperlink=236,28,70
colorUpload=107,238,98
colorDownload=255,246,42

; ## DYNAMIC VARIABLES (do not change) ##
dataIsInbound=0
dataIsOutbound=0
disableBroadband=0
disableEthernet=0
disableWireless=0
maxBytesPerSec=0

textNetIn=""
textNetInBits=""
textNetInBytesCurrent=""
textNetInBytesTotal=""
textNetOut=""
textNetOutBits=""
textNetOutBytesCurrent=""
textNetOutBytesTotal=""

;
; Set the interface identifiers to match your system.  If your machine does not have have an adapter
; of the specified type or to turn off monitoring, use 0 as the identifier.  Set all interfaces to 0
; to have rainmeter report on all adapters, but if you have any virtualized interfaces active, the
; NetIn/NetOut/NetTotal measures will be incorrect.  See http://docs.rainmeter.net/tips/network-skin
; for an explanation and details on how to find your network interface indentifiers.  Use the
; Settings gadget to configure these values or enter them here.  Unless you have a machine with
; multiple network cards installed (i.e., like a server), you should only have one ACTIVE PHYSICAL
; network interface of each type, all other reported interfaces should be virtual or disconnected.
;
interfaceBroadband=0
interfaceEthernet=0
interfaceWireless=0
