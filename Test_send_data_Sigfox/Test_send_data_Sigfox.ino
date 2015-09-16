#include <SoftwareSerial.h>
#include "Akene.h"

int data = 666;

void setup() {
  // put your setup code here, to run once:
  Akene.begin();
 
  Akene.send(&data, sizeof(data));
}

void loop() {
  // put your main code here, to run repeatedly:

}
