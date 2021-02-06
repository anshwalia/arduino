// Author : Ansh Walia
// Date   : 6th Feb, 2021 

#include<SoftwareSerial.h>

// TX Pin : 2 , RX Pin : 3
SoftwareSerial HC12(2,3);

void setup() {
  Serial.begin(9600);
  HC12.begin(9600);
}

void loop() {
  while(Serial.available()){
    HC12.write(Serial.read());
  }
  while(HC12.available()){
    Serial.print(HC12.read());
  }
}
