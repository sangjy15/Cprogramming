#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
// 01
void Chanllenge01() {
	int num;
	printf("10진수 정수 입력 : ");
	scanf("%d", &num);

	printf("16진수 정수 출력 : %x \n", num);
}
// 02
void CompareNum(int num1, int num2) {
	int i, j;
	for (i = num1; i <= num2; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d x %d = %d \n", i, j, i * i);
		}
		printf("============== \n");
	}
}
// 03
void GetGooGooDan() {
	int num1, num2;
	printf("두 정수를 입력하세요. \n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2) 
		CompareNum(num2, num1);
	else 
		CompareNum(num1, num2);
}


int main(void) {
	Chanllenge01();
	GetGooGooDan();
	return 0;
}