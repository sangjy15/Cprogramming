#include <stdio.h>

int main3(void) {
	int num1 = 3;
	int num2 = 4;
	int result = num1 + num2;

	printf("덧셈 결과: %d \n", result);
	printf("%d + %d = %d \n", num1, num2, result);
	printf("%d와 %d 의 합은 %d 입니다. \n", num2, num2, result);
	return 0;
}