[MeasureAudioRaw]
Measure=Plugin
Plugin=AudioLevel

[MeasureAudioRMS_L]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudioRaw
Channel=L
Type=RMS

[MeasureAudioRMS_R]
Measure=Plugin
Plugin=AudioLevel
Parent=MeasureAudioRaw
Channel=R
Type=RMS