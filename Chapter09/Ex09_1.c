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
int pivonachi(int num) {
	int i, result;
	for (i = 0; i < num; i++) {
	}
}

int main(void) {
	/*
	int num1, num2, num3;
	printf("¼¼ Á¤¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä. ");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("°¡Àå Å« ¼ö : %d", maxNum(num1, num2, num3));
	
	int index;
	double temp;
	printf("1. ¼·¾¾¸¦ È­¾¾·Î, 2.È­¾¾¸¦ ¼·¾¾·Î \n");
	scanf("%d", &index);

	if (index == 1) {
		printf("¼·¾¾¿Âµµ ÀÔ·ÂÇÏ¼¼¿ä. \n");
		scanf("%lf", &temp);
		printf("¹ÝÈ¯ µÈ È­¾¾ ¿Âµµ : %f \n", CelToFah(temp));
	}
	else {
		printf("È­¾¾ ¿Âµµ¸¦ ÀÔ·Â ÇÏ¼¼¿ä");
		scanf("%lf", &temp);
		printf("¹ÝÈ¯ µÈ ¼·¾¾ ¿Âµµ : %lf", FahToCel(temp));
	}
	*/
	
	return 0;
}