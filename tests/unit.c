#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "libphf.h"


int main (int argc, char **argv)
{
  int i;
  uint32_t value = 0xfffffffb,
           hash = 0,
           level = 0;

  for (i = 0; i < 10; i++) {
    hash = phf_lookup(&value, sizeof(value), level);
    level = hash;
    printf("%#x => %#x\n", value, hash);
  }

  return 0;
}
