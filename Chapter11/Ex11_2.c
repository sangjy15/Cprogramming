#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)

int main(void) {

	// ex01
	/*
	char str[20];
	int cnt = 0;
	printf("���ܾ� �Է� : ");
	scanf("%s", str);
	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("�Է¹��� ���ڿ� ���� : %d", cnt);
	*/
	// ex02
	char str[20];
	int length = 0;
	int i;
	printf("���ܾ� �Է� : ");
	scanf("%s", str);
	while (str[length] != '\0') {
		length++;
	}
	for (i = length - 1; i >= 0; i--) {
		printf("%c ",str[i]);
	}
	return 0;
}