#include <I2Cdev.h>

#include <helper_3dmath.h>
#include <MPU6050.h>
#include <MPU6050_6Axis_MotionApps20.h>
#include <MPU6050_9Axis_MotionApps41.h>


#if I2Dev_IMPLEMENTATION == I2CDEV_ARDUINO_WIRE
  #include <Wire.h>
#endif



#include <Servo.h>

#include <PID_v1.h>


MPU650 mpu;

#define INTERRUPT_PIN 2
#define LED_PIN 9
bool blinkState = false;

bool dmpReady = false;
uint8_t mpuIntStatus;
uint8_t devStatus;
uint8_t packetSize;
uint8_t fifoCount;
uint8_t fifoBuffer[64];

Qua


double Setpoint, Input, Output;

double Kp=2, Ki=5, Kd=1;
PID pid(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);



void setup() {






  pid.setMode(AUTOMATIC);
  pid.setSampleTime(10);
  pid.setOutputLimits(-100, 100);
}



void loop() {


}
