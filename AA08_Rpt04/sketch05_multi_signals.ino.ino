/*
  Blink by AA00
  Turns an LED on for one second, then off for one second, repeatedly.
*/
int humi = 0;  
int temp = 0;  
int lux = 0;  
int ledR=3;
int ledG=5;
int ledB=6;
// the setup function runs once when you press reset or power the board
void setup() {
Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
 humi =random(-10,30);
 temp = random(40,90);
 lux = random(150,250);
 if(humi<0)
 {
  humi=0;
 }
 pwmLed(ledR, humi);
 pwmLed(ledG, temp);
 pwmLed(ledB, lux);
 Serial.print("AA08,Ambient lux: ");
 Serial.print(lux);
 Serial.print(" , Humiditiy: ");
 Serial.print(humi);
 Serial.print(" , Temperature: ");
 Serial.println(temp);
 delay(10);
 
 

   
}

void pwmLed(int led, int pwmValue) {
  analogWrite(led,pwmValue);
  delay(10);
}
