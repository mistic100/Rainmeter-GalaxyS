; ----------------------------------
; CPU DISPLAY
; ----------------------------------

; main line
[CPUIcon]
Meter=Image
ImageName=#@#Images\Icons\cpu.png
X=10
Y=10

[MeterCPUClock]
Meter=String
MeasureName=MeasureCPUClock
Text="%1 MHz"
MeterStyle=MainTextStyle
X=5R
Y=0r

[MeterCPUTemp]
Meter=String
MeasureName=MeasureCPUTemp
Text="%1°C"
MeterStyle=MainTextStyle | RightTextStyle
X=275
Y=0r

[MeterCPUUsage]
Meter=String
MeasureName=MeasureCPUUsage
Text="%1 %"
MeterStyle=MainTextStyle
X=280
Y=0r

; graph
[CPUGraphBackground]
Meter=Image
MeterStyle=GraphDimension | GraphBackgroundStyle
X=10
Y=5R

[MeterCPUGraph]
Meter=Line
LineCount=4
MeasureName=MeasureCPU4Usage
MeasureName2=MeasureCPU3Usage
MeasureName3=MeasureCPU2Usage
MeasureName4=MeasureCPU1Usage
MeterStyle=GraphDimension
LineColor=#CPU4LineColor#
LineColor2=#CPU3LineColor#
LineColor3=#CPU2LineColor#
LineColor4=#CPU1LineColor#
X=0r
Y=0r

; piechart
[CPUPieBackground]
Meter=Image
ImageName=#@#Images\Skin\pieBackground.png
MeterStyle=PieDimension
X=10R
Y=0r
Group=CPUPies

[MeterCPUPie1]
Meter=Roundline
MeasureName=MeasureCPU1Usage
MeterStyle=PieDimension | PieStyle
LineColor=#CPU1BarColor#
LineLength=40
LineStart=30
Group=CPUPies

[MeterCPUPie2]
Meter=Roundline
MeasureName=MeasureCPU2Usage
MeterStyle=PieDimension | PieStyle
LineColor=#CPU2BarColor#
LineLength=30
LineStart=20
Group=CPUPies

[MeterCPUPie3]
Meter=Roundline
MeasureName=MeasureCPU3Usage
MeterStyle=PieDimension | PieStyle
LineColor=#CPU3BarColor#
LineLength=20
LineStart=10
Group=CPUPies

[MeterCPUPie4]
Meter=Roundline
MeasureName=MeasureCPU4Usage
MeterStyle=PieDimension | PieStyle
LineColor=#CPU4BarColor#
LineLength=10
LineStart=0
Group=CPUPies

; bars
[CPU1BarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=0r
Y=0r
Group=CPUBars

[MeterCPU1Bar]
Meter=Bar
MeasureName=MeasureCPU1Usage
MeterStyle=BarDimension
BarColor=#CPU1BarColor#
X=0r
Y=0r
Group=CPUBars

[CPU2BarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=5R
Y=0r
Group=CPUBars

[MeterCPU2Bar]
Meter=Bar
MeasureName=MeasureCPU2Usage
MeterStyle=BarDimension
BarColor=#CPU2BarColor#
X=0r
Y=0r
Group=CPUBars

[CPU3BarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=5R
Y=0r
Group=CPUBars

[MeterCPU3Bar]
Meter=Bar
MeasureName=MeasureCPU3Usage
MeterStyle=BarDimension
BarColor=#CPU3BarColor#
X=0r
Y=0r
Group=CPUBars

[CPU4BarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=5R
Y=0r
Group=CPUBars

[MeterCPU4Bar]
Meter=Bar
MeasureName=MeasureCPU4Usage
MeterStyle=BarDimension
BarColor=#CPU4BarColor#
X=0r
Y=0r
Group=CPUBars

[CPUModeToggler]
Meter=Image
X=280
Y=45
W=95
H=80
LeftMouseUpAction=[!ToggleMeterGroup "CPUBars"][!ToggleMeterGroup "CPUPies"][!WriteKeyValue Variables CPUMode (1-#CPUMode#) "Variables.inc"]

[CPUModeAutoToggler]
Measure=Calc
IfCondition=#CPUMode# = 0
IfTrueAction=[!HideMeterGroup "CPUPies"]
IfFalseAction=[!HideMeterGroup "CPUBars"]


; ----------------------------------
; RAM DISPLAY
; ----------------------------------

; main line
[RAMIcon]
Meter=Image
ImageName=#@#Images\Icons\ram.png
X=10
Y=15R

[MeterRAMUsage]
Meter=String
MeasureName=MeasureRAMUsage
MeasureName2=MeasureRAMTotal
Autoscale=1
Text="%1 / %2 GB"
MeterStyle=MainTextStyle
X=5R
Y=0r

[MeterRAMUsagePercent]
Meter=String
MeasureName=MeasureRAMUsage
Percentual=1
Text="%1 %"
MeterStyle=MainTextStyle
X=280
Y=0r

; graph (need to be separated because not the same scale)
[RAMGraphBackground]
Meter=Image
MeterStyle=GraphDimension | GraphBackgroundStyle
X=10
Y=5R

[MeterRAMGraph]
Meter=Line
MeasureName=MeasureRAMUsage
MeterStyle=GraphDimension
LineColor=#RAMLineColor#
X=0r
Y=0r

; bars
[RAMBarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=10R
Y=0r

[MeterRAMBar]
Meter=Bar
MeasureName=MeasureRAMUsage
MeterStyle=BarDimension
BarColor=#RAMBarColor#
X=0r
Y=0r


; ----------------------------------
; GPU DISPLAY
; ----------------------------------

; main line
[GPUIcon]
Meter=Image
ImageName=#@#Images\Icons\gpu.png
X=10
Y=15R

[MeterGPUClock]
Meter=String
MeasureName=MeasureGPUClock
Text="%1 MHz"
MeterStyle=MainTextStyle
X=5R
Y=0r

[MeterGPUTemp]
Meter=String
MeasureName=MeasureGPUTemp
Text="%1°C"
MeterStyle=MainTextStyle | RightTextStyle
X=275
Y=0r

[MeterGPUUsage]
Meter=String
MeasureName=MeasureGPUUsage
Percentual=1
Text="%1 %"
MeterStyle=MainTextStyle
X=280
Y=0r

; graph
[GPUGraphBackground]
Meter=Image
MeterStyle=GraphDimension | GraphBackgroundStyle
X=10
Y=5R

[MeterGPUGraph]
Meter=Line
MeasureName=MeasureGPUUsage
MeterStyle=GraphDimension
LineColor=#GPULineColor#
X=0r
Y=0r

; bars
[GPUBarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=10R
Y=0r

[MeterGPUBar]
Meter=Bar
MeasureName=MeasureGPUUsage
MeterStyle=BarDimension
BarColor=#GPUBarColor#
X=0r
Y=0r


; ----------------------------------
; UPTIME DISPLAY
; ----------------------------------

[UptimeIcon]
Meter=Image
ImageName=#@#Images\Icons\time.png
X=10
Y=15R

[MeterUptime]
Meter=String
MeasureName=MeasureUptime
MeterStyle=MainTextStyle
X=5R
Y=0r

[CalendarIcon]
Meter=Image
ImageName=#@#Images\Icons\calendar.png
X=10
Y=10R

[MeterDate]
Meter=String
MeasureName=MeasureDate
MeterStyle=MainTextStyle
ClipString=2
X=5R
Y=0r
W=275
H=30
