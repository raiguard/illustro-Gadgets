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
bgHeight=(#bodyStartY# + ((#rowYOffset# + 1) * (1 + (#hidePage# = 0 ? 1 : 0) + #cpuCores#)) + (#showClockAndFan# = 1 ? 12 : 0) + (#showLineGraph# = 1 ? #graphHeight# + 3 : 0) + 12)
bgCenterX=(#bgWidth# / 2)
textXMarginRight=(#bgWidth# - 10)

; -- Colors (Dynamic) --
core1Color=
core2Color=
core3Color=
core4Color=
core5Color=
core6Color=
core7Color=
core8Color=
core9Color=
core10Color=
core11Color=
core12Color=
core13Color=
core14Color=
core15Color=
core16Color=
ramColor=
pageColor=
avgCpuColor=

; -- Dynamic Variables --
textRAMUsed=""
textRAMTotal=""
textPageUsed=""
textPageTotal=""