; ----------------------------------
; CPU MEASURES
; ----------------------------------

; % usages
[MeasureCPUUsage]
Measure=CPU
Processor=0

[MeasureCPU1Usage]
Measure=CPU
Processor=1

[MeasureCPU2Usage]
Measure=CPU
Processor=2

[MeasureCPU3Usage]
Measure=CPU
Processor=3

[MeasureCPU4Usage]
Measure=CPU
Processor=4

; Clock (OHM)
[MeasureCPUClock]
Measure=Plugin
Plugin=Plugins\OpenHardwareMonitorPlugin.dll
Hardware=#MCPU#
Type=Clocks
Sensor=CPU Core #1

; Temp (OHM)
[MeasureCPUTemp]
Measure=Plugin
Plugin=Plugins\OpenHardwareMonitorPlugin.dll
Hardware=#MCPU#
Type=Temperatures
Sensor=CPU Package


; ----------------------------------
; RAM MEASURES
; ----------------------------------

; RAM
[MeasureRAMUsage]
Measure=PhysicalMemory
Substitute=" G":""

[MeasureRAMTotal]
Measure=PhysicalMemory
Substitute=" G":""
Total=1

; SWAP
[MeasureSWAPUsage]
Measure=SWAPMemory
Substitute=" G":""

[MeasureSWAPTotal]
Measure=SWAPMemory
Substitute=" G":""
Total=1


; ----------------------------------
; GPU MEASURES
; ----------------------------------

; temp (OHM)
[MeasureGPUTemp]
Measure=Plugin
Plugin=Plugins\OpenHardwareMonitorPlugin.dll
Hardware=#MGPU#
Type=Temperatures
Sensor=GPU Core
MaxValue=100

; load (OHM)
[MeasureGPUUsage]
Measure=Plugin
Plugin=Plugins\OpenHardwareMonitorPlugin.dll
Hardware=#MGPU#
Type=Load
Sensor=GPU Core

; clock (OHM)
[MeasureGPUClock]
Measure=Plugin
Plugin=Plugins\OpenHardwareMonitorPlugin.dll
Hardware=#MGPU#
Type=Clocks
Sensor=GPU Core


; ----------------------------------
; TOP PROCESSES MEASURES
; ----------------------------------

[MeasureTopMain]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
ReQuery=1
GlobalIgnoredProcesses=Idle|%Total|rundll32|wscript|userinit|dwm|Rainmeter|svchost*|System
UpdateDivider=30

[MeasureTopCPUValue1]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=CPU
ProcNums=0
Format="%RawCPU"
MaxValue=10000

[MeasureTopCPUValue2]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=CPU
ProcNums=1
Format="%RawCPU"
MaxValue=10000

[MeasureTopCPUName1]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=CPU
ProcNums=0
Format="%pName"

[MeasureTopCPUName2]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=CPU
ProcNums=1
Format="%pName"

[MeasureTopMemValue1]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=Memory
ProcNums=0
Format="%RawMemory"

[MeasureTopMemValue2]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=Memory
ProcNums=1
Format="%RawMemory"

[MeasureTopMemName1]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=Memory
ProcNums=0
Format="%pName"

[MeasureTopMemName2]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=Memory
ProcNums=1
Format="%pName"


; ----------------------------------
; NETWORK MEASURES
; ----------------------------------

[MeasureIP]
Measure=Plugin
Plugin=WebParser
UpdateRate=3600
Url=http://icanhazip.com
RegExp=(.*)
StringIndex=1
Substitute="":"0.0.0.0"

[MeasurePing]
Measure=Plugin
Plugin=PingPlugin
DestAddress=www.google.com
UpdateRate=10

[MeasureDownload]
Measure=NetIn

[MeasureUpload]
Measure=NetOut

;[MeasureDownloadTotal]
;Measure=NetIn
;Cumulative=1

;[MeasureUploadTotal]
;Measure=NetOut
;Cumulative=1


; ----------------------------------
; HDD MEASURES
; ----------------------------------

; space
[MeasureDrive1Free]
Measure=FreeDiskSpace
Drive=#Drive1#
UpdateDivider=60

[MeasureDrive1Usage]
Measure=FreeDiskSpace
Drive=#Drive1#
InvertMeasure=1
UpdateDivider=60

[MeasureDrive2Free]
Measure=FreeDiskSpace
Drive=#Drive2#
UpdateDivider=60

[MeasureDrive2Usage]
Measure=FreeDiskSpace
Drive=#Drive2#
InvertMeasure=1
UpdateDivider=60

[MeasureDrive3Free]
Measure=FreeDiskSpace
Drive=#Drive3#
UpdateDivider=60

[MeasureDrive3Usage]
Measure=FreeDiskSpace
Drive=#Drive3#
InvertMeasure=1
UpdateDivider=60

; activity
[MeasureDrive1Access]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive1#
MaxValue=10000000

[MeasureDrive2Access]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive2#
MaxValue=10000000

[MeasureDrive3Access]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive3#
MaxValue=10000000


; ----------------------------------
; WEATHER MEASURES
; ----------------------------------

[MeasureWeather]
Measure=Plugin
Plugin=WebParser
UpdateRate=600
Url=http://api.openweathermap.org/data/2.5/weather?q=#WeatherQ#&lang=#WeatherLang#&mode=xml&units=metric
RegExp=(?siU)<city.*name="(.*)">.*<country>(.*)</country>.*<temperature value="(.*)".*<weather.*value="(.*)" icon="(.*)"></weather>

;[MeasureWeatherCity]
;Measure=Plugin
;Plugin=WebParser
;Url=[MeasureWeather]
;StringIndex=1
;Substitute="":"N/A"

;[MeasureWeatherCountry]
;Measure=Plugin
;Plugin=WebParser
;Url=[MeasureWeather]
;StringIndex=2
;Substitute="":"N/A"

[MeasureWeatherTemp]
Measure=Plugin
Plugin=WebParser
Url=[MeasureWeather]
StringIndex=3
RegExp=([0-9]*)\..*
StringIndex2=1
Substitute="":"N/A"

[MeasureWeatherDesc]
Measure=Plugin
Plugin=WebParser
Url=[MeasureWeather]
StringIndex=4
Substitute="":"N/A"

[MeasureWeatherIcon]
Measure=Plugin
Plugin=WebParser
Url=[MeasureWeather]
StringIndex=5
Substitute="":"00"


; ----------------------------------
; MISC MEASURES
; ----------------------------------

[MeasureVolume]
Measure=Plugin
Plugin=Win7AudioPlugin
UpdateDivider=1

[MeasureVolumeValue]
Measure=Calc
Formula=MeasureVolume
UpdateDivider=1
Substitute="-1":"0"
IfCondition=MeasureVolumeValue>0
IfTrueAction=[!SetOption VolumeHandle ImageName #@#Images\volume.png][!ShowMeter VolumeValue]
IfFalseAction=[!SetOption VolumeHandle ImageName #@#Images\volume_off.png][!HideMeter VolumeValue]

[MeasureTime]
Measure=Time
Format="%H:%M"

[MeasureDate]
Measure=Time
Format="%a. %#d %B %Y"
Substitute=#DateTranslation#

[MeasureUptime]
Measure=Uptime
Format="%4!2i!d %3!02i!h %2!02i!m %1!02i!s"
