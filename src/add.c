#include "add.h"

void add(void) {
	long long int operand_1 = 0;
	long long int operand_2 = 0;
	char buf[BUF_SIZE] = {0}; // buf for parse input string
	
	printf("Enter operands:\n");
	
	memset(buf, 0, BUF_SIZE);
	if(fgets(buf, BUF_SIZE, stdin) == NULL){
		printf("fgets() error\n");
		exit(1);
	}
	operand_1 = atoi(buf);
	
	memset(buf, 0, BUF_SIZE);
	if(fgets(buf, BUF_SIZE, stdin) == NULL){
		printf("fgets() error\n");
		exit(2);
	}
	operand_2 = atoi(buf);
  	
  	printf("%lli + %lli = %lli\n", operand_1, operand_2, operand_1 + operand_2);
}
