#include <stdio.h>
#include "multiplication.h"
#include "cos.h"
#include "modul2.h"
#include "tan.h"
#include "div.h"

int main() {
	int action = 0;
	char exitFlag = 0;
	while(exitFlag == 0){
		printf("1) Add\n");
		printf("2) Sub\n");
		printf("3) Mul\n");
		printf("4) Div\n");
		printf("5) Mod\n");
		printf("6) AddMod2\n");
		printf("7) Sin\n");
		printf("8) Cos\n");
		printf("9) Tan\n");
		printf("0) ArcTan\n");
		printf("10) Factorial\n");
		printf("11) Exit\n" );
		printf("Action: ");
		scanf("%d", &action);
		getchar();
		fflush(stdin);
		sync();
		switch(action) {
			case(1): printf("Not found\n"); break;
			case(2): printf("Not found\n"); break;
			case(3): multiplication(); break;
			case(4): Div(); break;
			case(5): printf("Not found\n"); break;
			case(6): modul2(); break;
			case(7): printf("Not found\n"); break;
			case(8): my_cos(); break;
			case(9): tang(); break;
			case(10): printf("Not found\n"); break;
			case(11): exitFlag = 1; break;
			default: printf("Wrong index\n");
		}
	}
	return 0;
}
