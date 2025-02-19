// sensor_module.cpp 
#include "sensor_module.h"

void setupSensors() {
    pinMode(front_trig, OUTPUT);
    pinMode(front_echo, INPUT);
    pinMode(left_trig, OUTPUT);
    pinMode(left_echo, INPUT);
    pinMode(right_trig, OUTPUT);
    pinMode(right_echo, INPUT);
}

int getDistance(int sensor) {
    int trigPin, echoPin;
    if (sensor == FRONT) {
        trigPin = front_trig;
        echoPin = front_echo;
    } else if (sensor == LEFT) {
        trigPin = left_trig;
        echoPin = left_echo;
    } else {
        trigPin = right_trig;
        echoPin = right_echo;
    }
    
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(5);
    digitalWrite(trigPin, LOW);
    return pulseIn(echoPin, HIGH) / 29 / 2;
}
