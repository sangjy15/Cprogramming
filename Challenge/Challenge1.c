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
			time = time - (3600 * hour);
			printf("시간: %d \n", hour);
		}
		else if (time/60 >= 1) {
			min = time / 60;
			time = time - (60 * min);
			printf("분: %d \n", min);
		}
		else {
			sec = time;
			printf("초: %d \n", sec);
			time = 0;
		}
	}
	printf("h: %d, m: %d, s: %d", hour, min, sec);
}

// 08
int recursive(int num) {
	if (num == 0) {
		return 1;
	}
	else {
		num--;
		return 2 * recursive(num);
	}
}

int main(void) {
	// Chanllenge01();
	// GetGooGooDan();
	// TransformTime();
	int num;
	printf("정수를 입력하세요, ");
	scanf("%d", &num);
	printf("2의 %d 제곱 : %d ", num, recursive(num));
	return 0;
}