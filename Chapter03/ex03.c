#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int main(void) {
	// 사용자로부터 두 정수를 입력 받아서 두 수의 뺄셈과 곱셈의 결과 출력
	
	int num1, num2;
	printf("두 수를 입력하세요.\n");
	scanf("%d %d", &num1, &num2);

	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d x %d = %d", num1, num2, num1 * num2);
	
	// 세 정수를 입력 받은 후, num1xnum2+num3 을 수행
	int num1, num2, num3;
	printf("세 수를 입력하세요.\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d x %d + %d = %d", num1, num2, num3, num1 * num2 + num3);
	
	// 하나의 정수를 입력받아, 그 수의 제곱 출력
	int num1;
	printf("하나의 정수를 입력하세요.\n");
	scanf("%d", &num1);
	printf("%d^2 = %d", num1, num1 * num1);
	
	// 두 정수를 입력받아 나누었을 때 몫과 나머지 출력
	int num1, num2;
	printf("두 수를 입력하세요.\n");
	scanf("%d %d", &num1, &num2);
	printf("%d 나누기 %d = 몫 %d 나머지 %d", num1, num2, num1 / num2, num1 % num2);
	
	// 세 정수를 입력받아 다음의 연산 (num1-num2)x(num2+num3)x(num3%num1)
	int num1, num2, num3;
	printf("세 수를 입력하세요.\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("(%d - %d)x(%d + %d)x(%d / %d) = %d", num1, num2, num2, num3, num3, num1, (num1 - num2)*(num2 + num3)*(num3 % num1));
	return 0;
}