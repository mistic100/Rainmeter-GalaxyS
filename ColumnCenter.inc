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
BarOrientation=Horizontal
BarColor=#VolumeBarColor#
W=160
H=5
X=0r
Y=-2r

[VolumeHandlePosition]
Measure=Calc
Formula=305 + MeasureVolume / 100 * 160

[VolumeHandle]
Meter=Image
ImageName=#@#Images\volume.png
X=[VolumeHandlePosition]
Y=-13r
DynamicVariables=1

[VolumeTextPosition]
Measure=Calc
Formula=320 + MeasureVolume / 100 * 160

[VolumeValue]
Meter=String
MeasureName=MeasureVolumeValue
Text="%1"
MeterStyle=MainTextStyle
StringAlign=Center
X=[VolumeTextPosition]
Y=-15r
DynamicVariables=1


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
FontSize=40
FontColor=0,0,0
X=400
Y=414
StringAlign=Center

[MeterDate]
Meter=String
MeasureName=MeasureDate
MeterStyle=MainTextStyle
X=640
Y=435
StringAlign=Center
ClipString=2
ClipStringW=300
ClipStringH=30