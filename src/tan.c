#include "tan.h"
#include <string.h>
#include <stdlib.h>

void tang(void) {
    double value;
    char str[100];
        
    printf("Input value: ");
    fgets(str, 100, stdin);
    str[strlen(str) - 1] = '\0';
    value = atof(str);
    
    printf("tang(%lf) = %lf", value, tan(value));
}
