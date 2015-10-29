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
bgHeight=(#bodyStartY# + (#rowYOffset# * (1 + #showPage# + #cpuCores# + #showClockAndFan#)) + (#showLineGraph# = 1 ? #rowYOffset# + #graphHeight# - 3 : 6) + ((#showPage# = 0 && #showClockAndFan# = 0 && #showLineGraph# = 0) ? 2 : 0))
bgCenterX=(#bgWidth# / 2)
generalXMarginRight=(#bgWidth# - 10)
graphWidth=(#bgWidth# - #generalXMarginLeft# - (#bgWidth# - #generalXMarginRight# + 1))

; -- Colors (Dynamic) --
colorCore1=0,0,0
colorCore2=0,0,0
colorCore3=0,0,0
colorCore4=0,0,0
colorCore5=0,0,0
colorCore6=0,0,0
colorCore7=0,0,0
colorCore8=0,0,0
colorCore9=0,0,0
colorCore10=0,0,0
colorCore11=0,0,0
colorCore12=0,0,0
colorCore13=0,0,0
colorCore14=0,0,0
colorCore15=0,0,0
colorCore16=0,0,0
colorRam=0,0,0,0
colorPage=0,0,0
colorAvgCpu=0,0,0

; -- Dynamic Variables --
textRAMUsed=""
textRAMTotal=""
textPageUsed=""
textPageTotal=""
