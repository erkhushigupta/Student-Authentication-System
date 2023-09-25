#include <Adafruit_Fingerprint.h>

#if (defined( AVR ) || defined(ESP8266)) && !defined( AVR_ATmega2560 ) SoftwareSerial mySerial(2, 3);
#else
#define mySerial Serial1 #endif
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);

void setup() 
{
int ledGreen = 7; int ledRed = 6;
int buzzer = 5;
Serial.begin(9600); 
while (!Serial)
delay(2000);
Serial.println("\n\nAdafruit finger detect test");
finger.begin(57600); 
delay(5);
if (finger.verifyPassword()) { Serial.println("Found fingerprint sensor!");
} 
else {
Serial.println("Did not find fingerprint sensor :("); 
while (1) { delay(1); }
}
Serial.println(F("Reading sensor parameters")); 
finger.getParameters();
Serial.print(F("Status: 0x")); 
Serial.println(finger.status_reg, HEX); 
Serial.print(F("Sys ID: 0x")); 
Serial.println(finger.system_id, HEX); 
Serial.print(F("Capacity: ")); 
Serial.println(finger.capacity); 
Serial.print(F("Security level: ")); 
Serial.println(finger.security_level); 
Serial.print(F("Device address: ")); 
Serial.println(finger.device_addr, HEX); 
Serial.print(F("Packet len: ")); 
Serial.println(finger.packet_len); 
Serial.print(F("Baud rate: ")); 
Serial.println(finger.baud_rate);
finger.getTemplateCount();
if (finger.templateCount == 0) {
Serial.print("Sensor doesn't contain any fingerprint data. Please run the 'enroll' example.");
} 
else {
Serial.println("Waiting for valid finger..."); 
Serial.print("Sensor contains "); 
Serial.print(finger.templateCount); 
Serial.println(" templates");
}
}

void loop()
{
pinMode(7, OUTPUT); 
pinMode(6, OUTPUT); 
pinMode(5, OUTPUT); 
getFingerprintID(); 
delay(2000);
}
uint8_t getFingerprintID() { uint8_t p = finger.getImage(); 
switch (p) {
case FINGERPRINT_OK:
Serial.println("Image taken"); 
break;
case FINGERPRINT_NOFINGER:
Serial.println("No finger detected"); 
return p;
case FINGERPRINT_PACKETRECIEVEERR:
Serial.println("Communication error"); 
return p;
case FINGERPRINT_IMAGEFAIL:
Serial.println("Imaging error"); 
return p;
default:
Serial.println("Unknown error"); 
return p;
}
p = finger.image2Tz(); 
switch (p) {
case FINGERPRINT_OK:
Serial.println("Image converted"); 
break;
case FINGERPRINT_IMAGEMESS:
Serial.println("Image too messy"); 
return p;
case FINGERPRINT_PACKETRECIEVEERR:
Serial.println("Communication error"); 
return p;
case FINGERPRINT_FEATUREFAIL:
Serial.println("Could not find fingerprint features"); 
return p;
case FINGERPRINT_INVALIDIMAGE:
Serial.println("Could not find fingerprint features"); 
return p;
default:
Serial.println("Unknown error"); 
return p;
}
p = finger.fingerSearch(); 
if (p == FINGERPRINT_OK) {
Serial.println("Found a print match!"); 
digitalWrite(7, HIGH);
digitalWrite(6, LOW); digitalWrite(5, LOW);
} else if (p == FINGERPRINT_PACKETRECIEVEERR) {
Serial.println("Communication error"); 
return p;
} else if (p == FINGERPRINT_NOTFOUND) {
Serial.println("Did not find a match"); 
digitalWrite(6, HIGH);
digitalWrite(7, LOW); digitalWrite(5, HIGH); 
return p;
} 
else {
Serial.println("Unknown error"); 
return p;
}
Serial.print("Found ID #");
Serial.print(finger.fingerID); 
Serial.print(" with confidence of "); 
Serial.println(finger.confidence);
int getFingerprintIDez() { uint8_t p = finger.getImage();
if (p != FINGERPRINT_OK) return -1;
p = finger.image2Tz();
if (p != FINGERPRINT_OK) return -1;
p = finger.fingerFastSearch();
if (p != FINGERPRINT_OK) return -1;
Serial.print("Found ID #"); 
Serial.print(finger.fingerID); 
Serial.print(" with confidence of "); 
Serial.println(finger.confidence);
return finger.fingerID;
}
return finger.fingerID;
}
