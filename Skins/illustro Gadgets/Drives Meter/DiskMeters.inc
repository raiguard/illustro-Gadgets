; ## DISK C ##
[DriveLabelC]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskLabelC
Y=(#bodyStartY# + ([CalcDiskNumberC] * #diskChunkY#))
W=150
H=14
ClipString=1
Text="C: %1"
Group=GroupDiskC
DynamicVariables=1
Hidden=#diskNotFoundC#

[DriveUsagePercentC]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskTimeC
Y=0r
Percentual=1
Text="%1%"
Group=GroupDiskC
Hidden=#diskNotFoundC#
DynamicVariables=1

[DriveReadArrowC]
Meter=Image
ImageName=#@#Images/ArrowUp.png
ImageAlpha=#gAlphaDiskC#
ImageTint=#gColorDiskC#
X=#generalXMarginLeft#
Y=#rowYOffset#r
W=13
H=13
Group=GroupDiskC
Hidden=#diskNotFoundC#
DynamicVariables=1

[DriveReadTextC]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadC
X=15r
Y=1r
Text="#textDiskReadC#B/s"
Group=GroupDiskC
Hidden=#diskNotFoundC#
DynamicVariables=1

[DriveWriteArrowC]
Meter=Image
ImageName=#@#Images/ArrowDown.png
ImageAlpha=#gAlphaDiskC#
ImageTint=#gColorDiskC#
X=(#bgWidth# - 115)r
Y=0r
W=13
H=13
Group=GroupDiskC
Hidden=#diskNotFoundC#
DynamicVariables=1

[DriveWriteTextC]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadC
X=15r
Y=0r
Text="#textDiskWriteC#B/s"
Group=GroupDiskC
Hidden=#diskNotFoundC#
DynamicVariables=1

[DriveStorageLabelC]
Meter=String
MeterStyle=StyleText
Text="Storage:"
Group=GroupDiskC
Hidden=#diskNotFoundC#
DynamicVariables=1

[DriveStorageFractionC]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
StringStyle=Normal
X=([DriveStorageLabelC:W] + 1)r
Y=0r
Text="#textDiskSpaceUsedC#B / #textDiskSpaceTotalC#B"
Group=GroupDiskC
Hidden=#diskNotFoundC#
DynamicVariables=1

[DriveStoragePercentC]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskPercentFullC
Percentual=1
Y=0r
Text="%1%"
Hidden=#diskNotFoundC#
DynamicVariables=1

[DriveStorageBarC]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPercentFullC
BarColor=#colorDiskC#
Percentual=1
Group=GroupDiskC
Hidden=#diskNotFoundC#
DynamicVariables=1

; ## DISK D ##
[DriveLabelD]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskLabelD
Y=(#bodyStartY# + ([CalcDiskNumberD] * #diskChunkY#))
W=150
H=14
ClipString=1
Text="D: %1"
Group=GroupDiskD
DynamicVariables=1
Hidden=#diskNotFoundD#

[DriveUsagePercentD]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskTimeD
Y=0r
Percentual=1
Text="%1%"
Group=GroupDiskD
Hidden=#diskNotFoundD#
DynamicVariables=1

[DriveReadArrowD]
Meter=Image
ImageName=#@#Images/ArrowUp.png
ImageAlpha=#gAlphaDiskD#
ImageTint=#gColorDiskD#
X=9
Y=#rowYOffset#r
W=13
H=13
Group=GroupDiskD
Hidden=#diskNotFoundD#
DynamicVariables=1

[DriveReadTextD]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadD
X=15r
Y=1r
Text="#textDiskReadD#B/s"
Group=GroupDiskD
Hidden=#diskNotFoundD#
DynamicVariables=1

[DriveWriteArrowD]
Meter=Image
ImageName=#@#Images/ArrowDown.png
ImageAlpha=#gAlphaDiskD#
ImageTint=#gColorDiskD#
X=(#bgWidth# - 115)r
Y=0r
W=13
H=13
Group=GroupDiskD
Hidden=#diskNotFoundD#
DynamicVariables=1

[DriveWriteTextD]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadD
X=15r
Y=0r
Text="#textDiskWriteD#B/s"
Group=GroupDiskD
Hidden=#diskNotFoundD#
DynamicVariables=1

[DriveStorageLabelD]
Meter=String
MeterStyle=StyleText
Text="Storage:"
Group=GroupDiskD
Hidden=#diskNotFoundD#
DynamicVariables=1

[DriveStorageFractionD]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
StringStyle=Normal
X=([DriveStorageLabelD:W] + 1)r
Y=0r
Text="#textDiskSpaceUsedD#B / #textDiskSpaceTotalD#B"
Group=GroupDiskD
Hidden=#diskNotFoundD#
DynamicVariables=1

[DriveStoragePercentD]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskPercentFullD
Percentual=1
Y=0r
Text="%1%"
Hidden=#diskNotFoundD#
DynamicVariables=1

[DriveStorageBarD]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPercentFullD
BarColor=#colorDiskD#
Percentual=1
Group=GroupDiskD
Hidden=#diskNotFoundD#
DynamicVariables=1

; ## DISK E ##
[DriveLabelE]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskLabelE
Y=(#bodyStartY# + ([CalcDiskNumberE] * #diskChunkY#))
W=150
H=14
ClipString=1
Text="E: %1"
Group=GroupDiskE
Hidden=#diskNotFoundE#
DynamicVariables=1

[DriveUsagePercentE]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskTimeE
Y=0r
Percentual=1
Text="%1%"
Group=GroupDiskE
Hidden=#diskNotFoundE#
DynamicVariables=1

[DriveReadArrowE]
Meter=Image
ImageName=#@#Images/ArrowUp.png
ImageAlpha=#gAlphaDiskE#
ImageTint=#gColorDiskE#
X=9
Y=#rowYOffset#r
W=13
H=13
Group=GroupDiskE
Hidden=#diskNotFoundE#
DynamicVariables=1

[DriveReadTextE]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadE
X=15r
Y=1r
Text="#textDiskReadE#B/s"
Group=GroupDiskE
Hidden=#diskNotFoundE#
DynamicVariables=1

[DriveWriteArrowE]
Meter=Image
ImageName=#@#Images/ArrowDown.png
ImageAlpha=#gAlphaDiskE#
ImageTint=#gColorDiskE#
X=(#bgWidth# - 115)r
Y=0r
W=13
H=13
Group=GroupDiskE
Hidden=#diskNotFoundE#
DynamicVariables=1

[DriveWriteTextE]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadE
X=15r
Y=0r
Text="#textDiskWriteE#B/s"
Group=GroupDiskE
Hidden=#diskNotFoundE#
DynamicVariables=1

[DriveStorageLabelE]
Meter=String
MeterStyle=StyleText
Text="Storage:"
Group=GroupDiskE
Hidden=#diskNotFoundE#
DynamicVariables=1

[DriveStorageFractionE]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
StringStyle=Normal
X=([DriveStorageLabelE:W] + 1)r
Y=0r
Text="#textDiskSpaceUsedE#B / #textDiskSpaceTotalE#B"
Group=GroupDiskE
Hidden=#diskNotFoundE#
DynamicVariables=1

[DriveStoragePercentE]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskPercentFullE
Percentual=1
Y=0r
Text="%1%"
Group=GroupDiskE
Hidden=#diskNotFoundE#
DynamicVariables=1

[DriveStorageBarE]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPercentFullE
BarColor=#colorDiskE#
Percentual=1
Group=GroupDiskE
Hidden=#diskNotFoundE#
DynamicVariables=1

; ## DISK F ##
[DriveLabelF]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskLabelF
Y=(#bodyStartY# + ([CalcDiskNumberF] * #diskChunkY#))
W=150
H=14
ClipString=1
Text="F: %1"
Group=GroupDiskF
Hidden=#diskNotFoundF#
DynamicVariables=1

[DriveUsagePercentF]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskTimeF
Y=0r
Percentual=1
Text="%1%"
Group=GroupDiskF
Hidden=#diskNotFoundF#
DynamicVariables=1

[DriveReadArrowF]
Meter=Image
ImageName=#@#Images/ArrowUp.png
ImageAlpha=#gAlphaDiskF#
ImageTint=#gColorDiskF#
X=9
Y=#rowYOffset#r
W=13
H=13
Group=GroupDiskF
Hidden=#diskNotFoundF#
DynamicVariables=1

[DriveReadTextF]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadF
X=15r
Y=1r
Text="#textDiskReadF#B/s"
Group=GroupDiskF
Hidden=#diskNotFoundF#
DynamicVariables=1

[DriveWriteArrowF]
Meter=Image
ImageName=#@#Images/ArrowDown.png
ImageAlpha=#gAlphaDiskF#
ImageTint=#gColorDiskF#
X=(#bgWidth# - 115)r
Y=0r
W=13
H=13
Group=GroupDiskF
Hidden=#diskNotFoundF#
DynamicVariables=1

[DriveWriteTextF]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadF
X=15r
Y=0r
Text="#textDiskWriteF#B/s"
Group=GroupDiskF
Hidden=#diskNotFoundF#
DynamicVariables=1

[DriveStorageLabelF]
Meter=String
MeterStyle=StyleText
Text="Storage:"
Group=GroupDiskF
Hidden=#diskNotFoundF#
DynamicVariables=1

[DriveStorageFractionF]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
StringStyle=Normal
X=([DriveStorageLabelF:W] + 1)r
Y=0r
Text="#textDiskSpaceUsedF#B / #textDiskSpaceTotalF#B"
Group=GroupDiskF
Hidden=#diskNotFoundF#
DynamicVariables=1

[DriveStoragePercentF]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskPercentFullF
Percentual=1
Y=0r
Text="%1%"
Group=GroupDiskF
Hidden=#diskNotFoundF#
DynamicVariables=1

[DriveStorageBarF]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPercentFullF
BarColor=#colorDiskF#
Percentual=1
Group=GroupDiskF
Hidden=#diskNotFoundF#
DynamicVariables=1

; ## DISK G ##
[DriveLabelG]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskLabelG
Y=(#bodyStartY# + ([CalcDiskNumberG] * #diskChunkY#))
W=150
H=14
ClipString=1
Text="G: %1"
Group=GroupDiskG
Hidden=#diskNotFoundG#
DynamicVariables=1

[DriveUsagePercentG]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskTimeG
Y=0r
Percentual=1
Text="%1%"
Group=GroupDiskG
Hidden=#diskNotFoundG#
DynamicVariables=1

[DriveReadArrowG]
Meter=Image
ImageName=#@#Images/ArrowUp.png
ImageAlpha=#gAlphaDiskG#
ImageTint=#gColorDiskG#
X=9
Y=#rowYOffset#r
W=13
H=13
Group=GroupDiskG
Hidden=#diskNotFoundG#
DynamicVariables=1

[DriveReadTextG]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadG
X=15r
Y=1r
Text="#textDiskReadG#B/s"
Group=GroupDiskG
Hidden=#diskNotFoundG#
DynamicVariables=1

[DriveWriteArrowG]
Meter=Image
ImageName=#@#Images/ArrowDown.png
ImageAlpha=#gAlphaDiskG#
ImageTint=#gColorDiskG#
X=(#bgWidth# - 115)r
Y=0r
W=13
H=13
Group=GroupDiskG
Hidden=#diskNotFoundG#
DynamicVariables=1

[DriveWriteTextG]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadG
X=15r
Y=0r
Text="#textDiskWriteG#B/s"
Group=GroupDiskG
Hidden=#diskNotFoundG#
DynamicVariables=1

[DriveStorageLabelG]
Meter=String
MeterStyle=StyleText
Text="Storage:"
Group=GroupDiskG
Hidden=#diskNotFoundG#
DynamicVariables=1

[DriveStorageFractionG]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
StringStyle=Normal
X=([DriveStorageLabelG:W] + 1)r
Y=0r
Text="#textDiskSpaceUsedG#B / #textDiskSpaceTotalG#B"
Group=GroupDiskG
Hidden=#diskNotFoundG#
DynamicVariables=1

[DriveStoragePercentG]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskPercentFullG
Percentual=1
Y=0r
Text="%1%"
Group=GroupDiskG
Hidden=#diskNotFoundG#
DynamicVariables=1

[DriveStorageBarG]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPercentFullG
BarColor=#colorDiskG#
Percentual=1
Group=GroupDiskG
Hidden=#diskNotFoundG#
DynamicVariables=1

; ## DISK H ##
[DriveLabelH]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskLabelH
Y=(#bodyStartY# + ([CalcDiskNumberH] * #diskChunkY#))
W=150
H=14
ClipString=1
Text="H: %1"
Group=GroupDiskH
Hidden=#diskNotFoundH#
DynamicVariables=1

[DriveUsagePercentH]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskTimeH
Y=0r
Percentual=1
Text="%1%"
Group=GroupDiskH
Hidden=#diskNotFoundH#
DynamicVariables=1

[DriveReadArrowH]
Meter=Image
ImageName=#@#Images/ArrowUp.png
ImageAlpha=#gAlphaDiskH#
ImageTint=#gColorDiskH#
X=9
Y=#rowYOffset#r
W=13
H=13
Group=GroupDiskH
Hidden=#diskNotFoundH#
DynamicVariables=1

[DriveReadTextH]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadH
X=15r
Y=1r
Text="#textDiskReadH#B/s"
Group=GroupDiskH
Hidden=#diskNotFoundH#
DynamicVariables=1

[DriveWriteArrowH]
Meter=Image
ImageName=#@#Images/ArrowDown.png
ImageAlpha=#gAlphaDiskH#
ImageTint=#gColorDiskH#
X=(#bgWidth# - 115)r
Y=0r
W=13
H=13
Group=GroupDiskH
Hidden=#diskNotFoundH#
DynamicVariables=1

[DriveWriteTextH]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadH
X=15r
Y=0r
Text="#textDiskWriteH#B/s"
Group=GroupDiskH
Hidden=#diskNotFoundH#
DynamicVariables=1

[DriveStorageLabelH]
Meter=String
MeterStyle=StyleText
Text="Storage:"
Group=GroupDiskH
Hidden=#diskNotFoundH#
DynamicVariables=1

[DriveStorageFractionH]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
StringStyle=Normal
X=([DriveStorageLabelH:W] + 1)r
Y=0r
Text="#textDiskSpaceUsedH#B / #textDiskSpaceTotalH#B"
Group=GroupDiskH
Hidden=#diskNotFoundH#
DynamicVariables=1

[DriveStoragePercentH]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskPercentFullH
Percentual=1
Y=0r
Text="%1%"
Group=GroupDiskH
Hidden=#diskNotFoundH#
DynamicVariables=1

[DriveStorageBarH]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPercentFullH
BarColor=#colorDiskH#
Percentual=1
Group=GroupDiskH
Hidden=#diskNotFoundH#
DynamicVariables=1

; ## DISK I ##
[DriveLabelI]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskLabelI
Y=(#bodyStartY# + ([CalcDiskNumberI] * #diskChunkY#))
W=150
H=14
ClipString=1
Text="I: %1"
Group=GroupDiskI
Hidden=#diskNotFoundI#
DynamicVariables=1

[DriveUsagePercentI]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskTimeI
Y=0r
Percentual=1
Text="%1%"
Group=GroupDiskI
Hidden=#diskNotFoundI#
DynamicVariables=1

[DriveReadArrowI]
Meter=Image
ImageName=#@#Images/ArrowUp.png
ImageAlpha=#gAlphaDiskI#
ImageTint=#gColorDiskI#
X=9
Y=#rowYOffset#r
W=13
H=13
Group=GroupDiskI
Hidden=#diskNotFoundI#
DynamicVariables=1

[DriveReadTextI]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadI
X=15r
Y=1r
Text="#textDiskReadI#B/s"
Group=GroupDiskI
Hidden=#diskNotFoundI#
DynamicVariables=1

[DriveWriteArrowI]
Meter=Image
ImageName=#@#Images/ArrowDown.png
ImageAlpha=#gAlphaDiskI#
ImageTint=#gColorDiskI#
X=(#bgWidth# - 115)r
Y=0r
W=13
H=13
Group=GroupDiskI
Hidden=#diskNotFoundI#
DynamicVariables=1

[DriveWriteTextI]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadI
X=15r
Y=0r
Text="#textDiskWriteI#B/s"
Group=GroupDiskI
Hidden=#diskNotFoundI#
DynamicVariables=1

[DriveStorageLabelI]
Meter=String
MeterStyle=StyleText
Text="Storage:"
Group=GroupDiskI
Hidden=#diskNotFoundI#
DynamicVariables=1

[DriveStorageFractionI]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
StringStyle=Normal
X=([DriveStorageLabelI:W] + 1)r
Y=0r
Text="#textDiskSpaceUsedI#B / #textDiskSpaceTotalI#B"
Group=GroupDiskI
Hidden=#diskNotFoundI#
DynamicVariables=1

[DriveStoragePercentI]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskPercentFullI
Percentual=1
Y=0r
Text="%1%"
Group=GroupDiskI
Hidden=#diskNotFoundI#
DynamicVariables=1

[DriveStorageBarI]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPercentFullI
BarColor=#colorDiskI#
Percentual=1
Group=GroupDiskI
Hidden=#diskNotFoundI#
DynamicVariables=1

; ## DISK J ##
[DriveLabelJ]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskLabelJ
Y=(#bodyStartY# + ([CalcDiskNumberJ] * #diskChunkY#))
W=150
H=14
ClipString=1
Text="J: %1"
Group=GroupDiskJ
Hidden=#diskNotFoundJ#
DynamicVariables=1

[DriveUsagePercentJ]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskTimeJ
Y=0r
Percentual=1
Text="%1%"
Group=GroupDiskJ
Hidden=#diskNotFoundJ#
DynamicVariables=1

[DriveReadArrowJ]
Meter=Image
ImageName=#@#Images/ArrowUp.png
ImageAlpha=#gAlphaDiskJ#
ImageTint=#gColorDiskJ#
X=9
Y=#rowYOffset#r
W=13
H=13
Group=GroupDiskJ
Hidden=#diskNotFoundJ#
DynamicVariables=1

[DriveReadTextJ]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadJ
X=15r
Y=1r
Text="#textDiskReadJ#B/s"
Group=GroupDiskJ
Hidden=#diskNotFoundJ#
DynamicVariables=1

[DriveWriteArrowJ]
Meter=Image
ImageName=#@#Images/ArrowDown.png
ImageAlpha=#gAlphaDiskJ#
ImageTint=#gColorDiskJ#
X=(#bgWidth# - 115)r
Y=0r
W=13
H=13
Group=GroupDiskJ
Hidden=#diskNotFoundJ#
DynamicVariables=1

[DriveWriteTextJ]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadJ
X=15r
Y=0r
Text="#textDiskWriteJ#B/s"
Group=GroupDiskJ
Hidden=#diskNotFoundJ#
DynamicVariables=1

[DriveStorageLabelJ]
Meter=String
MeterStyle=StyleText
Text="Storage:"
Group=GroupDiskJ
Hidden=#diskNotFoundJ#
DynamicVariables=1

[DriveStorageFractionJ]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
StringStyle=Normal
X=([DriveStorageLabelJ:W] + 1)r
Y=0r
Text="#textDiskSpaceUsedJ#B / #textDiskSpaceTotalJ#B"
Group=GroupDiskJ
Hidden=#diskNotFoundJ#
DynamicVariables=1

[DriveStoragePercentJ]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskPercentFullJ
Percentual=1
Y=0r
Text="%1%"
Group=GroupDiskJ
Hidden=#diskNotFoundJ#
DynamicVariables=1

[DriveStorageBarJ]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPercentFullJ
BarColor=#colorDiskJ#
Percentual=1
Group=GroupDiskJ
Hidden=#diskNotFoundJ#
DynamicVariables=1

; ## DISK K ##
[DriveLabelK]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskLabelK
Y=(#bodyStartY# + ([CalcDiskNumberK] * #diskChunkY#))
W=150
H=14
ClipString=1
Text="K: %1"
Group=GroupDiskK
Hidden=#diskNotFoundK#
DynamicVariables=1

[DriveUsagePercentK]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskTimeK
Y=0r
Percentual=1
Text="%1%"
Group=GroupDiskK
Hidden=#diskNotFoundK#
DynamicVariables=1

[DriveReadArrowK]
Meter=Image
ImageName=#@#Images/ArrowUp.png
ImageAlpha=#gAlphaDiskK#
ImageTint=#gColorDiskK#
X=9
Y=#rowYOffset#r
W=13
H=13
Group=GroupDiskK
Hidden=#diskNotFoundK#
DynamicVariables=1

[DriveReadTextK]
Meter=String
MeterStyle=StyleText
X=15r
Y=1r
Text="#textDiskReadK#B/s"
Group=GroupDiskK
Hidden=#diskNotFoundK#
DynamicVariables=1

[DriveWriteArrowK]
Meter=Image
ImageName=#@#Images/ArrowDown.png
ImageAlpha=#gAlphaDiskK#
ImageTint=#gColorDiskK#
X=(#bgWidth# - 115)r
Y=0r
W=13
H=13
Group=GroupDiskK
Hidden=#diskNotFoundK#
DynamicVariables=1

[DriveWriteTextK]
Meter=String
MeterStyle=StyleText
X=15r
Y=0r
Text="#textDiskWriteK#B/s"
Group=GroupDiskK
Hidden=#diskNotFoundK#
DynamicVariables=1

[DriveStorageLabelK]
Meter=String
MeterStyle=StyleText
Text="Storage:"
Group=GroupDiskK
Hidden=#diskNotFoundK#
DynamicVariables=1

[DriveStorageFractionK]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
StringStyle=Normal
X=([DriveStorageLabelK:W] + 1)r
Y=0r
Text="#textDiskSpaceUsedK#B / #textDiskSpaceTotalK#B"
Group=GroupDiskK
Hidden=#diskNotFoundK#
DynamicVariables=1

[DriveStoragePercentK]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskPercentFullK
Percentual=1
Y=0r
Text="%1%"
Group=GroupDiskK
Hidden=#diskNotFoundK#
DynamicVariables=1

[DriveStorageBarK]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPercentFullK
BarColor=#colorDiskK#
Percentual=1
Group=GroupDiskK
Hidden=#diskNotFoundK#
DynamicVariables=1

; ## DISK L ##
[DriveLabelL]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskLabelL
Y=(#bodyStartY# + ([CalcDiskNumberL] * #diskChunkY#))
W=150
H=14
ClipString=1
Text="L: %1"
Group=GroupDiskL
Hidden=#diskNotFoundL#
DynamicVariables=1

[DriveUsagePercentL]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskTimeL
Y=0r
Percentual=1
Text="%1%"
Group=GroupDiskL
Hidden=#diskNotFoundL#
DynamicVariables=1

[DriveReadArrowL]
Meter=Image
ImageName=#@#Images/ArrowUp.png
ImageAlpha=#gAlphaDiskL#
ImageTint=#gColorDiskL#
X=9
Y=#rowYOffset#r
W=13
H=13
Group=GroupDiskL
Hidden=#diskNotFoundL#
DynamicVariables=1

[DriveReadTextL]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadL
X=15r
Y=1r
Text="#textDiskReadL#B/s"
Group=GroupDiskL
Hidden=#diskNotFoundL#
DynamicVariables=1

[DriveWriteArrowL]
Meter=Image
ImageName=#@#Images/ArrowDown.png
ImageAlpha=#gAlphaDiskL#
ImageTint=#gColorDiskL#
X=(#bgWidth# - 115)r
Y=0r
W=13
H=13
Group=GroupDiskL
Hidden=#diskNotFoundL#
DynamicVariables=1

[DriveWriteTextL]
Meter=String
MeterStyle=StyleText
MeasureName=MeasureDiskReadL
X=15r
Y=0r
Text="#textDiskWriteL#B/s"
Group=GroupDiskL
Hidden=#diskNotFoundL#
DynamicVariables=1

[DriveStorageLabelL]
Meter=String
MeterStyle=StyleText
Text="Storage:"
Group=GroupDiskL
Hidden=#diskNotFoundL#
DynamicVariables=1

[DriveStorageFractionL]
Meter=String
MeterStyle=StyleText
FontColor=#colorSecondary#
StringStyle=Normal
X=([DriveStorageLabelL:W] + 1)r
Y=0r
Text="#textDiskSpaceUsedL#B / #textDiskSpaceTotalL#B"
Group=GroupDiskL
Hidden=#diskNotFoundL#
DynamicVariables=1

[DriveStoragePercentL]
Meter=String
MeterStyle=StyleText | StyleTextRightJustification
MeasureName=MeasureDiskPercentFullL
Percentual=1
Y=0r
Text="%1%"
Group=GroupDiskL
Hidden=#diskNotFoundL#
DynamicVariables=1

[DriveStorageBarL]
Meter=Bar
MeterStyle=StyleBar
MeasureName=MeasureDiskPercentFullL
BarColor=#colorDiskL#
Percentual=1
Group=GroupDiskL
Hidden=#diskNotFoundL#
DynamicVariables=1