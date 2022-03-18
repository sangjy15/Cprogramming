#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int main(void) {
	/*
	int total = 0, num = 0;

	do
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("합계: %d \n", total);
	
	// 01-1
	int total = 0, num = 1;
	while (num != 0) {
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);
	
	// 01-2
	int total = 0, num = 0;
	printf("정수 입력(0 to quit): ");
	scanf("%d", &num);
	total += num;
	while (num != 0) {
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total += num;
	}
	printf("합계: %d \n", total);
	
	// ex02
	int num = 0, total = 0;
	do {
		total += num;
		num += 2;
	} while (num <= 100);
	printf("total sum(0 to 100): %d", total);
	*/
	// ex03
	int cur = 2;
	int is = 0;
	do {
		is = 1;
		do {
			printf("%d x %d = %d \n", cur, is, cur * is);
			is++;
		} while (is < 10);
		cur++;
		printf("*****************\n");
	} while (cur < 10);
	return 0;
}