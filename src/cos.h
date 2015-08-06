#ifndef COS_H
#define COS_H

#include <math.h>

void my_cos(void)
{
	double arg;

	scanf("%f", &arg);
	printf("cos(%f) = %f\n", arg, cos(arg));
}

#endif
