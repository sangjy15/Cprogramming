#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
// ex01
int maxNum(int num1, int num2, int num3) {
	if (num1 > num2 && num1 > num3)
		return num1;
	else if (num2 > num1 && num2 > num3)
		return num2;
	else
		return num3;
}

// ex02
double CelToFah(double cel) {
	return 1.8 * cel + 32;
}

double FahToCel(double fah) {
	return (fah - 32) / 1.8;
}

//ex03
void ShowFivoSeries(int num) {
	int f1 = 0, f2 = 1, f3, i;
	if (num == 1) {
		printf("%d ", f1);
	}
	else {
		printf("%d %d ", f1, f2);
	}

	for (i = 0; i < num - 2; i++) {
		f3 = f1 + f2;
		printf("%d ", f3);
		f1 = f2;
		f2 = f3;
	}
}

int main(void) {
	/*
	int num1, num2, num3;
	printf("세 정수를 입력하세요. ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 수 : %d", maxNum(num1, num2, num3));
	
	int index;
	double temp;
	printf("1. 섭씨를 화씨로, 2.화씨를 섭씨로 \n");
	scanf("%d", &index);

	if (index == 1) {
		printf("섭씨온도 입력하세요. \n");
		scanf("%lf", &temp);
		printf("반환 된 화씨 온도 : %f \n", CelToFah(temp));
	}
	else {
		printf("화씨 온도를 입력 하세요");
		scanf("%lf", &temp);
		printf("반환 된 섭씨 온도 : %lf", FahToCel(temp));
	}
	*/
	int n;
	printf("출력하고자 하는 피보나치 수열의 갯수 : ");
	scanf("%d", &n);
	if (n < 1) {
		printf("1이상의 값을 입력하세요. \n");
		return -1;
	}
	ShowFivoSeries(n);
	return 0;
}