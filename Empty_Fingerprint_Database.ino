#include <Adafruit_Fingerprint.h>

#if (defined( AVR ) || defined(ESP8266)) && !defined( AVR_ATmega2560 ) SoftwareSerial mySerial(2, 3);
#else
#define mySerial Serial1 #endif
Adafruit_Fingerprint finger = Adafruit_Fingerprint(&mySerial);

void setup()
{
Serial.begin(9600); 
while (!Serial); delay(100);
Serial.println("\n\nDeleting all fingerprint templates!"); 
Serial.println("Press 'Y' key to continue");
while (1) {
if (Serial.available() && (Serial.read() == 'Y')) { break;
}
}
finger.begin(57600);
if (finger.verifyPassword()) { Serial.println("Found fingerprint sensor!");
} 
else {
Serial.println("Did not find fingerprint sensor :(");
while (1);
}
finger.emptyDatabase();
Serial.println("Now database is empty :)");
}
void loop() {
}