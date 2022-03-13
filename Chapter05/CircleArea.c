#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int circle(void) {
	double rad;
	double area;
	printf("원의 반지름 입력: ");
	scanf("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("원의 넓이 : %f \n", area);
	return 0;
}