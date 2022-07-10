/*#include <SoftwareSerial.h>
#define BT_RX 3
#define BT_TX 2

SoftwareSerial bluetooth(2, 3);

void setup() {
  Serial.begin(9600);
  bluetooth.begin(9600);

}

void loop() {
  if(bluetooth.available()) {
    Serial.write(bluetooth.read());
  }
  if(Serial.available()) {
    bluetooth.write(Serial.read());
  }

}*/

#include "SoftwareSerial.h" 
#include <DFPlayer_Mini_Mp3.h>
         

SoftwareSerial mySerial(5, 4);    

void setup() {
  Serial.begin(9600);
  mySerial.begin(9600);
  mp3_set_serial(mySerial);
  delay(1);
  mp3_set_volume(30);
}

void loop() {
  mp3_play(1);
  delay(100000);
}
