#include <stdio.h>
void AddG(int val);
int num;

int globalVar(void) {
	printf("num: %d \n", num);
	AddG(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);
	return 0;
}

void AddG(int val) {
	num += val;
}