I created this AutoHotkey script because AirDisplay fails to autoconnect to my Android device and it doesn't support command line configuration for connection to IP.

The script will take control of your mouse and keyboard to configure AirDisplay and launch Rainmeter when ready.

## Prerequisites
* AirDisplay with autostart but WITHOUT autoconnect
* Rainmeter configured WITHOUT autostart

## Configuration
* **AndroidIP** ip address of your android device, configure your router to assign a static IP
* **RainmeterFolder** directory containing Rainmeter.exe
* **ConnectSleep** number of millisecond to wait for AirDisplay to connect before luanch Rainmeter

## How to use
** Launch AirDisplay in the Android device
** Press Win+A

**Don't touch your mouse or keyboard until AirDisplay window is closed.**