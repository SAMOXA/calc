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
	if (fgets (buf, SIZE, stdin)==0)
		return 1;
	a = atoi(buf);	

	/* get b */
	bzero (buf, SIZE);
	printf ("input second var: ");
	if (fgets (buf, SIZE, stdin)==0)
		return 1;
	b = atoi(buf);	

	/* multiplication */
	res = a * b;

	/* print result */
	printf ("a * b = %d\n", res);

	return 0;
}
