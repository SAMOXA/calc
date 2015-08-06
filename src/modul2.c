#include "modul2.h"

void modul2(void) {
  unsigned int val1, val2;

  printf("Addition modulo 2\n");
  printf("Print first argument: ");
  scanf("%u", &val1);
  printf("Print second argument: ");
  scanf("%u", &val2);
  printf("Result: %u\n", val1 ^ val2);
}