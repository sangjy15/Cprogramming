#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int main(void) {
	int num1, num2, num3;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %o %x", &num1, &num2, &num3);

	printf("�Էµ� ���� 10���� ��� : ");
	printf("%d %d %d \n", num1, num2, num3);
	return 0;
}