#include "mod.h"

void mod(void) {
	int a, b;
	printf("Input first num: ");
	scanf("%d", &a);
	printf("Input second num: ");
	scanf("%d", &b);
	printf("%d mod %d = %d\n", a, b, (a%b));
}

