//4kalepu

#include <TinyGPS++.h>
TinyGPSPlus gps;
HardwareSerial SerialX(1);
void setup(){

Serial.begin(115200); 
SerialX.begin(9600, SERIAL_8N1, 12, 15); //8N1-eight (8) data bits, no (N) parity bit, and one (1) stop bit. 8N1-12,15-TX,RX
}
void loop()
{

Serial.print("Latitude   :   ");
Serial.println (gps.location.lat(), 5); // 5 decimal places

Serial.print ("Longitude : ");
Serial.println (gps.location. lng(), 4); // 4 decimal places

Serial.print("Satellites: ");
Serial.println (gps.satellites.value());

Serial.print("Altitude : ");
Serial.print (gps.altitude.feet() / 3.2808);

Serial.println("M");
Serial.print("Time      : ");

Serial.print (gps.time.hour());

Serial.print(":");

Serial.print (gps.time.minute());

Serial.print(":"); 
Serial.println (gps.time. second());

Serial.println("*****************");

smartDelay(1000);

if (millis() > 5000 && gps.charsProcessed() <10)
Serial.println (F("No GPS data received: check wirig"));
}
static void smartDelay(unsigned long ms)
{ 
unsigned long start = millis();
do
{
while (SerialX.available())
gps.encode (SerialX.read()); 
} while (millis()- start < ms);

}
