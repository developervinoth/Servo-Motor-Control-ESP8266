
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

#include <Servo.h>



char auth[] = "nFT0OAjoTul5gDUV66eQEW_Wu7QQBksi";



char ssid[] = "Test";

char pass[] = "12341234";

Servo servo;

BLYNK_WRITE(V3) {

servo.write(param.asInt());

}

void setup() {

// Debug console Serial.begin(115200);

Blynk.begin(auth, ssid, pass);

// You can also specify server:

//Blynk.begin(auth, ssid, pass, "blynk-cloud.com", 8442);

//Blynk.begin(auth, ssid, pass, IPAddress(192,168,1,100), 8442);

servo.attach(15); // 15 means D8 pin of ESP8266

}

void loop()

{

Blynk.run(); // You can inject your own code or combine it with other sketches.

}
