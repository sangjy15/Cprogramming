#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int main(void) {
	// ex01
	/*
	int num, cnt = 0, result = 0;
	
	while (cnt < 5) {
		printf("1 이상의 정수를 입력하세요 \n");
		scanf("%d", &num);
		while (num < 1) {
			printf("다시 입력하세요 \n");
			scanf("%d", &num);
		}
		result += num;
		cnt++;
	}
	printf("총 합 : %d", result);
	*/
	// ex02
	int cnt = 0, i = 0;
	while (cnt < 5) {
		while (i < cnt) {
			printf("o");
			i++;
		}
		i = 0;
		printf("*\n");
		cnt++;
	}
	return 0;
}