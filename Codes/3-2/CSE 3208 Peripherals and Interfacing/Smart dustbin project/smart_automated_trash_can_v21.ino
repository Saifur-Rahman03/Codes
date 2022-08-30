// C++ code
//
#include <math.h>
#include <Servo.h>

Servo servo1;
const int trigPinOut = 4;
const int echoPinOut = 5;
long distance;
long duration;
const int trigPinIn = 7;
const int echoPinIn = 8;
int red = 11;
int blue = 10;
int green = 9;

void setup()
{
  Serial.begin(9600);
  servo1.attach(3);
  servo1.write(0);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
}
void loop() {
  // establish variables for duration of the ping, and the distance result
  // in inches and centimeters:
  long durationIn, inchesIn, cmIn;
  long durationOut, inchesOut, cmOut;

      
  
  durationIn = ultraIn();
  // convert the time into a distance
  inchesIn = microsecondsToInches(durationIn); //inside sensor
  cmIn = microsecondsToCentimeters(durationIn); //inside sensor
  delay(1000);
  
  durationOut = ultraOut();  
  inchesOut = microsecondsToInches(durationOut); //outside sensor
  cmOut = microsecondsToCentimeters(durationOut); //outside sensor
   
  if(inchesIn < 3) {
  	digitalWrite(red, HIGH);
    digitalWrite(blue, LOW);
    digitalWrite(green, LOW);
  }
  else if(inchesIn > 7) {
  	digitalWrite(red, LOW);
    digitalWrite(blue, LOW);
    digitalWrite(green, HIGH);
    
    
    rotate(inchesOut);
  }
  else if(inchesIn >= 3 && inchesIn <= 7) {
  	digitalWrite(red, LOW);
    digitalWrite(blue, HIGH);
    digitalWrite(green, LOW);
    	
    rotate(inchesOut);
  }
  
  Serial.print(inchesIn);
  Serial.print("in, ");
  Serial.print(cmIn);
  Serial.print("cm");
  Serial.println();

  delay(100);
}
long ultraIn(){
  // The TRIG))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  
  // The echo pin is used to read the signal from the PING))): a HIGH pulse
  // whose duration is the time (in microseconds) from the sending of the ping
  // to the reception of its echo off of an object.

  pinMode(trigPinIn, OUTPUT);
  digitalWrite(trigPinIn, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinIn, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinIn, LOW);
  pinMode(echoPinIn, INPUT);
  duration = pulseIn(echoPinIn, HIGH);
  return duration;
}
long ultraOut(){
  // The TRIG))) is triggered by a HIGH pulse of 2 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  
  // The echo pin is used to read the signal from the PING))): a HIGH pulse
  // whose duration is the time (in microseconds) from the sending of the ping
  // to the reception of its echo off of an object.

  pinMode(trigPinOut, OUTPUT);
  digitalWrite(trigPinOut, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPinOut, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPinOut, LOW);
  pinMode(echoPinOut, INPUT);
  duration = pulseIn(echoPinOut, HIGH);
  return duration;
}

long microsecondsToInches(long microseconds) {
  // According to Parallax's datasheet for the PING))), there are 73.746
  // microseconds per inch (i.e. sound travels at 1130 feet per second).
  // This gives the distance travelled by the ping, outbound and return,
  // so we divide by 2 to get the distance of the obstacle.
  // See: https://www.parallax.com/package/ping-ultrasonic-distance-sensor-downloads/
  return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
  // The speed of sound is 340 m/s or 29 microseconds per centimeter.
  // The ping travels out and back, so to find the distance of the object we
  // take half of the distance travelled.
  return microseconds / 29 / 2;
}
void rotate(long dist)
{
   if(dist < 10){        //distance less than 7 inches
   		servo1.write(180);
    	Serial.println(dist);
    	delay(3000);
    	servo1.write(0);
  	} 
}
