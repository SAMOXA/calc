#include <stdio.h>
#include <math.h>

#define PI 3.14159265

void sinus() {
	double a;
	printf("Func sin\nInput: \n");
	scanf("%lf", &a);
	printf("Out: %lf\n", sin(a * (PI/180)));
}
