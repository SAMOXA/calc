#include "factorial.h"

void factorial(void)
{
    int count = 0, fact = 0;
    
    printf("\n\n");
    printf("Enter a positive decimal number: ");
    scanf("%d", &fact);
    printf("\n\n");
    
    if((fact == 0) || (fact == 1)) {
	printf("Result: 1\n\n");
    } else {
	count = fact;
	
	while(count != 1) {
	    count--;
	    fact = fact * count;
	}
	
	printf("Result: %d\n\n", fact);
    }
}
