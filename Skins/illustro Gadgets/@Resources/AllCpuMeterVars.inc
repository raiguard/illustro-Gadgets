[Variables]
totalCores=4
threadsPerCore=
tempUOM=C

; ## SHOW/HIDE ##
hideCore2=0
hideCore3=0
hideCore4=0
hideCore5=1
hideCore6=1
hideCore7=1
hideCore8=1
hideCore9=1
hideCore10=1
hideCore11=1
hideCore12=1
hideCore13=1
hideCore14=1
hideCore15=1
hideCore16=1
hidePage=0
showClockAndFan=1
avgCpuGraphOnly=0
showGraph=1

; ## POSITIONING ##
bgWidth=210
bgHeight=(#bodyStartY# + ((#rowYOffset# + 1) * (1 + (#hidePage# = 0 ? 1 : 0) + #totalCores#)) + (#showClockAndFan# = 1 ? 12 : 0) + (#showGraph# = 1 ? #graphHeight# + 3 : 0) + 12)
lowerBGIntersect=(#bgHeight# - 60)
bgCenterX=(#bgWidth# / 2)
textXMarginRight=(#bgWidth# - 10)
; - Settings -
settingsBGWidth=210
settingsBGHeight=587
settingsLowerBodyStartY=187
settingsPageName=ColorSettings
settingsTextXMarginRight=(#settingsBGWidth# - 10)
settingsInterfaceXMargin=(#settingsTextXMarginRight# - 69)
settingsColorXMargin=(#settingsTextXMarginRight# - 101)

; ## COLORING OPTIONS ##
colorCore1=107,238,98
colorCore2=255,246,42
colorCore3=250,158,0
colorCore4=236,28,70
colorCore5=199,36,199
colorCore6=145,70,232
colorCore7=42,112,250
colorCore8=43,224,224
colorCore9=121,182,62
colorCore10=204,255,0
colorCore11=250,205,22
colorCore12=191,100,55
colorCore13=201,41,56
colorCore14=179,0,91
colorCore15=153,84,166
colorCore16=99,125,217
colorRAM=107,198,250
colorPage=255,204,0
colorAvgCpu=236,28,70

; ## CORE TEMP METER MEASURES ##
activeTempReader=HWiNFO
tempBase=MeasureCPUTempCore
tempCore1=#tempBase#1#activeTempReader#
tempCore2=#tempBase#2#activeTempReader#
tempCore3=#tempBase#3#activeTempReader#
tempCore4=#tempBase#4#activeTempReader#
tempCore5=#tempBase#5#activeTempReader#
tempCore6=#tempBase#6#activeTempReader#
tempCore7=#tempBase#7#activeTempReader#
tempCore8=#tempBase#8#activeTempReader#
tempCore9=#tempBase#9#activeTempReader#
tempCore10=#tempBase#10#activeTempReader#
tempCore11=#tempBase#11#activeTempReader#
tempCore12=#tempBase#12#activeTempReader#
tempCore13=#tempBase#13#activeTempReader#
tempCore14=#tempBase#14#activeTempReader#
tempCore15=#tempBase#15#activeTempReader#
tempCore16=#tempBase#16#activeTempReader#
isHWiNFOInUse=0
noTempReader=1
disableTemps=0
tempsInCelsius=1

; ## HWiNFO HEXADECIMAL VALUES ##
; - CPU 0 DTS -
; sensor ID and instance
HWiNFO-CPU0-DTS-SensorId=0xf0000400
HWiNFO-CPU0-DTS-SensorInstance=0x0
; entry IDs
HWiNFO-CPU0-DTS-Core0Temp=0x1000000
HWiNFO-CPU0-DTS-Core1Temp=0x1000001
HWiNFO-CPU0-DTS-Core2Temp=0x1000002
HWiNFO-CPU0-DTS-Core3Temp=0x1000003
HWiNFO-CPU0-DTS-Core4Temp=0x1000004
HWiNFO-CPU0-DTS-Core5Temp=0x1000005
HWiNFO-CPU0-DTS-Core6Temp=0x1000006
HWiNFO-CPU0-DTS-Core7Temp=0x1000007
HWiNFO-CPU0-DTS-CoreMax=0x100007f

; - Motherboard -
HWiNFO-MOBO-SensorId=0xf7067760
HWiNFO-MOBO-SensorInstance=0x0
HWiNFO-MOBO-CPUFan=0x3000001

; ## MEASURE VARIABLES ##
textRAMUsed=""
textRAMTotal=""
textPageUsed=""
textPageTotal=""
