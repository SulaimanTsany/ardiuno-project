#include <ESP8266WiFi.h>;
#include <WiFiClient.h>;
#include <ThingSpeak.h>;
 
const char* ssid = "Gokil"; //Your Network SSID
const char* password = "latief2018"; //Your Network Password
 
int val;
int LDRpin = A0; //LDR Pin Connected at A0 Pin
 
WiFiClient client; 
unsigned long myChannelNumber = 724253; //Your Channel Number (Without Brackets) 
const char * myWriteAPIKey = "VK4ISS4III1KA6ZM"; //Your Write API Key
 
void setup() {
 
  Serial.begin(230400);
  delay(10);
  pinMode(15, OUTPUT);
     
  // Connect to WiFi network   
  WiFi.begin(ssid, password);   
  ThingSpeak.begin(client);   
}
  
void loop(){
  val = analogRead(LDRpin); //Read Analog values and Store in val variable
  Serial.println(val); //Print on Serial Monitor
  if (val < 100 ) {
    digitalWrite(15, LOW);
  } else {
    digitalWrite(15, HIGH);
  }
   
  delay(1000);
  ThingSpeak.writeField(myChannelNumber, 2, val, myWriteAPIKey); //Update in ThingSpeak 
}
