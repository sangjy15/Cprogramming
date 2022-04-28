#include <stdio.h>

int main(void) {
	/*
	int num = 10;
	int* ptr1 = &num;
	int* ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);
	*/
	int num1 = 10;
	int num2 = 20;
	

	int* ptr1 = &num1;
	int* ptr2 = &num2;
	int* temp;

	(*ptr1) += 10;
	(*ptr2) -= 20;

	printf("num1 = %d ,num2 = %d \n", num1, num2);

	temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;

	printf("ptr1 = %d ,ptr2 = %d \n", *ptr1, *ptr2);
	return 0;
}