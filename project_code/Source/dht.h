#pragma once
#include <stdint.h>

#define CCxMS ( F_CPU / 1000000UL )
//#define CCxMS 16

//returns the milliseconds since device started
unsigned long micros(void);

//reads humidity and temperature values read from the sensor into a log
int DHT_readSensor(struct LOG* l, uint8_t pin);
