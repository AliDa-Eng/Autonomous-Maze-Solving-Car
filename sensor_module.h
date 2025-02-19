#ifndef SENSOR_MODULE_H
#define SENSOR_MODULE_H

#include <Arduino.h>

#define FRONT 0
#define LEFT 1
#define RIGHT 2

#define front_trig A4
#define front_echo A5
#define left_trig A2
#define left_echo A3
#define right_trig A0
#define right_echo A1

void setupSensors();
int getDistance(int sensor);

#endif