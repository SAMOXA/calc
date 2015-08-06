/*
 * multiplication function
 * vars: none
 * retval: 0 if success
 */

#include "multiplication.h"

int multiplication(void)
{
	int a, b;
	int res;

	char buf [SIZE]; /* buf for parse input string */

	/* get params */
	printf ("multiplication function!\n")
	printf ("input first var: ");
	fgets (buf, SIZE, stdin);
	a = atoi	

	/* multiplication */
	res = a*b;

	/* print result */
	printf ("a * b = %d\n", res);

	return 0;
}
