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

	char buf [SIZE] = {0}; /* buf for parse input string */

	/* get params */
	printf ("multiplication function!\n");

	/* get a */
	printf ("input first var: ");
	fgets (buf, SIZE, stdin);
	a = atoi(buf);	

	/* get b */
	bzero (buf, SIZE);
	printf ("input second var: ");
	fgets (buf, SIZE, stdin);
	b = atoi(buf);	

	/* multiplication */
	res = a * b;

	/* print result */
	printf ("a * b = %d\n", res);

	return 0;
}
