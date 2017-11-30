#include "Arduino.h"
//The setup function is called once at startup of the sketch

const char* hello = "Hello Git";

void setup()
{
// Add your initialization code here
}

// The loop function is called in an endless loop
void loop()
{
//Add your repeated code here

	Serial.print(hello);

}
