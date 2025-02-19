/* motor_control.cpp */
#include "motor_control.h"

void setupMotors() {
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);
    pinMode(in3, OUTPUT);
    pinMode(in4, OUTPUT);
    pinMode(en1, OUTPUT);
    pinMode(en2, OUTPUT);
}

void forward() {
    analogWrite(en1, 255);
    analogWrite(en2, 255);
    digitalWrite(in1, 0);
    digitalWrite(in2, 75);
    digitalWrite(in3, 0);
    digitalWrite(in4, 75);
}

void Stop() {
    analogWrite(en1, 0);
    analogWrite(en2, 0);
    digitalWrite(in1, 0);
    digitalWrite(in2, 0);
    digitalWrite(in3, 0);
    digitalWrite(in4, 0);
}

void left(int speed) {
    analogWrite(en1, 200);
    analogWrite(en2, 200);
    digitalWrite(in1, 0);
    digitalWrite(in2, speed);
    digitalWrite(in3, 0);
    digitalWrite(in4, 0);
}

void right() {
    analogWrite(en1, 200);
    analogWrite(en2, 200);
    digitalWrite(in1, 0);
    digitalWrite(in2, 0);
    digitalWrite(in3, 0);
    digitalWrite(in4, 75);
}

void back() {
    analogWrite(en1, 200);
    analogWrite(en2, 200);
    digitalWrite(in1, 75);
    digitalWrite(in2, 0);
    digitalWrite(in3, 75);
    digitalWrite(in4, 0);
}