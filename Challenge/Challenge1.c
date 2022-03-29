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

// 06
void TransformTime() {
	int time, hour = 0, min = 0, sec = 0;
	printf("초(second) 입력 : ");
	scanf("%d", &time);
	while (time > 0) {
		if (time/3600 >= 1) {
			hour = time / 3600;
			time -= 3600;
		}
		else if (time/60 >= 1) {
			min = time / 60;
			time -= 60;
		}
		else {
			sec = time;
			return;
		}
	}
	printf("h: %d, m: %d, s: %d", hour, min, sec);
}

int main(void) {
	// Chanllenge01();
	// GetGooGooDan();
	TransformTime();
	return 0;
}