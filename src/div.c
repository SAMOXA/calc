#include "div.h"

void Div(void)
{
    double valA=0,valB=0;
    char end_symbol=0;
    int res=0;

    printf("Input two values for division:\n");

    res=scanf("%lf %lf%c",&valA,&valB,&end_symbol);
    sync();

    if(end_symbol!='\n'){
	printf("Incorrect values\n");
	return;
    }

    if(valB==0){
	printf("%lf / %lf = Infinity\n",valA,valB);
	return;
    }

    printf("%lf / %lf = %lf\n",valA,valB,valA/valB);

    return;
}