#ifndef COS_H
#define COS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define BUF_SIZE 16

void my_cos(void)
{
	double arg;
	char str[BUF_SIZE] = {0};

	printf("enter argument of the function cos: ");
	fgets(str, BUF_SIZE, stdin);
	arg = atof(str);
	if (arg <= 1 && arg >= -1)
		printf("cos(%lf) = %lf\n", arg, cos(arg));
	else
		printf("error: argument not belong interval [-1;1]\n");
}

#endif
