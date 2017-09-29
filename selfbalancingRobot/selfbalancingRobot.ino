#include <PID_v1.h>


double Setpoint, Input, Output;

double Kp=2, Ki=5, Kd=1;
PID gyroPID(&Input, &Output, &Setpoint, Kp, Ki, Kd, DIRECT);



void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
//test 
