#include <stdio.h>

int main4(void) {
	int num1 = 9, num2 = 2;
	
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
	printf("%d x %d = %d \n", num1, num2, num1 * num2);
	printf("%d 나누기 %d 의 몫 = %d \n", num1, num2, num1 / num2);
	printf("%d 나누기 %d 의 나머지 = %d \n", num1, num2, num1 % num2);
	return 0;
}