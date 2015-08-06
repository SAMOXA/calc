#ifndef COS_H
#define COS_H

#include <math.h>
#include <stdio.h>

void my_cos(void)
{
	double arg;

	scanf("%lf", &arg);
	printf("cos(%lf) = %lf\n", arg, cos(arg));
}

#endif
