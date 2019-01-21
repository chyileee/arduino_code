#include <ESP8266WiFi.h>
#include <WiFiClient.h>
String place[5]={"test1","test2","place1","place2","place3"};
int index_p[5];

String combin_s,combin_string;
void setup() {
  Serial.begin(115200);
 // combin_s="1,3";
  //https://www.geeksforgeeks.org/extract-integers-string-c/
  //combin_s.length()
    Serial.println("\ninput string char+number:");
}
int k=0;
void loop() {

    if(Serial.available()) {
    // read the data until pause:
    while(1) {
      if(Serial.available()) {
        combin_string=Serial.readStringUntil(',');
        Serial.println(combin_string);
        Serial.println(k);
        index_p[k]=combin_string.toInt();
        k++;
      } 
      else {
        //combin_string=Serial.readStringUntil('\n');
        //Serial.println(combin_string);
        if(!Serial.available()) { break; }
      }
    }
    String string2;
    for(int n=0;n<k;n++) string2 +=place[index_p[k]];
    Serial.println(string2);
   }
   k=0;

  
 }
