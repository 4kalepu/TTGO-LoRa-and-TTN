#include <lmic.h>

#include <hal/hal.h>

#include "config.h"

#define uS TO_S_FACTOR 1000000

#define TIME_TO_SLEEP 30
#define BUILTIN_LED 21

RTC_DATA_ATTR int bootCount = 0; 
RTC_DATA_ATTR u4_t RTC_seqnoUp = 0;

static uint8_t mydata[] = "Hello, world!";
RTC_DATA_ATTR int statCount = 0;

const 1mic_pinmap lmic_pins = {
.nss = 18,
.rxtx = LMIC UNUSED_PIN,
.rst = LMIC UNUSED_PIN,
.dio = (26, 33, 32)}
