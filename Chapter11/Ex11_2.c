#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)

int main(void) {

	// ex01
	/*
	char str[20];
	int cnt = 0;
	printf("영단어 입력 : ");
	scanf("%s", str);
	while (str[cnt] != '\0') {
		cnt++;
	}
	printf("입력받은 문자열 길이 : %d", cnt);
	
	// ex02
	char str[20];
	int length = 0;
	int i;
	printf("영단어 입력 : ");
	scanf("%s", str);
	while (str[length] != '\0') {
		length++;
	}
	for (i = length - 1; i >= 0; i--) {
		printf("%c ",str[i]);
	}
	*/
	// ex03
	char voca[100];
	int len = 0, i;
	char max = 0;

	printf("영단어 입력 : ");
	scanf("%s", voca);

	while (voca[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
		if (max < voca[i])
			max = voca[i];

	printf("가장 큰 아스키 코드 값 문자 : %c \n", max);
	return 0;
}