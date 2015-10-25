; ## DISK C ##
[MeasureDiskLabelC]
Measure=FreeDiskSpace
Drive=#d01#
Label=1

[MeasureDiskSpaceTotalC]
Measure=FreeDiskSpace
Drive=#d01#
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalC], 5, '1k', 'textDiskSpaceTotalC')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalC], 5, '1k', 'textDiskSpaceTotalC')"]

[MeasureDiskSpaceFreeC]
Measure=FreeDiskSpace
Drive=#d01#
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeC], 5, '1k', 'textDiskSpaceFreeC')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeC], 5, '1k', 'textDiskSpaceFreeC')"]

[MeasureDiskSpaceUsedC]
Measure=FreeDiskSpace
Drive=#D01#
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedC], 5, '1k', 'textDiskSpaceUsedC')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedC], 5, '1k', 'textDiskSpaceUsedC')"]

[MeasureDiskTypeC]
Measure=FreeDiskSpace
Drive=#d01#
Type=1

[CalcDiskExistsC]
Measure=Calc
Formula=(MeasureDiskSpaceTotalC > 0 && ((MeasureDiskTypeC = 3) || (MeasureDiskTypeC = 4))) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsC = 1)
IfTrueAction= [!SetVariable DiskNotFoundC 0][!SetOption MeasureDiskPercentFullC Disabled 0][!SetOption MeasureDiskIdleTimeC Disabled 0][!SetOption MeasureDiskTimeC Disabled 0][!SetOption MeasureDiskReadC Disabled 0][!SetOption MeasureDiskWriteC Disabled 0][!SetOption MeasureDiskReadWriteC Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundC 1][!SetOption MeasureDiskPercentFullC Disabled 1][!SetOption MeasureDiskIdleTimeC Disabled 1][!SetOption MeasureDiskTimeC Disabled 1][!SetOption MeasureDiskReadC Disabled 1][!SetOption MeasureDiskWriteC Disabled 1][!SetOption MeasureDiskReadWriteC Disabled 1]

[MeasureDiskPercentFullC]
Measure=Calc
Formula=MeasureDiskSpaceUsedC / MeasureDiskSpaceTotalC

[MeasureDiskIdleTimeC]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d01#"

[MeasureDiskTimeC]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeC / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadC]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d01#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadC], 4, '1k', 'textDiskReadC')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadC], 4, '1k', 'textDiskReadC')"]

[MeasureDiskWriteC]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d01#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteC], 4, '1k', 'textDiskWriteC')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteC], 4, '1k', 'textDiskWriteC')"]

[MeasureDiskReadWriteC]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d01#"

; ## DISK D ##
[MeasureDiskLabelD]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalD]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalD], 5, '1k', 'textDiskSpaceTotalD')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalD], 5, '1k', 'textDiskSpaceTotalD')"]

[MeasureDiskSpaceFreeD]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#d02#
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeD], 5, '1k', 'textDiskSpaceFreeD')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeD], 5, '1k', 'textDiskSpaceFreeD')"]

[MeasureDiskSpaceUsedD]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#d02#
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedD], 5, '1k', 'textDiskSpaceUsedD')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedD], 5, '1k', 'textDiskSpaceUsedD')"]

[MeasureDiskTypeD]
Measure=FreeDiskSpace
Drive=#d02#
IgnoreRemovable=0
Type=1

[CalcDiskExistsD]
Measure=Calc
Formula=(MeasureDiskSpaceTotalD > 0 && ((MeasureDiskTypeD = 3) || (MeasureDiskTypeD = 4)) && (#HideDiskD# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsD = 1)
IfTrueAction= [!SetVariable diskNotFoundD 0][!SetOption MeasureDiskPercentFullD Disabled 0][!SetOption MeasureDiskIdleTimeD Disabled 0][!SetOption MeasureDiskTimeD Disabled 0][!SetOption MeasureDiskReadD Disabled 0][!SetOption MeasureDiskWriteD Disabled 0][!SetOption MeasureDiskReadWriteD Disabled 0]
IfFalseAction=[!SetVariable diskNotFoundD 1][!SetOption MeasureDiskPercentFullD Disabled 1][!SetOption MeasureDiskIdleTimeD Disabled 1][!SetOption MeasureDiskTimeD Disabled 1][!SetOption MeasureDiskReadD Disabled 1][!SetOption MeasureDiskWriteD Disabled 1][!SetOption MeasureDiskReadWriteD Disabled 1]

[MeasureDiskPercentFullD]
Measure=Calc
Formula=MeasureDiskSpaceUsedD / MeasureDiskSpaceTotalD

[MeasureDiskIdleTimeD]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d02#"

[MeasureDiskTimeD]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeD / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadD]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d02#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadD], 4, '1k', 'textDiskReadD')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadD], 4, '1k', 'textDiskReadD')"]

[MeasureDiskWriteD]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d02#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteD], 4, '1k', 'textDiskWriteD')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteD], 4, '1k', 'textDiskWriteD')"]

[MeasureDiskReadWriteD]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d02#"

; ## DISK E ##
[MeasureDiskLabelE]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalE]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalE], 5, '1k', 'textDiskSpaceTotalE')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalE], 5, '1k', 'textDiskSpaceTotalE')"]

[MeasureDiskSpaceFreeE]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#d03#
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeE], 5, '1k', 'textDiskSpaceFreeE')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeE], 5, '1k', 'textDiskSpaceFreeE')"]

[MeasureDiskSpaceUsedE]
Measure=FreeDiskSpace
IgnoreRemovable=0
Drive=#d03#
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedE], 5, '1k', 'textDiskSpaceUsedE')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedE], 5, '1k', 'textDiskSpaceUsedE')"]

[MeasureDiskTypeE]
Measure=FreeDiskSpace
Drive=#d03#
IgnoreRemovable=0
Type=1

[CalcDiskExistsE]
Measure=Calc
Formula=(MeasureDiskSpaceTotalE > 0 && ((MeasureDiskTypeE = 3) || (MeasureDiskTypeE = 4)) && (#hideDiskE# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsE = 1)
IfTrueAction= [!SetVariable diskNotFoundE 0][!SetOption MeasureDiskPercentFullE Disabled 0][!SetOption MeasureDiskIdleTimeE Disabled 0][!SetOption MeasureDiskTimeE Disabled 0][!SetOption MeasureDiskReadE Disabled 0][!SetOption MeasureDiskWriteE Disabled 0][!SetOption MeasureDiskReadWriteE Disabled 0]
IfFalseAction=[!SetVariable diskNotFoundE 1][!SetOption MeasureDiskPercentFullE Disabled 1][!SetOption MeasureDiskIdleTimeE Disabled 1][!SetOption MeasureDiskTimeE Disabled 1][!SetOption MeasureDiskReadE Disabled 1][!SetOption MeasureDiskWriteE Disabled 1][!SetOption MeasureDiskReadWriteE Disabled 1]

[MeasureDiskPercentFullE]
Measure=Calc
Formula=MeasureDiskSpaceUsedE / MeasureDiskSpaceTotalE

[MeasureDiskIdleTimeE]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d03#"

[MeasureDiskTimeE]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeE / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadE]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d03#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadE], 4, '1k', 'textDiskReadE')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadE], 4, '1k', 'textDiskReadE')"]

[MeasureDiskWriteE]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d03#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteE], 4, '1k', 'TextDiskWriteE')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteE], 4, '1k', 'TextDiskWriteE')"]

[MeasureDiskReadWriteE]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d03#"

; ## DISK F ##
[MeasureDiskLabelF]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalF]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalF], 5, '1k', 'textDiskSpaceTotalF')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalF], 5, '1k', 'textDiskSpaceTotalF')"]

[MeasureDiskSpaceFreeF]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeF], 5, '1k', 'textDiskSpaceFreeF')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeF], 5, '1k', 'textDiskSpaceFreeF')"]

[MeasureDiskSpaceUsedF]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedF], 5, '1k', 'textDiskSpaceUsedF')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedF], 5, '1k', 'textDiskSpaceUsedF')"]

[MeasureDiskTypeF]
Measure=FreeDiskSpace
Drive=#d04#
IgnoreRemovable=0
Type=1

[CalcDiskExistsF]
Measure=Calc
Formula=(MeasureDiskSpaceTotalF > 0 && ((MeasureDiskTypeF = 3) || (MeasureDiskTypeF = 4)) && (#HideDiskF# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsF = 1)
IfTrueAction= [!SetVariable DiskNotFoundF 0][!SetOption MeasureDiskPercentFullF Disabled 0][!SetOption MeasureDiskIdleTimeF Disabled 0][!SetOption MeasureDiskTimeF Disabled 0][!SetOption MeasureDiskReadF Disabled 0][!SetOption MeasureDiskWriteF Disabled 0][!SetOption MeasureDiskReadWriteF Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundF 1][!SetOption MeasureDiskPercentFullF Disabled 1][!SetOption MeasureDiskIdleTimeF Disabled 1][!SetOption MeasureDiskTimeF Disabled 1][!SetOption MeasureDiskReadF Disabled 1][!SetOption MeasureDiskWriteF Disabled 1][!SetOption MeasureDiskReadWriteF Disabled 1]

[MeasureDiskPercentFullF]
Measure=Calc
Formula=MeasureDiskSpaceUsedF / MeasureDiskSpaceTotalF
IfCondition=(MeasureDiskPercentFullF >= #DiskThreshholdFull#)
IfTrueAction=[!SetOption BarMeterDiskF BarColor #ColorBarFull#]
IfCondition2=(MeasureDiskPercentFullF >= #DiskThreshholdWarn#) && (MeasureDiskPercentFullF < #DiskThreshholdFull#)
IfTrueAction2=[!SetOption BarMeterDiskF BarColor #ColorBarWarn#]
IfCondition3=(MeasureDiskPercentFullF < #DiskThreshholdWarn#)
IfTrueAction3=[!SetOption BarMeterDiskF BarColor #ColorBarOK#]

[MeasureDiskIdleTimeF]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d04#"

[MeasureDiskTimeF]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeF / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadF]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d04#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadF], 4, '1k', 'textDiskReadF')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadF], 4, '1k', 'textDiskReadF')"]

[MeasureDiskWriteF]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d04#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteF], 4, '1k', 'textDiskWriteF')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteF], 4, '1k', 'textDiskWriteF')"]

[MeasureDiskReadWriteF]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d04#"

; ## DISK G ##
[MeasureDiskLabelG]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalG]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalG], 5, '1k', 'textDiskSpaceTotalG')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalG], 5, '1k', 'textDiskSpaceTotalG')"]

[MeasureDiskSpaceFreeG]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeG], 5, '1k', 'textDiskSpaceFreeG')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeG], 5, '1k', 'textDiskSpaceFreeG')"]

[MeasureDiskSpaceUsedG]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedG], 5, '1k', 'textDiskSpaceUsedG')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedG], 5, '1k', 'textDiskSpaceUsedG')"]

[MeasureDiskTypeG]
Measure=FreeDiskSpace
Drive=#d05#
IgnoreRemovable=0
Type=1

[CalcDiskExistsG]
Measure=Calc
Formula=(MeasureDiskSpaceTotalG > 0 && ((MeasureDiskTypeG = 3) || (MeasureDiskTypeG = 4)) && (#HideDiskG# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsG = 1)
IfTrueAction= [!SetVariable DiskNotFoundG 0][!SetOption MeasureDiskPercentFullG Disabled 0][!SetOption MeasureDiskIdleTimeG Disabled 0][!SetOption MeasureDiskTimeG Disabled 0][!SetOption MeasureDiskReadG Disabled 0][!SetOption MeasureDiskWriteG Disabled 0][!SetOption MeasureDiskReadWriteG Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundG 1][!SetOption MeasureDiskPercentFullG Disabled 1][!SetOption MeasureDiskIdleTimeG Disabled 1][!SetOption MeasureDiskTimeG Disabled 1][!SetOption MeasureDiskReadG Disabled 1][!SetOption MeasureDiskWriteG Disabled 1][!SetOption MeasureDiskReadWriteG Disabled 1]

[MeasureDiskPercentFullG]
Measure=Calc
Formula=MeasureDiskSpaceUsedG / MeasureDiskSpaceTotalG
IfCondition=(MeasureDiskPercentFullG >= #DiskThreshholdFull#)
IfTrueAction=[!SetOption BarMeterDiskG BarColor #ColorBarFull#]
IfCondition2=(MeasureDiskPercentFullG >= #DiskThreshholdWarn#) && (MeasureDiskPercentFullG < #DiskThreshholdFull#)
IfTrueAction2=[!SetOption BarMeterDiskG BarColor #ColorBarWarn#]
IfCondition3=(MeasureDiskPercentFullG < #DiskThreshholdWarn#)
IfTrueAction3=[!SetOption BarMeterDiskG BarColor #ColorBarOK#]

[MeasureDiskIdleTimeG]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d05#"

[MeasureDiskTimeG]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeG / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadG]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d05#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadG], 4, '1k', 'textDiskReadG')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadG], 4, '1k', 'textDiskReadG')"]

[MeasureDiskWriteG]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d05#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteG], 4, '1k', 'textDiskWriteG')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteG], 4, '1k', 'textDiskWriteG')"]

[MeasureDiskReadWriteG]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d05#"

; ## DISK H ##
[MeasureDiskLabelH]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalH]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalH], 5, '1k', 'textDiskSpaceTotalH')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalH], 5, '1k', 'textDiskSpaceTotalH')"]

[MeasureDiskSpaceFreeH]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeH], 5, '1k', 'textDiskSpaceFreeH')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeH], 5, '1k', 'textDiskSpaceFreeH')"]

[MeasureDiskSpaceUsedH]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedH], 5, '1k', 'textDiskSpaceUsedH')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedH], 5, '1k', 'textDiskSpaceUsedH')"]

[MeasureDiskTypeH]
Measure=FreeDiskSpace
Drive=#d06#
IgnoreRemovable=0
Type=1

[CalcDiskExistsH]
Measure=Calc
Formula=(MeasureDiskSpaceTotalH > 0 && ((MeasureDiskTypeH = 3) || (MeasureDiskTypeH = 4)) && (#HideDiskH# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsH = 1)
IfTrueAction= [!SetVariable DiskNotFoundH 0][!SetOption MeasureDiskPercentFullH Disabled 0][!SetOption MeasureDiskIdleTimeH Disabled 0][!SetOption MeasureDiskTimeH Disabled 0][!SetOption MeasureDiskReadH Disabled 0][!SetOption MeasureDiskWriteH Disabled 0][!SetOption MeasureDiskReadWriteH Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundH 1][!SetOption MeasureDiskPercentFullH Disabled 1][!SetOption MeasureDiskIdleTimeH Disabled 1][!SetOption MeasureDiskTimeH Disabled 1][!SetOption MeasureDiskReadH Disabled 1][!SetOption MeasureDiskWriteH Disabled 1][!SetOption MeasureDiskReadWriteH Disabled 1]

[MeasureDiskPercentFullH]
Measure=Calc
Formula=MeasureDiskSpaceUsedH / MeasureDiskSpaceTotalH
IfCondition=(MeasureDiskPercentFullH >= #DiskThreshholdFull#)
IfTrueAction=[!SetOption BarMeterDiskH BarColor #ColorBarFull#]
IfCondition2=(MeasureDiskPercentFullH >= #DiskThreshholdWarn#) && (MeasureDiskPercentFullH < #DiskThreshholdFull#)
IfTrueAction2=[!SetOption BarMeterDiskH BarColor #ColorBarWarn#]
IfCondition3=(MeasureDiskPercentFullH < #DiskThreshholdWarn#)
IfTrueAction3=[!SetOption BarMeterDiskH BarColor #ColorBarOK#]

[MeasureDiskIdleTimeH]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d06#"

[MeasureDiskTimeH]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeH / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadH]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d06#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadH], 4, '1k', 'textDiskReadH')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadH], 4, '1k', 'textDiskReadH')"]

[MeasureDiskWriteH]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d06#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteH], 4, '1k', 'textDiskWriteH')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteH], 4, '1k', 'textDiskWriteH')"]

[MeasureDiskReadWriteH]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d06#"

; ## DISK I ##
[MeasureDiskLabelI]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalI]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalI], 5, '1k', 'textDiskSpaceTotalI')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalI], 5, '1k', 'textDiskSpaceTotalI')"]

[MeasureDiskSpaceFreeI]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeI], 5, '1k', 'textDiskSpaceFreeI')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeI], 5, '1k', 'textDiskSpaceFreeI')"]

[MeasureDiskSpaceUsedI]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedI], 5, '1k', 'textDiskSpaceUsedI')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedI], 5, '1k', 'textDiskSpaceUsedI')"]

[MeasureDiskTypeI]
Measure=FreeDiskSpace
Drive=#d07#
IgnoreRemovable=0
Type=1

[CalcDiskExistsI]
Measure=Calc
Formula=(MeasureDiskSpaceTotalI > 0 && ((MeasureDiskTypeI = 3) || (MeasureDiskTypeI = 4)) && (#HideDiskI# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsI = 1)
IfTrueAction= [!SetVariable DiskNotFoundI 0][!SetOption MeasureDiskPercentFullI Disabled 0][!SetOption MeasureDiskIdleTimeI Disabled 0][!SetOption MeasureDiskTimeI Disabled 0][!SetOption MeasureDiskReadI Disabled 0][!SetOption MeasureDiskWriteI Disabled 0][!SetOption MeasureDiskReadWriteI Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundI 1][!SetOption MeasureDiskPercentFullI Disabled 1][!SetOption MeasureDiskIdleTimeI Disabled 1][!SetOption MeasureDiskTimeI Disabled 1][!SetOption MeasureDiskReadI Disabled 1][!SetOption MeasureDiskWriteI Disabled 1][!SetOption MeasureDiskReadWriteI Disabled 1]

[MeasureDiskPercentFullI]
Measure=Calc
Formula=MeasureDiskSpaceUsedI / MeasureDiskSpaceTotalI
IfCondition=(MeasureDiskPercentFullI >= #DiskThreshholdFull#)
IfTrueAction=[!SetOption BarMeterDiskI BarColor #ColorBarFull#]
IfCondition2=(MeasureDiskPercentFullI >= #DiskThreshholdWarn#) && (MeasureDiskPercentFullI < #DiskThreshholdFull#)
IfTrueAction2=[!SetOption BarMeterDiskI BarColor #ColorBarWarn#]
IfCondition3=(MeasureDiskPercentFullI < #DiskThreshholdWarn#)
IfTrueAction3=[!SetOption BarMeterDiskI BarColor #ColorBarOK#]

[MeasureDiskIdleTimeI]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d07#"

[MeasureDiskTimeI]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeI / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadI]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d07#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadI], 4, '1k', 'textDiskReadI')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadI], 4, '1k', 'textDiskReadI')"]

[MeasureDiskWriteI]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d07#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteI], 4, '1k', 'textDiskWriteI')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteI], 4, '1k', 'textDiskWriteI')"]

[MeasureDiskReadWriteI]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d07#"

; ## DISK J ##
[MeasureDiskLabelJ]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalJ]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalJ], 5, '1k', 'textDiskSpaceTotalJ')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalJ], 5, '1k', 'textDiskSpaceTotalJ')"]

[MeasureDiskSpaceFreeJ]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeJ], 5, '1k', 'textDiskSpaceFreeJ')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeJ], 5, '1k', 'textDiskSpaceFreeJ')"]

[MeasureDiskSpaceUsedJ]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedJ], 5, '1k', 'textDiskSpaceUsedJ')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedJ], 5, '1k', 'textDiskSpaceUsedJ')"]

[MeasureDiskTypeJ]
Measure=FreeDiskSpace
Drive=#d08#
IgnoreRemovable=0
Type=1

[CalcDiskExistsJ]
Measure=Calc
Formula=(MeasureDiskSpaceTotalJ > 0 && ((MeasureDiskTypeJ = 3) || (MeasureDiskTypeJ = 4)) && (#HideDiskJ# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsJ = 1)
IfTrueAction= [!SetVariable DiskNotFoundJ 0][!SetOption MeasureDiskPercentFullJ Disabled 0][!SetOption MeasureDiskIdleTimeJ Disabled 0][!SetOption MeasureDiskTimeJ Disabled 0][!SetOption MeasureDiskReadJ Disabled 0][!SetOption MeasureDiskWriteJ Disabled 0][!SetOption MeasureDiskReadWriteJ Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundJ 1][!SetOption MeasureDiskPercentFullJ Disabled 1][!SetOption MeasureDiskIdleTimeJ Disabled 1][!SetOption MeasureDiskTimeJ Disabled 1][!SetOption MeasureDiskReadJ Disabled 1][!SetOption MeasureDiskWriteJ Disabled 1][!SetOption MeasureDiskReadWriteJ Disabled 1]

[MeasureDiskPercentFullJ]
Measure=Calc
Formula=MeasureDiskSpaceUsedJ / MeasureDiskSpaceTotalJ
IfCondition=(MeasureDiskPercentFullJ >= #diskThreshholdFull#)
IfTrueAction=[!SetOption BarMeterDiskJ BarColor #colorBarFull#]
IfCondition2=(MeasureDiskPercentFullJ >= #diskThreshholdWarn#) && (MeasureDiskPercentFullJ < #DiskThreshholdFull#)
IfTrueAction2=[!SetOption BarMeterDiskJ BarColor #colorBarWarn#]
IfCondition3=(MeasureDiskPercentFullJ < #DiskThreshholdWarn#)
IfTrueAction3=[!SetOption BarMeterDiskJ BarColor #colorBarOK#]

[MeasureDiskIdleTimeJ]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d08#"

[MeasureDiskTimeJ]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeJ / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadJ]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d08#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadJ], 4, '1k', 'textDiskReadJ')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadJ], 4, '1k', 'textDiskReadJ')"]

[MeasureDiskWriteJ]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d08#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteJ], 4, '1k', 'textDiskWriteJ')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteJ], 4, '1k', 'textDiskWriteJ')"]

[MeasureDiskReadWriteJ]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d08#"

; ## DISK K ##
[MeasureDiskLabelK]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalK]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalK], 5, '1k', 'textDiskSpaceTotalK')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalK], 5, '1k', 'textDiskSpaceTotalK')"]

[MeasureDiskSpaceFreeK]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeK], 5, '1k', 'textDiskSpaceFreeK')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeK], 5, '1k', 'textDiskSpaceFreeK')"]

[MeasureDiskSpaceUsedK]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedK], 5, '1k', 'textDiskSpaceUsedK')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedK], 5, '1k', 'textDiskSpaceUsedK')"]

[MeasureDiskTypeK]
Measure=FreeDiskSpace
Drive=#d09#
IgnoreRemovable=0
Type=1

[CalcDiskExistsK]
Measure=Calc
Formula=(MeasureDiskSpaceTotalK > 0 && ((MeasureDiskTypeK = 3) || (MeasureDiskTypeK = 4)) && (#HideDiskK# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsK = 1)
IfTrueAction= [!SetVariable DiskNotFoundK 0][!SetOption MeasureDiskPercentFullK Disabled 0][!SetOption MeasureDiskIdleTimeK Disabled 0][!SetOption MeasureDiskTimeK Disabled 0][!SetOption MeasureDiskReadK Disabled 0][!SetOption MeasureDiskWriteK Disabled 0][!SetOption MeasureDiskReadWriteK Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundK 1][!SetOption MeasureDiskPercentFullK Disabled 1][!SetOption MeasureDiskIdleTimeK Disabled 1][!SetOption MeasureDiskTimeK Disabled 1][!SetOption MeasureDiskReadK Disabled 1][!SetOption MeasureDiskWriteK Disabled 1][!SetOption MeasureDiskReadWriteK Disabled 1]

[MeasureDiskPercentFullK]
Measure=Calc
Formula=MeasureDiskSpaceUsedK / MeasureDiskSpaceTotalK
IfCondition=(MeasureDiskPercentFullK >= #DiskThreshholdFull#)
IfTrueAction=[!SetOption BarMeterDiskK BarColor #ColorBarFull#]
IfCondition2=(MeasureDiskPercentFullK >= #DiskThreshholdWarn#) && (MeasureDiskPercentFullK < #DiskThreshholdFull#)
IfTrueAction2=[!SetOption BarMeterDiskK BarColor #ColorBarWarn#]
IfCondition3=(MeasureDiskPercentFullK < #DiskThreshholdWarn#)
IfTrueAction3=[!SetOption BarMeterDiskK BarColor #ColorBarOK#]

[MeasureDiskIdleTimeK]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d09#"

[MeasureDiskTimeK]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeK / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadK]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d09#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadK], 4, '1k', 'textDiskReadK')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadK], 4, '1k', 'textDiskReadK')"]

[MeasureDiskWriteK]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d09#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteK], 4, '1k', 'textDiskWriteK')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteK], 4, '1k', 'textDiskWriteK')"]

[MeasureDiskReadWriteK]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d09#"

; ## DISK L ##
[MeasureDiskLabelL]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
Label=1

[MeasureDiskSpaceTotalL]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
Total=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalL], 5, '1k', 'textDiskSpaceTotalL')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceTotalL], 5, '1k', 'textDiskSpaceTotalL')"]

[MeasureDiskSpaceFreeL]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeL], 5, '1k', 'textDiskSpaceFreeL')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceFreeL], 5, '1k', 'textDiskSpaceFreeL')"]

[MeasureDiskSpaceUsedL]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
InvertMeasure=1
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedL], 5, '1k', 'textDiskSpaceUsedL')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskSpaceUsedL], 5, '1k', 'textDiskSpaceUsedL')"]

[MeasureDiskTypeL]
Measure=FreeDiskSpace
Drive=#d10#
IgnoreRemovable=0
Type=1

[CalcDiskExistsL]
Measure=Calc
Formula=(MeasureDiskSpaceTotalL > 0 && ((MeasureDiskTypeL = 3) || (MeasureDiskTypeL = 4)) && (#HideDiskL# = 0)) ? 1 : 0
; set disk not found flag
IfCondition=(CalcDiskExistsL = 1)
IfTrueAction= [!SetVariable DiskNotFoundL 0][!SetOption MeasureDiskPercentFullL Disabled 0][!SetOption MeasureDiskIdleTimeL Disabled 0][!SetOption MeasureDiskTimeL Disabled 0][!SetOption MeasureDiskReadL Disabled 0][!SetOption MeasureDiskWriteL Disabled 0][!SetOption MeasureDiskReadWriteL Disabled 0]
IfFalseAction=[!SetVariable DiskNotFoundL 1][!SetOption MeasureDiskPercentFullL Disabled 1][!SetOption MeasureDiskIdleTimeL Disabled 1][!SetOption MeasureDiskTimeL Disabled 1][!SetOption MeasureDiskReadL Disabled 1][!SetOption MeasureDiskWriteL Disabled 1][!SetOption MeasureDiskReadWriteL Disabled 1]

[MeasureDiskPercentFullL]
Measure=Calc
Formula=MeasureDiskSpaceUsedL / MeasureDiskSpaceTotalL
IfCondition=(MeasureDiskPercentFullL >= #DiskThreshholdFull#)
IfTrueAction=[!SetOption BarMeterDiskL BarColor #ColorBarFull#]
IfCondition2=(MeasureDiskPercentFullL >= #DiskThreshholdWarn#) && (MeasureDiskPercentFullL < #DiskThreshholdFull#)
IfTrueAction2=[!SetOption BarMeterDiskL BarColor #ColorBarWarn#]
IfCondition3=(MeasureDiskPercentFullL < #DiskThreshholdWarn#)
IfTrueAction3=[!SetOption BarMeterDiskL BarColor #ColorBarOK#]

[MeasureDiskIdleTimeL]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="#d10#"

[MeasureDiskTimeL]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeL / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadL]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="#d10#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadL], 4, '1k', 'textDiskReadL')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskReadL], 4, '1k', 'textDiskReadL')"]

[MeasureDiskWriteL]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="#d10#"
IfCondition=1
IfTrueAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteL], 4, '1k', 'textDiskWriteL')"]
OnChangeAction=[!CommandMeasure FormatScript "FormatNumber([MeasureDiskWriteL], 4, '1k', 'textDiskWriteL')"]

[MeasureDiskReadWriteL]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Bytes/sec"
PerfMonInstance="#d10#"

; ## DISK (TOTAL) ##
[MeasureDiskIdleTimeAll]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="% Idle Time"
PerfMonInstance="_Total"

[MeasureDiskTimeAll]
Measure=Calc
Formula=(100.0 - (MeasureDiskIdleTimeAll / 100000))
MaxValue=100.0
MinValue=0.0

[MeasureDiskReadAll]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Read Bytes/sec"
PerfMonInstance="_Total"

[MeasureDiskWriteAll]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter="Disk Write Bytes/sec"
PerfMonInstance="_Total"

[CalcDiskCount]
Measure=Calc
Formula=(CalcDiskExistsC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH + CalcDiskExistsI + CalcDiskExistsJ + CalcDiskExistsK + CalcDiskExistsL)

; ## CALC DRIVE NUMBERS / ASSIGN DISK COLORS ##
[CalcDiskNumberC]
Measure=Calc
Formula=0
IfCondition=(CalcDiskNumberC = 0) && (CalcDiskExistsC = 1)
IfTrueAction=[!SetVariable colorDiskC #colorDisk1#]

[CalcDiskNumberD]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD)
IfCondition=(CalcDiskNumberD = 0) && (CalcDiskExistsD = 1)
IfTrueAction=[!SetVariable colorDiskD #colorDisk1#]
IfCondition2=(CalcDiskNumberD = 1) && (CalcDiskExistsD = 1)
IfTrueAction2=[!SetVariable colorDiskD #colorDisk2#]

[CalcDiskNumberE]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE)
IfCondition=(CalcDiskNumberE = 0) && (CalcDiskExistsE = 1)
IfTrueAction=[!SetVariable colorDiskE #colorDisk1#]
IfCondition2=(CalcDiskNumberE = 1) && (CalcDiskExistsE = 1)
IfTrueAction2=[!SetVariable colorDiskE #colorDisk2#]
IfCondition3=(CalcDiskNumberE = 2) && (CalcDiskExistsE = 1)
IfTrueAction3=[!SetVariable colorDiskE #colorDisk3#]

[CalcDiskNumberF]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF)
IfCondition=(CalcDiskNumberF = 0) && (CalcDiskExistsF = 1)
IfTrueAction=[!SetVariable colorDiskF #colorDisk1#]
IfCondition2=(CalcDiskNumberF = 1) && (CalcDiskExistsF = 1)
IfTrueAction2=[!SetVariable colorDiskF #colorDisk2#]
IfCondition3=(CalcDiskNumberF = 2) && (CalcDiskExistsF = 1)
IfTrueAction3=[!SetVariable colorDiskF #colorDisk3#]
IfCondition4=(CalcDiskNumberF = 3) && (CalcDiskExistsF = 1)
IfTrueAction4=[!SetVariable colorDiskF #colorDisk4#]

[CalcDiskNumberG]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG)
IfCondition=(CalcDiskNumberG = 0) && (CalcDiskExistsG = 1)
IfTrueAction=[!SetVariable colorDiskG #colorDisk1#]
IfCondition2=(CalcDiskNumberG = 1) && (CalcDiskExistsG = 1)
IfTrueAction2=[!SetVariable colorDiskG #colorDisk2#]
IfCondition3=(CalcDiskNumberG = 2) && (CalcDiskExistsG = 1)
IfTrueAction3=[!SetVariable colorDiskG #colorDisk3#]
IfCondition4=(CalcDiskNumberG = 3) && (CalcDiskExistsG = 1)
IfTrueAction4=[!SetVariable colorDiskG #colorDisk4#]
IfCondition5=(CalcDiskNumberG = 4) && (CalcDiskExistsG = 1)
IfTrueAction5=[!SetVariable colorDiskG #colorDisk5#]

[CalcDiskNumberH]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH)
IfCondition=(CalcDiskNumberH = 0) && (CalcDiskExistsH = 1)
IfTrueAction=[!SetVariable colorDiskH #colorDisk1#]
IfCondition2=(CalcDiskNumberH = 1) && (CalcDiskExistsH = 1)
IfTrueAction2=[!SetVariable colorDiskH #colorDisk2#]
IfCondition3=(CalcDiskNumberH = 2) && (CalcDiskExistsH = 1)
IfTrueAction3=[!SetVariable colorDiskH #colorDisk3#]
IfCondition4=(CalcDiskNumberH = 3) && (CalcDiskExistsH = 1)
IfTrueAction4=[!SetVariable colorDiskH #colorDisk4#]
IfCondition5=(CalcDiskNumberH = 4) && (CalcDiskExistsH = 1)
IfTrueAction5=[!SetVariable colorDiskH #colorDisk5#]
IfCondition6=(CalcDiskNumberH = 5) && (CalcDiskExistsH = 1)
IfTrueAction6=[!SetVariable colorDiskH #colorDisk6#]

[CalcDiskNumberI]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH + CalcDiskExistsI)
IfCondition=(CalcDiskNumberI = 0) && (CalcDiskExistsI = 1)
IfTrueAction=[!SetVariable colorDiskI #colorDisk1#]
IfCondition2=(CalcDiskNumberI = 1) && (CalcDiskExistsI = 1)
IfTrueAction2=[!SetVariable colorDiskI #colorDisk2#]
IfCondition3=(CalcDiskNumberI = 2) && (CalcDiskExistsI = 1)
IfTrueAction3=[!SetVariable colorDiskI #colorDisk3#]
IfCondition4=(CalcDiskNumberI = 3) && (CalcDiskExistsI = 1)
IfTrueAction4=[!SetVariable colorDiskI #colorDisk4#]
IfCondition5=(CalcDiskNumberI = 4) && (CalcDiskExistsI = 1)
IfTrueAction5=[!SetVariable colorDiskI #colorDisk5#]
IfCondition6=(CalcDiskNumberI = 5) && (CalcDiskExistsI = 1)
IfTrueAction6=[!SetVariable colorDiskI #colorDisk6#]
IfCondition7=(CalcDiskNumberI = 6) && (CalcDiskExistsI = 1)
IfTrueAction7=[!SetVariable colorDiskI #colorDisk7#]

[CalcDiskNumberJ]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH + CalcDiskExistsI + CalcDiskExistsJ)
IfCondition=(CalcDiskNumberJ = 0) && (CalcDiskExistsJ = 1)
IfTrueAction=[!SetVariable colorDiskJ #colorDisk1#]
IfCondition2=(CalcDiskNumberJ = 1) && (CalcDiskExistsJ = 1)
IfTrueAction2=[!SetVariable colorDiskJ #colorDisk2#]
IfCondition3=(CalcDiskNumberJ = 2) && (CalcDiskExistsJ = 1)
IfTrueAction3=[!SetVariable colorDiskJ #colorDisk3#]
IfCondition4=(CalcDiskNumberJ = 3) && (CalcDiskExistsJ = 1)
IfTrueAction4=[!SetVariable colorDiskJ #colorDisk4#]
IfCondition5=(CalcDiskNumberJ = 4) && (CalcDiskExistsJ = 1)
IfTrueAction5=[!SetVariable colorDiskJ #colorDisk5#]
IfCondition6=(CalcDiskNumberJ = 5) && (CalcDiskExistsJ = 1)
IfTrueAction6=[!SetVariable colorDiskJ #colorDisk6#]
IfCondition7=(CalcDiskNumberJ = 6) && (CalcDiskExistsJ = 1)
IfTrueAction7=[!SetVariable colorDiskJ #colorDisk7#]
IfCondition8=(CalcDiskNumberJ = 7) && (CalcDiskExistsJ = 1)
IfTrueAction8=[!SetVariable colorDiskJ #colorDisk8#]

[CalcDiskNumberK]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH + CalcDiskExistsI + CalcDiskExistsJ + CalcDiskExistsK)
IfCondition=(CalcDiskNumberK = 0) && (CalcDiskExistsK = 1)
IfTrueAction=[!SetVariable colorDiskK #colorDisk1#]
IfCondition2=(CalcDiskNumberK = 1) && (CalcDiskExistsK = 1)
IfTrueAction2=[!SetVariable colorDiskK #colorDisk2#]
IfCondition3=(CalcDiskNumberK = 2) && (CalcDiskExistsK = 1)
IfTrueAction3=[!SetVariable colorDiskK #colorDisk3#]
IfCondition4=(CalcDiskNumberK = 3) && (CalcDiskExistsK = 1)
IfTrueAction4=[!SetVariable colorDiskK #colorDisk4#]
IfCondition5=(CalcDiskNumberK = 4) && (CalcDiskExistsK = 1)
IfTrueAction5=[!SetVariable colorDiskK #colorDisk5#]
IfCondition6=(CalcDiskNumberK = 5) && (CalcDiskExistsK = 1)
IfTrueAction6=[!SetVariable colorDiskK #colorDisk6#]
IfCondition7=(CalcDiskNumberK = 6) && (CalcDiskExistsK = 1)
IfTrueAction7=[!SetVariable colorDiskK #colorDisk7#]
IfCondition8=(CalcDiskNumberK = 7) && (CalcDiskExistsK = 1)
IfTrueAction8=[!SetVariable colorDiskK #colorDisk8#]
IfCondition9=(CalcDiskNumberK = 8) && (CalcDiskExistsK = 1)
IfTrueAction9=[!SetVariable colorDiskK #colorDisk9#]

[CalcDiskNumberL]
Measure=Calc
Formula=(CalcDiskNumberC + CalcDiskExistsD + CalcDiskExistsE + CalcDiskExistsF + CalcDiskExistsG + CalcDiskExistsH + CalcDiskExistsI + CalcDiskExistsJ + CalcDiskExistsK + CalcDiskExistsL)
IfCondition=(CalcDiskNumberL = 0) && (CalcDiskExistsL = 1)
IfTrueAction=[!SetVariable colorDiskL #colorDisk1#]
IfCondition2=(CalcDiskNumberL = 1) && (CalcDiskExistsL = 1)
IfTrueAction2=[!SetVariable colorDiskL #colorDisk2#]
IfCondition3=(CalcDiskNumberL = 2) && (CalcDiskExistsL = 1)
IfTrueAction3=[!SetVariable colorDiskL #colorDisk3#]
IfCondition4=(CalcDiskNumberL = 3) && (CalcDiskExistsL = 1)
IfTrueAction4=[!SetVariable colorDiskL #colorDisk4#]
IfCondition5=(CalcDiskNumberL = 4) && (CalcDiskExistsL = 1)
IfTrueAction5=[!SetVariable colorDiskL #colorDisk5#]
IfCondition6=(CalcDiskNumberL = 5) && (CalcDiskExistsL = 1)
IfTrueAction6=[!SetVariable colorDiskL #colorDisk6#]
IfCondition7=(CalcDiskNumberL = 6) && (CalcDiskExistsL = 1)
IfTrueAction7=[!SetVariable colorDiskL #colorDisk7#]
IfCondition8=(CalcDiskNumberL = 7) && (CalcDiskExistsL = 1)
IfTrueAction8=[!SetVariable colorDiskL #colorDisk8#]
IfCondition9=(CalcDiskNumberL = 8) && (CalcDiskExistsL = 1)
IfTrueAction9=[!SetVariable colorDiskL #colorDisk9#]
IfCondition10=(CalcDiskNumberL = 9) && (CalcDiskExistsL = 1)
IfTrueAction10=[!SetVariable colorDiskL #colorDisk10#]