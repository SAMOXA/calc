#ifndef COS_H
#define COS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 16 //size buffer str
#define ASCII_CODE_POINT 0x2E //ascii code symbol "."
#define ASCII_CODE_0 0x30 //ascii code symbol "0"
#define ASCII_CODE_9 0x39 //ascii code symbol "9"


void my_cos(void)
{
	double arg;
	int i;
	char str[BUF_SIZE] = {0};

	printf("enter argument of the function cos: ");
	if (fgets(str, BUF_SIZE, stdin) == NULL)
		return;
	for (i = 0; i < strlen(str) - 1; i++) {
		if (str[i] < ASCII_CODE_0 || str[i] > ASCII_CODE_9) {
			if (str[i] != ASCII_CODE_POINT) {
				printf("entered not correct symbol\n");
				return;
			}
		}
	}
	arg = atof(str);
	printf("cos(%lf) = %lf\n", arg, cos(arg));
}

#endif
