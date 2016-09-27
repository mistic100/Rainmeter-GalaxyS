; ----------------------------------
; NETWORK DISPLAY
; ----------------------------------

; main line
[NetworkIcon]
Meter=Image
ImageName=#@#Images\Icons\network.png
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
Autoscale=1
MeterStyle=MainTextStyle | RightTextStyle
X=790
Y=5r

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
Autoscale=1
MeterStyle=MainTextStyle | RightTextStyle
X=790
Y=5r


; ----------------------------------
; TOP PROCESSES DISPLAY
; ----------------------------------

[TopIcon]
Meter=Image
ImageName=#@#Images\Icons\top.png
X=540
Y=15R

[TopCPUValue1]
Meter=String
MeasureName=MeasureTopCPUValue1
Scale=100.0
Text="%1 %"
MeterStyle=MainTextStyle | SmallTextStyle | RightTextStyle
X=-5r
Y=5r
H=30

[TopCPUValue2]
Meter=String
MeasureName=MeasureTopCPUValue2
Scale=100.0
Text="%1 %"
MeterStyle=MainTextStyle | SmallTextStyle | RightTextStyle
X=0r
Y=30r
H=30

[TopCPUName1]
Meter=String
MeasureName=MeasureTopCPUName1
MeterStyle=MainTextStyle | RightTextStyle
ClipString=1
W=130
H=30
X=-50r
Y=-35r

[TopCPUName2]
Meter=String
MeasureName=MeasureTopCPUName2
MeterStyle=MainTextStyle | RightTextStyle
ClipString=1
W=130
H=30
X=0r
Y=30r

[TopMemValue1]
Meter=String
MeasureName=MeasureTopMemValue1
AutoScale=1
Text="%1B"
MeterStyle=MainTextStyle | SmallTextStyle | RightTextStyle
X=655
Y=-25r
H=30

[TopMemValue2]
Meter=String
MeasureName=MeasureTopMemValue2
AutoScale=1
Text="%1B"
MeterStyle=MainTextStyle | SmallTextStyle | RightTextStyle
X=0r
Y=30r
H=30

[TopMemName1]
Meter=String
MeasureName=MeasureTopMemName1
MeterStyle=MainTextStyle
ClipString=1
W=130
H=30
X=0r
Y=-35r

[TopMemName2]
Meter=String
MeasureName=MeasureTopMemName2
MeterStyle=MainTextStyle
ClipString=1
W=130
H=30
X=0r
Y=30r


; ----------------------------------
; HDD DISPLAY
; ----------------------------------

; drive 1
[Drive1Label]
Meter=String
Text=#Drive1#
MeterStyle=MainTextStyle
X=410
Y=20R

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
Autoscale=1
MeterStyle=MainTextStyle | RightTextStyle
X=790
Y=5r

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
Autoscale=1
MeterStyle=MainTextStyle | RightTextStyle
X=790
Y=5r

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
Autoscale=1
MeterStyle=MainTextStyle | RightTextStyle
X=790
Y=5r


; ----------------------------------
; WEATHER DISPLAY
; ----------------------------------

[MeterWeatherImage]
Meter=Image
MeasureName=MeasureWeatherIcon
DynamicVariables=1
ImageName=#@#Images\Weather#WeatherTheme#\%1.png
X=530
Y=25R
W=90
H=90
LeftMouseUpAction=[!SetVariable WeatherTheme (1-#WeatherTheme#)][!WriteKeyValue Variables WeatherTheme (1-#WeatherTheme#) "Variables.inc"]

[MeterWeatherTemp]
Meter=String
MeasureName=MeasureWeatherTemp
Text="%1°C"
MeterStyle=MainTextStyle
FontSize=30
X=10R
Y=5r

[MeterWeatherDesc]
Meter=String
MeasureName=MeasureWeatherDesc
Text="%1"
MeterStyle=MainTextStyle
ClipString=1
X=0r
Y=0R
W=145
H=60
