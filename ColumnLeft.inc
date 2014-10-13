[ColumnLeft]
Meter=String
X=0
Y=0
W=400
H=480
Text=" "


; ----------------------------------
; CPU DISPLAY
; ----------------------------------

; main line
[CPUIcon]
Meter=Image
ImageName=#@#Images\iconCpu.png
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
MeterStyle=MainTextStyle
StringAlign=Right
X=275
Y=0r

[MeterCPUUsage]
Meter=String
MeasureName=MeasureCPUUsage
Text="%1 %"
MeterStyle=MainTextStyle
StringAlign=Right
X=380
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
MeasureName=MeasureCPU1Usage
MeasureName2=MeasureCPU2Usage
MeasureName3=MeasureCPU3Usage
MeasureName4=MeasureCPU4Usage
MeterStyle=GraphDimension
LineColor=#CPU1LineColor#
LineColor2=#CPU2LineColor#
LineColor3=#CPU3LineColor#
LineColor4=#CPU4LineColor#
X=0r
Y=0r

; bars
[CPU1BarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=10R
Y=0r

[MeterCPU1Bar]
Meter=Bar
MeasureName=MeasureCPU1Usage
MeterStyle=BarDimension
BarColor=#CPU1BarColor#
X=0r
Y=0r

[CPU2BarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=5R
Y=0r

[MeterCPU2Bar]
Meter=Bar
MeasureName=MeasureCPU2Usage
MeterStyle=BarDimension
BarColor=#CPU2BarColor#
X=0r
Y=0r

[CPU3BarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=5R
Y=0r

[MeterCPU3Bar]
Meter=Bar
MeasureName=MeasureCPU3Usage
MeterStyle=BarDimension
BarColor=#CPU3BarColor#
X=0r
Y=0r

[CPU4BarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=5R
Y=0r

[MeterCPU4Bar]
Meter=Bar
MeasureName=MeasureCPU4Usage
MeterStyle=BarDimension
BarColor=#CPU4BarColor#
X=0r
Y=0r


; ----------------------------------
; RAM DISPLAY
; ----------------------------------

; main line
[RAMIcon]
Meter=Image
ImageName=#@#Images\iconRam.png
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
StringAlign=Right
X=380
Y=0r

[SWAPIcon]
Meter=Image
ImageName=#@#Images\iconHdd.png
X=10
Y=0R

[MeterSWAPUsage]
Meter=String
MeasureName=MeasureSWAPUsage
MeasureName2=MeasureSWAPTotal
Autoscale=1
Text="%1 / %2 GB"
MeterStyle=MainTextStyle
X=5R
Y=0r

[MeterSWAPUsagePercent]
Meter=String
MeasureName=MeasureSWAPUsage
Percentual=1
Text="%1 %"
MeterStyle=MainTextStyle
StringAlign=Right
X=380
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

[MeterSWAPGraph]
Meter=Line
MeasureName=MeasureSWAPUsage
MeterStyle=GraphDimension
LineColor=#SWAPLineColor#
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

[SWAPBarBackground]
Meter=Image
MeterStyle=BarDimension | BarBackgroundStyle
X=5R
Y=0r

[MeterSWAPBar]
Meter=Bar
MeasureName=MeasureSWAPUsage
MeterStyle=BarDimension
BarColor=#SWAPBarColor#
X=0r
Y=0r


; ----------------------------------
; GPU DISPLAY
; ----------------------------------

; main line
[GPUIcon]
Meter=Image
ImageName=#@#Images\iconGpu.png
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
MeterStyle=MainTextStyle
StringAlign=Right
X=275
Y=0r

[MeterGPUUsage]
Meter=String
MeasureName=MeasureGPUUsage
Percentual=1
Text="%1 %"
MeterStyle=MainTextStyle
StringAlign=Right
X=380
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
ImageName=#@#Images\iconTime.png
MeterStyle=MainTextStyle
X=10
Y=15R

[MeterUptime]
Meter=String
MeasureName=MeasureUptime
Text="%1"
MeterStyle=MainTextStyle
X=5R
Y=0r
