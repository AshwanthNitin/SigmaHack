//Code to detect the smoke generated from the wildfire
int smokeA0=A0;
int buzzer =11;
float sensorValue;
void setup() 
{
  pinMode(smokeA0,INPUT);
  Serial.begin(9600);
  Serial.println("Gas sensor warming up!");
  delay(20000);
}
void loop() 
{
  sensorValue=analogRead(smokeA0);
  if(sensorValue > 300)
  {
    Serial.print(" | Smoke detected!")
  }
  else
  {
     Serial.print(" | Smoke  not detected!");
  }
  delay(2000);
}
