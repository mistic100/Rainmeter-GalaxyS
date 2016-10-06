[MeterBarRMS_L]
Meter=Bar
MeasureName=MeasureAudioRMS_L
BarColor=#VUMeterBarColor#
X=295
Y=405
W=20
H=75

[MeterBarRMS_R]
Meter=Bar
MeasureName=MeasureAudioRMS_R
MeterStyle=BarDimension
BarColor=#VUMeterBarColor#
X=170R
Y=0r
W=20
H=75

[MeterLineRMS_L]
Meter=Image
SolidColor=#VUMeterLineColor#
X=[MeterBarRMS_L:X]
Y=(480 - [MeasureAudioRMS_L] * [MeterBarRMS_L:H])
W=[MeterBarRMS_L:W]
H=1
DynamicVariables=1

[MeterLineRMS_R]
Meter=Image
SolidColor=#VUMeterLineColor#
X=[MeterBarRMS_R:X]
Y=(480 - [MeasureAudioRMS_R] * [MeterBarRMS_R:H])
W=[MeterBarRMS_R:W]
H=1
DynamicVariables=1