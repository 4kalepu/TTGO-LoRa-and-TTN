//LoRa as Transmitter SX1276//
#include <SPI.h>
#include <LoRa.h>

int counter = 0;

void setup() {

Serial.begin(9600); 
while (!Serial);

Serial.println("LoRa Sender");

LoRa.setPins(18, 23, 26);

if (!LoRa.begin(868E6)) {

Serial.println("Starting LoRa failed!");

while (1);

}

}

void loop() {

Serial.print("Sending packet: ");
Serial.println(counter);

// send packet

LoRa.beginPacket(); 
LoRa.print("hello");
LoRa.print(counter); LORa.endPacket ();

counter++;

delay(5000);

}
