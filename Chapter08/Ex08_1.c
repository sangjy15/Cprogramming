#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int ex08_1(void) {
	// ex01
	/*
	int i;
	for (i = 1; i < 100; i++) {
		if (i % 7 == 0 || i % 9 == 0) {
			printf("%d ",i);
		}
	}
	
	// ex02
	int num1, num2, result;
	printf("두 정수를 입력하세요");
	scanf("%d %d", & num1, &num2);
	if (num1 < num2) {
		result = num2 - num1;
	}
	else {
		result = num1 - num2;
	}
	printf("두 수의 차 : %d", result);
	
	// ex03
	int num1, num2, num3;
	double avg;
	printf("국어, 영어, 수학 점수를 입력하세요");
	scanf("%d %d %d", &num1, &num2, &num3);
	avg = (num1 + num2 + num3) / 3;
	printf("평균 점수 : %f \n", avg);
	if (avg >= 90) {
		printf("A \n");
	}
	else if (avg >= 80) {
		printf("B \n");
	}
	else if (avg >= 70) {
		printf("C \n");
	}
	else if (avg >= 50) {
		printf("D \n");
	}
	else {
		printf("F \n");
	}
	*/
	// EX04
	int num1, num2, result;
	printf("두 정수를 입력하세요");
	scanf("%d %d", &num1, &num2);
	result = (num2 > num1) ? num2 - num1 : num1 - num2;

	printf("두 수의 차 : %d", result);
	return 0;
}