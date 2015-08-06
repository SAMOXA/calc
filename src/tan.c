#include "tan.h"

void tang(void) {
    double value;
    
    printf("Input value: ");
    scanf("%lf", &value);
    printf("tang(%lf) = %lf", value, tan(value));
}