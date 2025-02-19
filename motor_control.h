#ifndef MOTOR_CONTROL_H
#define MOTOR_CONTROL_H

#include <Arduino.h>

#define en1 9
#define in1 4
#define in2 5
#define en2 3
#define in3 6
#define in4 7

void setupMotors();
void forward();
void Stop();
void left(int speed);
void right();
void back();

#endif