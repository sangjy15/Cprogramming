#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int simpleAdd(void) {
	int result;
	int num1, num2;

	printf("정수 one : ");
	int temp = scanf("%d", &num1);
	printf("정수 two : ");
	int temp1 = scanf("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d \n", num1, num2, result);
	return 0;
}