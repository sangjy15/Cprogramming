#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int main(void) {
	// ex01
	/*
	int num1;
	printf("���� ������ �Է� �ϼ��� : ");
	scanf("%d", &num1);
	int i = 0;
	while (i < num1) {
		printf("Hello world! \n");
		i++;
	}
	
	// ex02
	int num1;
	printf("���� ������ �Է� �ϼ��� : ");
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
		printf("������ �Է��ϼ��� \n");
		scanf("%d", &num);
		result += num;
	}
	printf("�� �� : %d", result);
	
	// ex04
	int num;
	int i = 9;
	printf("������ �Է��ϼ��� \n");
	scanf("%d", &num);
	while (i > 0) {
		printf("%d x %d = %d \n", num, i, num * i);
		i--;
	}
	*/
	// ex05
	// 1. �� ���� ������ �Է����� ����ڿ��� ����, �� ����ŭ �Է� ����
	// 2. ��� ���� �Ҽ��� ���ϱ��� ���
	int num;
	int i = 0;
	int sum = 0;
	double result;
	printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? \n");
	scanf("%d", &num);
	while (i < num) {
		scanf("%d", &sum);
		sum += sum;
		i++;
	}
	result = sum / num;
	printf("�Է� ���� ��� : %f", result);
	return 0;
}