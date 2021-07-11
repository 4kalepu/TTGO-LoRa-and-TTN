#include <SPI.h>

#include <LoRa.h>

#include <TinyGPS++.h>

int counter = 0;

TinyGPSPlus gps;

HardwareSerial Serialx (1);

void setup() {

Serial.begin(115200);

Serialx.begin (5600, SERIAL_8N1, 12, 15);

while (!Serial) ;

Serial.println("LoRa Sender"); LORa.setPins (18, 23, 26);

if (!LoRa.begin (868E6)) {

Serial.println("Starting LoRa failed!");

while (1);

}

}
void loop() {

Serial.print("Sending packet: ");

Serial.println (counter);

// send the package

LoRa.beginPacket (); LORa.println (counter);

LoRa.print("Latitude: ");

LoRa.println (gps.location. Lat (), 5);

LoRa.print ("Longitude:"); 
LoRa.println (gps.location. Lng (), 4);

LoRa.print("Satellites: ");
LoRa.println (gps.satellites.value () );

LoRa.print("Altitude.  : ");

LoRa.print (gps.altitude.feet () / 3.2808);

LoRa.println("M");

LoRa.print("Time LORa.print (gps.time.hour () );
LORa.print (":");

LORa.print (gps.time.minute());

LORa.print (":");

LORa.println (gps.time.second());

LORa.println ("***************");

LORa.endPacket ();

counter++;

smartDelay (1000);

if (millis() > 5000 && gps.charsProcessed () < 10)

Serial.println (F("No GPS data received: check wiring"));
}
static void smartDelay(unsigned long ms) 
{
unsigned long start = millis();

}
