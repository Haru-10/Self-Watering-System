const int dry = 3610;// 3610
const int wet = 1370;//1370
const int Soil_Sensor_pin = 32;
const int Waterer_pin = 21;
const int Damp = 87; // How damp in percentage

void setup() {
  // Starting serial, troubleshooting+ other data
  Serial.begin (115200);
  pinMode(Waterer_pin, OUTPUT);
  // This is built in esp32 led, will keep for prototypes
  pinMode(2, OUTPUT);
}

void loop() {

  //These lines read the sensor from the sensor, and turns it into a percentage of how wet the soil is-- Will help in mapping later on
  int Sensor_read = analogRead(Soil_Sensor_pin);
  int Wet_Percentage = map(Sensor_read, wet, dry, 100, 0);
  Serial.println(Wet_Percentage);
  
  // Open these brackets after figuring out what damp is and what dry is
   if (Wet_Percentage < Damp)
  {
    digitalWrite(Waterer_pin, HIGH);
    delay (2000);
    digitalWrite(Waterer_pin, LOW);
  }
  else {
    digitalWrite(2, HIGH);
    delay(1000);
    digitalWrite(2, LOW);
      }
  //Wait 5 minutes before going again
  delay(300000); 


}
