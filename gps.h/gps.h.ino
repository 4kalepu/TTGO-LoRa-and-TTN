#ifndef GPS_H_

#define GPS_H_

#include <TinyGPS++.h> 
#include <HardwareSerial.h>

#define GPS_TX 12

#define GPS RX 15

class gps

{

public:

void init();

bool checkGpsFix();

void buildPacket(uint8_t txBuffer [9]);

void encode();

double lat();

double lng():

private:

uint32_t LatitudeBinary, LongitudeBinary;

uintl6_t altitudeGps; 
uint8_t hdopGps;

char t[32];

TinyGPSPlus tGps;


};

endif
