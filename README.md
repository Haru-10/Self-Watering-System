# Self-Watering-System
A combination of items such as a soil moisture sensor, esp32, and more to calculate how much water needs to be pumped, and then pumps that. Fully autonomous.
Hardware composes of a usb1020 pump, Capacitive Soil Moisture Sensor v2.0, ESP32-Wroom-32, Duracell 9v, and TongLing 5v Relay Module
HOW TO FLASH
In order to flash the esp32, you must First connect the module to your computer via USB connection. 
Second, download Arduino IDE, or a similar IDE. Third, in Arduino IDE, with code loaded, click "Upload", and when the code states "Uploading.." Hold the "BOOT" button, untill you suddenly see text lines moving rapidly in the output box. The code is now flashed onto the ESP32

Wiring

Capacitive Soil Moisture Sensor v2.0, 
    GND connected to ESP32 GND, VCC connected to ESP32 3.3V, AUDT connected to Pin 32 on Esp32

Tongling Relay Module
  Low Volt Side
    DC+ connected to 5v on esp32, DC- connected to GND on esp32, IN connected to Pin 21 on ESP32
  Other High V side, side near Large Block
    NO wired to USB1020 pump + side. COM connected to Duracell 9v + side.

USB1020 pump, 
    + side connected to NO on Relay Module
    - Side Directly connected to - side on Duracell 9v Battery

https://github.com/user-attachments/assets/71edd0ca-e604-49ec-9087-5bb149559851



