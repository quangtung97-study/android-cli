# Connect device through USB cable
# adb tcpip 5555
# Disconnect the USB cable
# Settings > About Phone > Status > IP Address
# adb connect device_ip_address
# adb devices
#
.PHONY: main
main: 
	gradlew assembleDebug && \
	adb install -r ./app/build/outputs/apk/debug/app-debug.apk

.PHONY: build
build:
	gradlew build
