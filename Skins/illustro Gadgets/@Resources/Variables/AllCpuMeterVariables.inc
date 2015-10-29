[Variables]
; -- CPU Cores --
cpuCores=4
threadsPerCore=

; Hide
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

; -- Temperatures --
noTempReader=1
disableTemps=0

; -- Positioning --
bgWidth=210
bgHeight=(#bodyStartY# + ((#rowYOffset# + 1) * (1 + (#hidePage# = 0 ? 1 : 0) + #cpuCores#)) + (#showClockAndFan# = 1 ? 12 : 0) + (#showLineGraph# = 1 ? #graphHeight# + 3 : 0) + 13)
bgCenterX=(#bgWidth# / 2)
generalXMarginRight=(#bgWidth# - 10)
graphWidth=190

; -- Colors (Dynamic) --
core1Color=0,0,0
core2Color=0,0,0
core3Color=0,0,0
core4Color=0,0,0
core5Color=0,0,0
core6Color=0,0,0
core7Color=0,0,0
core8Color=0,0,0
core9Color=0,0,0
core10Color=0,0,0
core11Color=0,0,0
core12Color=0,0,0
core13Color=0,0,0
core14Color=0,0,0
core15Color=0,0,0
core16Color=0,0,0
ramColor=0,0,0
pageColor=0,0,0
avgCpuColor=0,0,0

; -- Dynamic Variables --
textRAMUsed=""
textRAMTotal=""
textPageUsed=""
textPageTotal=""
