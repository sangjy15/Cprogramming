#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int useDoWhile(void) {
	int total = 0, num = 0;

	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total += num;
	} while (num != 0);
	printf("�հ�: %d \n", total);
	return 0;
}