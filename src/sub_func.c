#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <float.h>

#define FORMAT "%lf"
#define VAL_1 "a"
#define VAL_2 "b"
#define STR_ENTER(v)	"Enter <%s> value: ",v
#define STR_RESULT(r)	"Result: " FORMAT "\n",r
#define STR_ERROR(s)	"Warn: %s.\n",s
#define STR_ERROR_RESULT(r) "Warn: incorrect result: " FORMAT "\n",r

double get_value(char *name)
{
	double val = 0.0;
	fprintf(stdout, STR_ENTER(name));
	if (scanf("%lf", &val) == 0) val = 0;
	return val;
}

int is_num(double a)
{
	return (a == a) && ((a - a) == 0.0);
}

void sub_func(void)
{
	double a = get_value(VAL_1);
	double b = get_value(VAL_2);

	if (!is_num(a) || !is_num(b)) {
		fprintf(stderr, STR_ERROR("incorrect values"));
		return;
	}

	double r = a - b;

	if (!is_num(r))
		fprintf(stderr, STR_ERROR_RESULT(r));
	else
		fprintf(stdout, STR_RESULT(a-b));
}
