#include <avr/pgmspace.h>
#include <Servo.h>

const uint8_t arr[] ={
255,248,3, 6, 3, 56, 96, 0, 28, 192, 1, 128, 1, 224, 0, 0, 3, 0, 6, 0, 192, 1, 0, 12, 0, 0, 14, 0, 128, 3, 0, 0, 14, 0, 0, 12, 0, 0, 192, 1, 0, 0, 6, 0, 0, 0, 7, 0, 0, 224, 0, 0, 0, 128, 1, 0, 0, 128, 1, 0, 0, 0, 24, 0, 0, 0, 96, 0, 0, 0, 0, 56, 0, 0, 0, 0, 7, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 56, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 128, 3, 0, 0, 0, 0, 128, 3, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 128, 1, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 128, 3, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 128, 3, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 128, 1, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
};
Servo myServo;


long int stepsTurntable=0;
double restTurntable=0;
long int stepsLinear=0;
double restLinear=0;
int index=0;
double rOld=0;
double tOld=0;
float relation= (45.0/7.0)*3200.0;



//placeholder
int draw=20;
int up=85;
int motLinear=11;
int motTurntable=6;
double pi=3.14159265359;


void setup() {
Serial.begin(9600);


myServo.attach(9); // attaches the servo on pin 9 to the servo object
myServo.write(up);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT);
pinMode(12,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(12,LOW);
digitalWrite(10,LOW);
digitalWrite(11,LOW);
}





int getPixel(){
char tmp=arr[((int)index/8)];

return ((tmp >> index%8) & 0x01);
}

void calculate_next_pixel(){
double t=4.0*sqrt((double)index);
double angleTurntable=t-tOld;
double r=0.5*t;
double distanceLinear=r-rOld;

stepsLinear=(distanceLinear*800)+restLinear;
restLinear=((distanceLinear*800.0)+restLinear)-(int)((distanceLinear*800.0)+restLinear);

 stepsTurntable=((angleTurntable/(2*pi))*relation)+restTurntable;
restTurntable=(((angleTurntable/(2*pi))*relation)+restTurntable)-(int)(((angleTurntable/(2*pi))*relation)+restTurntable);
rOld=r;
tOld=t;

}

void drawPixel(){


//myServo.write(up);
}

void drive(){


while(stepsLinear>0 || stepsTurntable>0 ){
if(stepsLinear>0){
digitalWrite(motLinear, HIGH);
stepsLinear--;
}
if(stepsTurntable>0){
digitalWrite(motTurntable, HIGH);
stepsTurntable--;
}

delay(1);
digitalWrite(motLinear, LOW);
digitalWrite(motTurntable, LOW);
delay(1);

}

}


void loop() {
  int s=0;
calculate_next_pixel();
Serial.print (stepsTurntable);
Serial.println (stepsLinear);

drive();
//myServo.write(draw);
//drawPixel();
//getPixel();
if(getPixel()>0){
myServo.write(draw);
delay(150);
myServo.write(up);

}
//delay(1000);
index++;

//myServo.write(up);
if (index>sizeof(arr)){
  s=1;
}
while(s==1){
  
}

}




// 1mm linear== 800steps
// 2 pi==3000*45/7 steps == 1 rotation







 
 



