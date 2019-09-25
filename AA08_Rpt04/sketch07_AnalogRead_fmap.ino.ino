/*
  Blink by AA00
  Turns an LED on for one second, then off for one second, repeatedly.
*/

// the setup function runs once when you press reset or power the board
void setup() {
Serial.begin(9600);
}

// the loop function runs over and over again forever
void loop() {
  int sensorValue = analogRead(A0);

// float voltage = map(sensorValue,0,1023,0.0,5.0); 
// float voltage = sensorValue*(5.0/1023.0);
   float voltage = f_map(sensorValue,0,1023,0.0,5.0);
   //Voltage
  Serial.print("AA08,Present V (0~5.0): ");
  Serial.println(voltage);
  delay(500);
}
float f_map(long x,long in_min, long in_max, float out_min,float out_max)
{
  return (x-in_min)*(out_max-out_min) / (in_max - in_min)+ out_min;
}
