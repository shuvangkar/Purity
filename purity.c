#include "purity.h"


uint8_t checksum(void *buffer, uint8_t len)
{
  uint8_t *p = (uint8_t*)buffer;
  
  uint16_t sum = 0;
  uint8_t i;
  for(i = 0; i< len; i++)
  {
    sum += (uint16_t)p[i];
  }
  return (uint8_t)sum;
}
