#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "calcu.h"

extern int input();
extern int calcu(int a,int b);

int main(int argc, char ** argv){
	
	int input_num_1 = input();
	int input_num_2 = input();

	printf("input over\n");
	int sum;
	sum = calcu(input_num_1, input_num_2);
	printf("calcu successful ,the sum is :%d\n",sum);
	return 0;
}
