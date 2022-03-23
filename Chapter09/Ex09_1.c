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

int main(void) {
	/*
	int num1, num2, num3;
	printf("세 정수를 입력하세요. ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("가장 큰 수 : %d", maxNum(num1, num2, num3));
	*/
	int tem;
	printf("섭씨 온도를 입력 하세요");
	scanf("%lf", &tem);
	printf("반환 된 화씨 온도 : %f \n", CelToFah(tem));

	printf("화씨 온도를 입력 하세요");
	scanf("%lf", &tem);
	printf("반환 된 섭씨 온도 : %lf", FahToCel(tem));
	return 0;
}