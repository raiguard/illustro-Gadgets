[Variables]
; ## SHOW / HIDE ##
hideMemController=0
hideCoreVoltage=0
hideLineGraph=0

; ## POSITIONING ##
bgWidth=210
bgHeight=(#bodyStartY# + (#rowYOffset# * (8 - #hideCoreVoltage# - #hideMemController#)) + (#graphHeight# * (#hideLineGraph# = 0 ? 1 : 0)) + (#hideLineGraph# = 0 ? 9 : 4))
bottomBGIntersect=(#bgHeight# - 60)
bgCenterX=(#bgWidth# / 2)
textXMarginRight=(#bgWidth# - 10)
; - Settings -
settingsBGWidth=210
settingsBGHeight=498
settingsBottomBGIntersect=(#settingsBGHeight# - 60)
settingsSubCheckboxX=56
settingsTextXMarginRight=(#settingsBGWidth# - 10)
settingsInterfaceXMargin=(#settingsTextXMarginRight# - 69)
settingsColorXMargin=(#settingsTextXMarginRight# - 101)

; ## COLORS ##
colorTotalUsage=255,246,42
colorMemoryUsage=107,198,250
colorFanUsage=107,238,98
colorMemController=250,158,0
colorCoreVoltage=236,28,70
; - Settings -
colorTextHyperlink=138,210,255

; ## TEXT ##
textMemoryUsed=
textMemoryAlloc=

; ## HWiNFO SETTINGS ##
; - GPU 0 -
; sensor ID and instance
HWiNFO-GPU-SensorId=0xe0002000
HWiNFO-GPU-SensorInstance=0x14
; entry IDs
HWiNFO-GPU-Clock=0x6000000
HWiNFO-GPU-Temp=0x1000000
HWiNFO-GPU-CoreLoad=0x7000000
HWiNFO-GPU-MemoryClock=0x6000004
HWiNFO-GPU-MemoryUsage=0x7000008
HWiNFO-GPU-MemoryAlloc=0x800003c
HWiNFO-GPU-FanSpeed=0x3000000
HWiNFO-GPU-FanUsage=0x8000000
HWiNFO-GPU-MemController=0x7000001
HWiNFO-GPU-CoreVoltage=0x2000000
