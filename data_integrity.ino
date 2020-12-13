#include "purity.h"

uint8_t data[5] = {200,201,202,203,204};

void setup() 
{
  Serial.begin(250000);

  Serial.println(F("Setup done"));
}

void loop() 
{
  Serial.print(F("checksum: "));
  Serial.println(checksum(data,sizeof(data)));
  delay(3000);
}
