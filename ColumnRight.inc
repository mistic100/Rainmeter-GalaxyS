[ColumnRight]
Meter=String
X=400
Y=0
W=400
H=480
Text=" "


; ----------------------------------
; NETWORK DISPLAY
; ----------------------------------

; main line
[NetworkIcon]
Meter=Image
ImageName=#@#Images\iconNetwork.png
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
ImageName=#@#Images\iconDownload.png
X=410
Y=5R

[DownloadBarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | GraphBackgroundStyle
X=30r
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
ImageName=#@#Images\iconUpload.png
X=410
Y=10R

[UploadBarBackground]
Meter=Image
MeterStyle=HorizontalBarDimension | GraphBackgroundStyle
X=30r
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
MeterStyle=HorizontalBarDimension | GraphBackgroundStyle
X=30r
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
MeterStyle=HorizontalBarDimension | GraphBackgroundStyle
X=30r
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
MeterStyle=HorizontalBarDimension | GraphBackgroundStyle
X=30r
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

[WeatherIcon]
Meter=Image
ImageName=#@#Images\iconWeather.png
MeterStyle=MainTextStyle
X=410
Y=20R

[MeterWeatherLocation]
Meter=String
MeasureName=MeasureWeatherCity
MeasureName2=MeasureWeatherCountry
Text="%1, %2"
MeterStyle=MainTextStyle
X=5R
Y=0r

[MeterWeatherImage]
Meter=Image
MeasureName=MeasureWeatherIcon
ImageName=#@#Images\Weather#WeatherTheme#\%1.png
X=450
Y=0R
W=90
H=90

[MeterWeatherTemp]
Meter=String
MeasureName=MeasureWeatherTemp
Text="%1°C"
MeterStyle=MainTextStyle
FontSize=30
X=10R
Y=10r

[MeterWeatherDesc]
Meter=String
MeasureName=MeasureWeatherDesc
Text="%1"
MeterStyle=MainTextStyle
X=5r
Y=-10R


; ----------------------------------
; TIME DISPLAY
; ----------------------------------

[MeterHours]
Meter=String
MeasureName=MeasureHours
Text="%1"
MeterStyle=MainTextStyle
FontSize=35
X=500
Y=15R

[MeterMinutes]
Meter=String
MeasureName=MeasureMinutes
Text=": %1"
MeterStyle=MainTextStyle
FontSize=25
X=0R
Y=10r