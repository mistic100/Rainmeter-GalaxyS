; AirDisplay auto-configurer for Rainmeter GalaxyS

; Configuration
AndroidIP = 192.168.0.16
RainmeterFolder = C:\Program Files\Rainmeter
ConnectSleep = 2000

; ------------------------------------------------------------------------------

; Win+A
#a::

; No animations
SetDefaultMouseSpeed 0
SetKeyDelay 0

Ready = 0

; AirDisplay already openned ?
IfWinExist Air Display
{
  Ready = 1
}
Else
{
  ; Win+B Enter to open system tray
  Send #b{Enter}
  
  ; Search AirDisplay icon on screen
  CoordMode Pixel, Screen
  ImageSearch FoundX, FoundY, 0,0, A_ScreenWidth, A_ScreenHeight, airdisplayicon.png
  
  If ErrorLevel = 0
  {
    ; Double click on AirDisplay icon
    FoundX+= 5
    FoundY+= 5
    
    CoordMode Mouse, Screen
    MouseMove %FoundX%, %FoundY%
    Click 2
    
    Ready = 1
  }
}

If Ready = 1
{
  ; Ensure AirDisplay is on foreground
  WinActivate Air Display
  
  ; Open manual connect dialog
  CoordMode Mouse, Relative
  Click 198, 512
  
  ; Send AndroidIP and validate
  Send ^a{Delete}%AndroidIP%{Enter}
  
  ; Wait for display refresh
  Sleep %ConnectSleep%
  
  ; Close AirDisplay window
  Click 368, 9
  
  ; Launch Rainmeter
  Run %RainmeterFolder%\Rainmeter.exe %RainmeterFolder%
  
  ; Quit
  ExitApp
}
