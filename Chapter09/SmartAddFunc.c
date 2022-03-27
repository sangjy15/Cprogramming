#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int Add2(int num1, int num2) { // 인자전달 ㅇ, 반환 값 ㅇ
	return num1 + num2;
}

void ShowAddResult(int num) { // 인자전달 o, 반환값 x
	printf("덧셈결과 출력 %d \n", num);
}

int ReadNum(void) { // 인자전달 x, 반환값 o
	int num;
	scanf("%d", &num);
	return num;
}

void HowToHowThisProg(void) { // 인자전달 x, 반환값 x
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요 \n");
}

int main2(void) {
	int result, num1, num2;
	HowToHowThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add2(num1, num2);
	ShowAddResult(result);
	return 0;
}