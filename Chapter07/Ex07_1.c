#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int main(void) {
	// ex01
	/*
	int num1;
	printf("양의 정수를 입력 하세요 : ");
	scanf("%d", &num1);
	int i = 0;
	while (i < num1) {
		printf("Hello world! \n");
		i++;
	}
	
	// ex02
	int num1;
	printf("양의 정수를 입력 하세요 : ");
	scanf("%d", &num1);
	int i = 1;
	while (i <= num1) {
		printf("%d \n", 3 * i);
		i++;
	}
	
	// ex03
	int num = 1;
	int result = 0;
	
	while (num != 0) {
		printf("정수를 입력하세요 \n");
		scanf("%d", &num);
		result += num;
	}
	printf("총 합 : %d", result);
	
	// ex04
	int num;
	int i = 9;
	printf("정수를 입력하세요 \n");
	scanf("%d", &num);
	while (i > 0) {
		printf("%d x %d = %d \n", num, i, num * i);
		i--;
	}
	*/
	// ex05
	// 1. 몇 개의 정수를 입력할지 사용자에게 묻고, 그 수만큼 입력 받음
	// 2. 평균 값은 소수점 이하까지 계산
	int num;
	int i = 0;
	int sum = 0;
	double result;
	printf("몇 개의 정수를 입력하시겠습니까? \n");
	scanf("%d", &num);
	while (i < num) {
		scanf("%d", &sum);
		sum += sum;
		i++;
	}
	result = sum / num;
	printf("입력 값의 평균 : %f", result);
	return 0;
}