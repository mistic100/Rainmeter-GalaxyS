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
; FORECAST DISPLAY
; ----------------------------------

[MeterForecastIcon1]
Meter=Image
MeasureName=MeasureForecastIcon1
DynamicVariables=1
ImageName=#@#Images\Weather#WeatherTheme#\%1.png
X=320
Y=400
W=45
H=45
Hidden=(1- #Forecast#)

[MeterForecastIcon2]
Meter=Image
MeasureName=MeasureForecastIcon2
DynamicVariables=1
ImageName=#@#Images\Weather#WeatherTheme#\%1.png
X=12R
Y=0r
W=45
H=45
Hidden=(1- #Forecast#)

[MeterForecastIcon3]
Meter=Image
MeasureName=MeasureForecastIcon3
DynamicVariables=1
ImageName=#@#Images\Weather#WeatherTheme#\%1.png
X=12R
Y=0r
W=45
H=45
Hidden=(1- #Forecast#)

[MeterForecastTemp1]
Meter=String
MeasureName=MeasureForecastTemp1
Text="%1°C"
MeterStyle=MainTextStyle
StringAlign=Center
FontSize=16
X=(320 + 45/2)
Y=5R
W=45
Hidden=(1- #Forecast#)

[MeterForecastTemp2]
Meter=String
MeasureName=MeasureForecastTemp2
Text="%1°C"
MeterStyle=MainTextStyle
StringAlign=Center
FontSize=16
X=12R
Y=0r
W=45
Hidden=(1- #Forecast#)

[MeterForecastTemp3]
Meter=String
MeasureName=MeasureForecastTemp3
Text="%1°C"
MeterStyle=MainTextStyle
StringAlign=Center
FontSize=16
X=12R
Y=0r
W=45
Hidden=(1- #Forecast#)


; ----------------------------------
; TIME DISPLAY
; ----------------------------------

[ClockBackground]
Meter=Image
SolidColor=255,255,255
X=320
Y=405
W=160
H=75
LeftMouseUpAction=[!ShowMeterGroup "FullClock"][!Hide GalaxyS\VUMeter]
Hidden=#Forecast#

[MeterClock]
Meter=String
MeasureName=MeasureTime
MeterStyle=MainTextStyle
StringAlign=Center
FontSize=40
FontColor=0,0,0
X=400
Y=414
Hidden=#Forecast#

[FullClockBackground]
Meter=Image
SolidColor=0,0,0
X=0
Y=0
W=800
H=480
Group=FullClock
Hidden=1
LeftMouseUpAction=[!HideMeterGroup "FullClock"][!Show GalaxyS\VUMeter]

[FullMeterClock]
Meter=String
MeasureName=MeasureTimeFull
MeterStyle=MainTextStyle
StringAlign=Center
FontSize=140
X=400
Y=130
Group=FullClock
Hidden=1
