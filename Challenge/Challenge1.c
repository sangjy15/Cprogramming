#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
// 01
void Chanllenge01() {
	int num;
	printf("10���� ���� �Է� : ");
	scanf("%d", &num);

	printf("16���� ���� ��� : %x \n", num);
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
	printf("�� ������ �Է��ϼ���. \n");
	scanf("%d %d", &num1, &num2);
	if (num1 > num2) 
		CompareNum(num2, num1);
	else 
		CompareNum(num1, num2);
}

// 06
void TransformTime() {
	int time, hour = 0, min = 0, sec = 0;
	printf("��(second) �Է� : ");
	scanf("%d", &time);
	while (time > 0) {
		if (time/3600 >= 1) {
			hour = time / 3600;
			time = time - (3600 * hour);
			printf("�ð�: %d \n", hour);
		}
		else if (time/60 >= 1) {
			min = time / 60;
			time = time - (60 * min);
			printf("��: %d \n", min);
		}
		else {
			sec = time;
			printf("��: %d \n", sec);
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
	printf("������ �Է��ϼ���, ");
	scanf("%d", &num);
	printf("2�� %d ���� : %d ", num, recursive(num));
	return 0;
}