[Variables]
White=255,255,255
LightGrey=200,200,200
Green=128,213,135
Blue=120,184,224
Yellow=237,207,66
Red=227,59,65
DarkGreen=56,147,62
DarkBlue=52,116,155
Indigo=0,85,136
Pink=240,65,100
NvidiaGreen=118,185,0
Orange=255,120,0

BootstrapBlue=0,123,255
BootstrapRed=220,53,69
BootstrapGreen=40,167,69
BootstrapYellow=255,193,7
BootstrapPink=232,62,140
BootstrapCyan=23,162,184
BootstrapOrange=253,126,20
BootstrapPurple=111,66,193

; one CPU mode
CPUGraphColor=#Blue#,70
CPULineColor=#Blue#

CPUBarColor=#Blue#,200

; multiple CPUs mode
CPU1LineColor=#BootstrapBlue#,200
CPU2LineColor=#BootstrapRed#,200
CPU3LineColor=#BootstrapGreen#,175
CPU4LineColor=#BootstrapYellow#,175
CPU5LineColor=#BootstrapPink#,150
CPU6LineColor=#BootstrapCyan#,150
CPU7LineColor=#BootstrapOrange#,125
CPU8LineColor=#BootstrapPurple#,125

CPU1BarColor=#BootstrapBlue#,200
CPU2BarColor=#BootstrapRed#,200
CPU3BarColor=#BootstrapGreen#,200
CPU4BarColor=#BootstrapYellow#,200
CPU5BarColor=#BootstrapPink#,200
CPU6BarColor=#BootstrapCyan#,200
CPU7BarColor=#BootstrapOrange#,200
CPU8BarColor=#BootstrapPurple#,200

RAMGraphColor=#Pink#,70
RAMLineColor=#Pink#

GPUGraphColor=#NvidiaGreen#,70
GPULineColor=#NvidiaGreen#
GPURAMLineColor=#Orange#

DownloadBarColor=#Blue#,150
DownloadLineColor=#DarkBlue#
UploadBarColor=#Green#,150
UploadLineColor=#DarkGreen#

HDDBarColor=#Indigo#,150
HDDLineColor=#Blue#

Width=800
Height=480
ColumnW=250
ColumnCW=260
Spacing=5
Padding=10
TextTitleOffset=4

Column1=#Padding#
Column2=(#Column1# + #ColumnW# + #Padding#)
Column3=(#Column2# + #ColumnCW# + #Padding#)

Line1=15
Line2=125
Line3=235
Line4=345
Line5=455

WeatherBigWidth=150
WeatherSmallWidth=30
WeatherPadding=5

CPUBarWidth=5
CPUBarMargin=1

[CondMultipleCPULines]
Measure=Calc
Formula=#MultipleCPULines#
UpdateDivider=-1
IfCondition=(CondMultipleCPULines = 0)
IfTrueAction=[!SetVariable CPU1BarColor #CPUBarColor#][!SetVariable CPU2BarColor #CPUBarColor#][!SetVariable CPU3BarColor #CPUBarColor#][!SetVariable CPU4BarColor #CPUBarColor#][!SetVariable CPU5BarColor #CPUBarColor#][!SetVariable CPU6BarColor #CPUBarColor#][!SetVariable CPU7BarColor #CPUBarColor#][!SetVariable CPU8BarColor #CPUBarColor#]

[MainTextStyle]
FontColor=#White#
FontFace=GeosansLight
FontSize=16
AntiAlias=1

[TitleTextStyle]
FontColor=#White#
FontFace=Toma Sans
InlineSetting=Weight | 700
FontSize=12
AntiAlias=1

[GraphDimension]
W=250
H=70

[BarDimension]
W=#CPUBarWidth#
H=70

[HorizontalBarDimension]
W=250
H=30
BarOrientation=Horizontal

[GraphBackgroundStyle]
ImageName=#@#Images\Skin\graphBackground.png
PreserveAspectRatio=0
W=250
H=70

[HorizontalBarBackgroundStyle]
ImageName=#@#Images\Skin\graphBackground.png
PreserveAspectRatio=0
W=250
H=30
