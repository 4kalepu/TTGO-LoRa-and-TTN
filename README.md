# TTGO-LoRa-and-TTN
ESAT , Tunisa Internship
1.	Generally Arduino IDE doesn’t have ESP32 board. 
Installation instructions using Arduino IDE Boards Manager
•	Stable release link: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_index.json
•	Development release link: https://raw.githubusercontent.com/espressif/arduino-esp32/gh-pages/package_esp32_dev_index.json
Starting with 1.6.4, Arduino allows installation of third-party platform packages using Boards Manager. We have packages available for Windows, Mac OS, and Linux (x86, amd64, armhf and arm64).
•	Install the current upstream Arduino IDE at the 1.8 level or later. The current version is at the Arduino website.
•	Start Arduino and open Preferences window.
•	Enter one of the release links above into Additional Board Manager URLs field. You can add multiple URLs, separating them with commas.
•	Open Boards Manager from Tools > Board menu and install esp32 platform (and do not forget to select your ESP32 board from Tools > Board menu after installation).
2.	ESP32 check – simple blinking code. Burn it and check it in the board

3.	TTGO – T beam -> Heltec WiFi LoRa 32 (board manager) 

4.	Test GPS module -- TinyGPS++ library add in library and burn the code in the device 

5.	  Code_for_GPS_module_test.ino (Arduino code) 
 
6.	Test loRa N/W – create config file with all keys and use Hello world code for checking 

7.	We will get ASCII code in TTN and we should convert it to HEX

8.	GPS Tracker  config.h, gps.h ,gps.c files to the .ino file 

