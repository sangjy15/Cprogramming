#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int main(void) {
	/*
	// ex01
	int num1, num2, i, sum = 0;
	printf("�� ������ �Է� �ϼ���");
	scanf("%d %d", &num1, &num2);
	for (i = num1; i <= num2; i++) {
		sum += i;
	}
	printf("sum : %d", sum);
	*/
	// ex02
	int num, i, result = 1;
	printf("������ �Է� �ϼ���");
	scanf("%d", &num);
	for (i = 1; i <= num; i++) {
		result *= i;
	}
	printf("��� : %d", result);
	return 0;
}