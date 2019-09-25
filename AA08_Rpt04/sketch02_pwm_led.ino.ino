/*
  Blink by AA00
  Turns an LED on for one second, then off for one second, repeatedly.
*/
int pwm = 0;  
int led=3;
// the setup function runs once when you press reset or power the board
void setup() {
//Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
 pwm =random(0,255);
//  Serial.println(pwm);
 pwmLed(led,pwm);
}

void pwmLed(int led, int pwmValue) {
  analogWrite(led,pwmValue);
  delay(10);
}
