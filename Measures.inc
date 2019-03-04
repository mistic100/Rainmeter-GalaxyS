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

[MeasureCPU5Usage]
Measure=CPU
Processor=5

[MeasureCPU6Usage]
Measure=CPU
Processor=6

[MeasureCPU7Usage]
Measure=CPU
Processor=7

[MeasureCPU8Usage]
Measure=CPU
Processor=8

; Clock (OHM)
[MeasureCPUClock]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#CPUClockSensorId#
HWiNFOSensorInstance=#CPUClockSensorInstance#
HWiNFOEntryId=#CPUClockEntryId#
HWiNFOType=CurrentValue

; Temp (OHM)
[MeasureCPUTemp]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#CPUTempSensorId#
HWiNFOSensorInstance=#CPUTempSensorInstance#
HWiNFOEntryId=#CPUTempEntryId#
HWiNFOType=CurrentValue


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


; ----------------------------------
; GPU MEASURES
; ----------------------------------

; temp (OHM)
[MeasureGPUTemp]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#GPUTempSensorId#
HWiNFOSensorInstance=#GPUTempSensorInstance#
HWiNFOEntryId=#GPUTempEntryId#
HWiNFOType=CurrentValue

; load (OHM)
[MeasureGPUUsage]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#GPUUsageSensorId#
HWiNFOSensorInstance=#GPUUsageSensorInstance#
HWiNFOEntryId=#GPUUsageEntryId#
HWiNFOType=CurrentValue
MaxValue=100

; ram (OHM)
[MeasureGPURAMUsage]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#GPUMemSensorId#
HWiNFOSensorInstance=#GPUMemSensorInstance#
HWiNFOEntryId=#GPUMemEntryId#
HWiNFOType=CurrentValue
MaxValue=100

; clock (OHM)
[MeasureGPUClock]
Measure=Plugin
Plugin=Plugins\HWiNFO.dll
HWiNFOSensorId=#GPUClockSensorId#
HWiNFOSensorInstance=#GPUClockSensorInstance#
HWiNFOEntryId=#GPUClockEntryId#
HWiNFOType=CurrentValue


; ----------------------------------
; TOP PROCESSES MEASURES
; ----------------------------------

[MeasureTopMain]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
ReQuery=1
GlobalIgnoredProcesses=Idle|%Total|rundll32|wscript|userinit|dwm|Rainmeter|svchost*|System|Memory Compression|WmiPrvSe%|MsMpEng%
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

[MeasureTopCPUValue3]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=CPU
ProcNums=2
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

[MeasureTopCPUName3]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=CPU
ProcNums=2
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

[MeasureTopMemValue3]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=Memory
ProcNums=2
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

[MeasureTopMemName3]
Measure=Plugin
Plugin=Plugins\TopProcesses.dll
MetricType=Memory
ProcNums=2
Format="%pName"

; ----------------------------------
; NETWORK MEASURES
; ----------------------------------

[MeasureIP]
Measure=Plugin
Plugin=WebParser
UpdateRate=3600
Url=http://ipv4.icanhazip.com
RegExp=(.*)
StringIndex=1
Substitute="":"0.0.0.0"

[MeasurePing]
Measure=Plugin
Plugin=PingPlugin
DestAddress=www.google.com
UpdateRate=10
;IfCondition=MeasurePing > 1000
;IfTrueAction=[!ShowMeter "NetworkError"]
;IfFalseAction=[!HideMeter "NetworkError"]

[MeasureDownload]
Measure=NetIn

[MeasureUpload]
Measure=NetOut


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

[MeasureDrive4Free]
Measure=FreeDiskSpace
Drive=#Drive4#
UpdateDivider=60

[MeasureDrive4Usage]
Measure=FreeDiskSpace
Drive=#Drive4#
InvertMeasure=1
UpdateDivider=60

[MeasureDrive5Free]
Measure=FreeDiskSpace
Drive=#Drive5#
UpdateDivider=60

[MeasureDrive5Usage]
Measure=FreeDiskSpace
Drive=#Drive5#
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

[MeasureDrive4Access]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive4#
MaxValue=10000000

[MeasureDrive5Access]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=% Disk Time
PerfMonInstance=#Drive5#
MaxValue=10000000

[MeasureDrive1Bytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive1#

[MeasureDrive2Bytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive2#

[MeasureDrive3Bytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive3#

[MeasureDrive4Bytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive4#

[MeasureDrive5Bytes]
Measure=Plugin
Plugin=PerfMon
PerfMonObject=LogicalDisk
PerfMonCounter=Disk Bytes/sec
PerfMonInstance=#Drive5#


; ----------------------------------
; WEATHER MEASURES
; ----------------------------------

[MeasureWeather]
Measure=Plugin
Plugin=WebParser
UpdateRate=600
Url=http://api.openweathermap.org/data/2.5/weather?q=#WeatherQ#&lang=#WeatherLang#&appid=#WeatherApiKey#&mode=xml&units=metric
RegExp=(?siU)<city id="(.*)" name="(.*)">.*<country>(.*)</country>.*<temperature value="(.*)".*<weather.*value="(.*)" icon="(.*)"></weather>

[MeasureWeatherCity]
Measure=Plugin
Plugin=WebParser
Url=[MeasureWeather]
StringIndex=2
Substitute="":"N/A"

[MeasureWeatherTemp]
Measure=Plugin
Plugin=WebParser
Url=[MeasureWeather]
StringIndex=4
RegExp=(-?[0-9]*)\.?.*
StringIndex2=1
Substitute="":"?","-0":"0"

[MeasureWeatherDesc]
Measure=Plugin
Plugin=WebParser
Url=[MeasureWeather]
StringIndex=5
Substitute="":"N/A"

[MeasureWeatherIcon]
Measure=Plugin
Plugin=WebParser
Url=[MeasureWeather]
StringIndex=6
Substitute="":"00"

[MeasureForecast]
Measure=Plugin
Plugin=WebParser
UpdateRate=6000
Url=http://api.openweathermap.org/data/2.5/forecast/daily?q=#WeatherQ#&lang=#WeatherLang#&appid=#WeatherApiKey#&mode=xml&units=metric&cnt=4
RegExp=(?siU)<location>.*<name>(.*)</name>.*<country>(.*)</country>.*</location>.*<forecast>(.*)</forecast>

[MeasureForecastMain]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecast]
StringIndex=3
RegExp=(?siU)<time.*</time>.*<time day="(.*)">.*<symbol.*name="(.*)" var="(.*)">.*<temperature day="(.*)".*</time>.*<time day="(.*)">.*<symbol.*name="(.*)" var="(.*)">.*<temperature day="(.*)".*</time>.*<time day="(.*)">.*<symbol.*name="(.*)" var="(.*)">.*<temperature day="(.*)".*</time>

[MeasureForecastDay1]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=1

[MeasureForecastDayName1]
Measure=Time
TimeStamp=[MeasureForecastDay1]
TimeStampFormat=%Y-%m-%d
DynamicVariables=1
Format="%A"
FormatLocale=Local

[MeasureForecastTemp1]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=4
RegExp=(-?[0-9]*)\.?.*
StringIndex2=1
Substitute="":"?","-0":"0"

[MeasureForecastDesc1]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=2

[MeasureForecastIcon1]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=3
Substitute="":"00"

[MeasureForecastDay2]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=5

[MeasureForecastDayName2]
Measure=Time
TimeStamp=[MeasureForecastDay2]
TimeStampFormat=%Y-%m-%d
DynamicVariables=1
Format="%A"
FormatLocale=Local

[MeasureForecastTemp2]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=8
RegExp=(-?[0-9]*)\.?.*
StringIndex2=1
Substitute="":"?","-0":"0"

[MeasureForecastDesc2]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=6

[MeasureForecastIcon2]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=7
Substitute="":"00"

[MeasureForecastDay3]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=9


[MeasureForecastDayName3]
Measure=Time
TimeStamp=[MeasureForecastDay3]
TimeStampFormat=%Y-%m-%d
DynamicVariables=1
Format="%A"
FormatLocale=Local

[MeasureForecastTemp3]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=12
RegExp=(-?[0-9]*)\.?.*
StringIndex2=1
Substitute="":"?","-0":"0"

[MeasureForecastDesc3]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=10

[MeasureForecastIcon3]
Measure=Plugin
Plugin=WebParser
Url=[MeasureForecastMain]
StringIndex=11
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
IfTrueAction=[!SetOption VolumeHandle ImageName #@#Images\Skin\volume.png]
IfFalseAction=[!SetOption VolumeHandle ImageName #@#Images\Skin\volume_off.png]

[MeasureTime]
Measure=Time
Format="%H:%M"

[MeasureTimeFull]
Measure=Time
Format="%H:%M:%S"

[MeasureDate]
Measure=Time
Format="%A %#d %b %Y"
FormatLocale=Local

[MeasureCurrentTime]
Measure=Time

[MeasureUserLoginTime]
Measure=Plugin
Plugin=SysInfo
SysInfoType=USER_LOGONTIME
UpdateDivider=-1

[MeasureUptime]
Measure=Uptime
SecondsValue=([MeasureCurrentTime:] - [MeasureUserLoginTime:])
Format="%4!2i!d %3!02i!h %2!02i!m %1!02i!s"
DynamicVariables=1
