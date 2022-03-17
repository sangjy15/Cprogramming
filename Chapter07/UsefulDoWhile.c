#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int useDoWhile(void) {
	int total = 0, num = 0;

	do
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계: %d \n", total);
	return 0;
}