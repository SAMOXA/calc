#include "modul2.h"

void modul2(void) {
  unsigned int val1, val2;
  char buf[MODUL2_BUF_SIZE];

  printf("Addition modulo 2\n");
  printf("Print first argument: ");
  fgets(buf, MODUL2_BUF_SIZE, stdin);
  sscanf(buf, "%u", &val1);
  printf("Print second argument: ");
  fgets(buf, MODUL2_BUF_SIZE, stdin);
  sscanf(buf, "%u", &val2);
  printf("Result: %u\n", val1 ^ val2);
}