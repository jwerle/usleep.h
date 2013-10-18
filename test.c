
#include <stdio.h>
#include <stdlib.h>
#include "usleep.h"

int
main (void) {
  printf("start\n");
  usleep(1000000);
  printf("end\n");
  return 0;
}
