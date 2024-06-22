#include "DHT.h"
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

#define BLYNK_TEMPLATE_ID "TMPL2syJsqco"
#define BLYNK_TEMPLATE_NAME "Bùi Xuân Danh"
#define BLYNK_AUTH_TOKEN "MHqE61OVvfXlocwfWX70cZ_buBCa_kh6"

const char *ssid = "HoaCuc";
const char *password = "danh1412";
char auth[] = BLYNK_AUTH_TOKEN;

#define dhttype DHT11
#define dhtpin 25
DHT dht(dhtpin, dhttype);

int relay1 = 23;
int relay2 = 19;
int relay3 = 18;
int relay4 = 4;
int relay5 = 2;
int relay6 = 15;
void setup() {
  // put your setup code here, to run once:
  dht.begin();
  Serial.begin(9600);
  Blynk.begin(auth, ssid, password);
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  pinMode(relay5, OUTPUT);
  pinMode(relay6, OUTPUT);
}

BLYNK_WRITE(V3){
  if (param.asInt() == 1){
    digitalWrite(relay1, HIGH);
  } else{
    digitalWrite(relay1, LOW);
  }
}
BLYNK_WRITE(V4){
  if (param.asInt() == 1){
    digitalWrite(relay2, HIGH);
  } else{
    digitalWrite(relay2, LOW);
  }
}
BLYNK_WRITE(V5){
  if (param.asInt() == 1){
      digitalWrite(relay3, HIGH);
  } else{
    digitalWrite(relay3, LOW);
  }
}
BLYNK_WRITE(V6){
  if (param.asInt() == 1){
    digitalWrite(relay4, HIGH);
  } else{
    digitalWrite(relay4, LOW);
  }
}
BLYNK_WRITE(V7){
  if (param.asInt() == 1){
    digitalWrite(relay5, HIGH);
  } else{
    digitalWrite(relay5, LOW);
  }
}
BLYNK_WRITE(V8){
  if (param.asInt() == 1){
    digitalWrite(relay6, HIGH);
  } else{
    digitalWrite(relay6, LOW);
  }
}
BLYNK_CONNECTED(){
  Blynk.syncVirtual(V3);
  Blynk.syncVirtual(V4);
  Blynk.syncVirtual(V5);
  Blynk.syncVirtual(V6);
  Blynk.syncVirtual(V7);
  Blynk.syncVirtual(V8);
}
void loop() {
  Blynk.run();
  float h = dht.readHumidity();
  float t = dht.readTemperature();
  Blynk.virtualWrite(V1, t);
  Blynk.virtualWrite(V2, h);
  // put your main code here, to run repeatedly:
}
