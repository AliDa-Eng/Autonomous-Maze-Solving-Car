/* AutonomousMazeCar.ino */
#include "motor_control.h"
#include "sensor_module.h"

void setup() {
    setupMotors();
    setupSensors();
    Serial.begin(9600);
}

void loop() {
    int front_wall = getDistance(FRONT);
    int left_wall = getDistance(LEFT);
    int right_wall = getDistance(RIGHT);

    Serial.print(right_wall);
    Serial.print(":");
    Serial.print(front_wall);
    Serial.print(":");
    Serial.println(left_wall);

    forward();

    if (right_wall <= 15 && left_wall <= 15 && front_wall > 25) {
        forward();
        delay(1000);
    }
    else if (left_wall > 15 && right_wall <= 15 && front_wall < 25) {
        Stop();
        delay(1000);
        left(125);
        delay(1000);
        if (right_wall < 15 && front_wall > 60) {
            forward();
            delay(5000);
        }
    }
    else if (right_wall > 15 && left_wall <= 15 && front_wall < 25) {
        Stop();
        delay(1000);
        right();
        delay(650);
        Stop();
        if (front_wall - left_wall > 50) {
            forward();
            delay(5000);
        }
    }
    else if (left_wall > 30 && right_wall > 30 && front_wall > 55) {
        Stop();
    }
}