#include "tan.h"

void tang(void) {
    double value;
    printf("Введите число: ");
    
    scanf("%lf", &value);
    printf("tan(%f) = %f\n", value, tan(value));    
} 
