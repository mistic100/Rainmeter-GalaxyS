; ----------------------------------
; NETWORK DISPLAY
; ----------------------------------

; main line
[NetworkIcon]
Meter=Image
ImageName=#@#Images\Icons\network.png
MeterStyle=MainTextStyle
X=410
Y=10

[MeterNetworkIP]
Meter=String
MeasureName=MeasureIP
Text="%1"
MeterStyle=MainTextStyle
X=5R
Y=0r

[MeterNetworkPing]
Meter=String
MeasureName=MeasurePing
Text="%1 ms"
MeterStyle=MainTextStyle
X=790
Y=0r
StringAlign=Right

; download
[DownloadIcon]
Meter=Image
ImageName=#@#Images\Icons\download.png
X=410
Y=5R

[DownloadBarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | HorizontalBarBackgroundStyle
X=35r
Y=0r

[MeterDownloadBar]
Meter=Bar
MeasureName=MeasureDownload
MeterStyle=HorizontalBarDimension
BarColor=#DownloadBarColor#
X=0r
Y=0r

[MeterDownloadGraph]
Meter=Line
MeasureName=MeasureDownload
MeterStyle=HorizontalBarDimension
LineColor=#DownloadLineColor#
X=0r
Y=0r

[MeterDownloadValue]
Meter=String
MeasureName=MeasureDownload
Text="%1B/s"
MeterStyle=MainTextStyle
X=790
Y=5r
Autoscale=1
StringAlign=Right

; upload
[UploadIcon]
Meter=Image
ImageName=#@#Images\Icons\upload.png
X=410
Y=10R

[UploadBarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | HorizontalBarBackgroundStyle
X=35r
Y=0r

[MeterUploadBar]
Meter=Bar
MeasureName=MeasureUpload
MeterStyle=HorizontalBarDimension
BarColor=#UploadBarColor#
X=0r
Y=0r

[MeterUploadGraph]
Meter=Line
MeasureName=MeasureUpload
MeterStyle=HorizontalBarDimension
LineColor=#UploadLineColor#
X=0r
Y=0r

[MeterUploadValue]
Meter=String
MeasureName=MeasureUpload
Text="%1B/s"
MeterStyle=MainTextStyle
X=790
Y=5r
Autoscale=1
StringAlign=Right

[MeterDownloadTotal]
Meter=String
MeasureName=MeasureDownloadTotal
Text="%1B"
MeterStyle=MainTextStyle
X=545
Y=5R
Autoscale=1
StringAlign=Right

[MeterUploadTotal]
Meter=String
MeasureName=MeasureUploadTotal
Text="%1B"
MeterStyle=MainTextStyle
X=565
Y=0r
Autoscale=1


; ----------------------------------
; HDD DISPLAY
; ----------------------------------

; drive 1
[Drive1Label]
Meter=String
Text=#Drive1#
MeterStyle=MainTextStyle
X=410
Y=40R

[Drive1BarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | HorizontalBarBackgroundStyle
X=35r
Y=-5r

[MeterDrive1Bar]
Meter=Bar
MeasureName=MeasureDrive1Usage
MeterStyle=HorizontalBarDimension
BarColor=#HDDBarColor#
X=0r
Y=0r

[MeterDrive1Graph]
Meter=Line
MeasureName=MeasureDrive1Access
MeterStyle=HorizontalBarDimension
LineColor=#HDDLineColor#
X=0r
Y=0r

[MeterDrive1Value]
Meter=String
MeasureName=MeasureDrive1Free
Text="%1B"
MeterStyle=MainTextStyle
X=790
Y=5r
Autoscale=1
StringAlign=Right

; drive 2
[Drive2Label]
Meter=String
Text=#Drive2#
MeterStyle=MainTextStyle
X=410
Y=15R

[Drive2BarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | HorizontalBarBackgroundStyle
X=35r
Y=-5r

[MeterDrive2Bar]
Meter=Bar
MeasureName=MeasureDrive2Usage
MeterStyle=HorizontalBarDimension
BarColor=#HDDBarColor#
X=0r
Y=0r

[MeterDrive2Graph]
Meter=Line
MeasureName=MeasureDrive2Access
MeterStyle=HorizontalBarDimension
LineColor=#HDDLineColor#
X=0r
Y=0r

[MeterDrive2Value]
Meter=String
MeasureName=MeasureDrive2Free
Text="%1B"
MeterStyle=MainTextStyle
X=790
Y=5r
Autoscale=1
StringAlign=Right

; drive 3
[Drive3Label]
Meter=String
Text=#Drive3#
MeterStyle=MainTextStyle
X=410
Y=15R

[Drive3BarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | HorizontalBarBackgroundStyle
X=35r
Y=-5r

[MeterDrive3Bar]
Meter=Bar
MeasureName=MeasureDrive3Usage
MeterStyle=HorizontalBarDimension
BarColor=#HDDBarColor#
X=0r
Y=0r

[MeterDrive3Graph]
Meter=Line
MeasureName=MeasureDrive3Access
MeterStyle=HorizontalBarDimension
LineColor=#HDDLineColor#
X=0r
Y=0r

[MeterDrive3Value]
Meter=String
MeasureName=MeasureDrive3Free
Text="%1B"
MeterStyle=MainTextStyle
X=790
Y=5r
Autoscale=1
StringAlign=Right


; ----------------------------------
; WEATHER DISPLAY
; ----------------------------------

[MeterWeatherLocation]
Meter=String
MeasureName=MeasureWeatherCity
MeasureName2=MeasureWeatherCountry
Text="%1, %2"
MeterStyle=MainTextStyle
X=530
Y=350

[MeterWeatherImage]
Meter=Image
MeasureName=MeasureWeatherIcon
ImageName=#@#Images\Weather#WeatherTheme#\%1.png
X=0r
Y=0R
W=90
H=90

[MeterWeatherTemp]
Meter=String
MeasureName=MeasureWeatherTemp
Text="%1°C"
MeterStyle=MainTextStyle
FontSize=30
X=790
Y=350
StringAlign=Right

[MeterWeatherDesc]
Meter=String
MeasureName=MeasureWeatherDesc
Text="%1"
MeterStyle=MainTextStyle
X=0r
Y=0R
StringAlign=Right
ClipString=2
ClipStringW=145
ClipStringH=100


; ----------------------------------
; TIME DISPLAY
; ----------------------------------

[SPLogo]
Meter=Image
ImageName=#@#Images\sp.png
X=372
Y=340
W=56
H=56

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
