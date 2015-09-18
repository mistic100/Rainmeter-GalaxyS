; ----------------------------------
; VOLUME DISPLAY
; ----------------------------------

[VolumeBackground]
Meter=Image
SolidColor=#VolumeBarBackgroundColor#
W=160
H=1
X=320
Y=375

[Volume]
Meter=Bar
MeasureName=MeasureVolume
UpdateDivider=1
BarOrientation=Horizontal
BarColor=#VolumeBarColor#
W=160
H=5
X=0r
Y=-2r

[VolumeHandlePosition]
Measure=Calc
UpdateDivider=1
Formula=305 + MeasureVolume / 100 * 160

[VolumeHandle]
Meter=Image
UpdateDivider=1
DynamicVariables=1
ImageName=#@#Images\volume.png
X=[VolumeHandlePosition]
Y=-13r

[VolumeTextPosition]
Measure=Calc
UpdateDivider=1
Formula=320 + MeasureVolume / 100 * 160

[VolumeValue]
Meter=String
MeasureName=MeasureVolumeValue
UpdateDivider=1
DynamicVariables=1
Text="%1"
MeterStyle=MainTextStyle
StringAlign=Center
X=[VolumeTextPosition]
Y=-15r


; ----------------------------------
; TIME DISPLAY
; ----------------------------------

[TimeBackground]
Meter=Image
SolidColor=255,255,255
X=320
Y=405
W=160
H=75

[MeterTime]
Meter=String
MeasureName=MeasureTime
Text="%1"
MeterStyle=MainTextStyle
StringAlign=Center
FontSize=40
FontColor=0,0,0
X=400
Y=414

[MeterDate]
Meter=String
MeasureName=MeasureDate
MeterStyle=MainTextStyle
StringAlign=Center
ClipString=2
X=640
Y=435
W=300
H=30