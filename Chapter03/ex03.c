#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int main(void) {
	// ����ڷκ��� �� ������ �Է� �޾Ƽ� �� ���� ������ ������ ��� ���
	
	int num1, num2;
	printf("�� ���� �Է��ϼ���.\n");
	scanf("%d %d", &num1, &num2);

	printf("%d - %d = %d\n", num1, num2, num1 - num2);
	printf("%d x %d = %d", num1, num2, num1 * num2);
	
	// �� ������ �Է� ���� ��, num1xnum2+num3 �� ����
	int num1, num2, num3;
	printf("�� ���� �Է��ϼ���.\n");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("%d x %d + %d = %d", num1, num2, num3, num1 * num2 + num3);
	
	// �ϳ��� ������ �Է¹޾�, �� ���� ���� ���
	int num1;
	printf("�ϳ��� ������ �Է��ϼ���.\n");
	scanf("%d", &num1);
	printf("%d^2 = %d", num1, num1 * num1);
	
	// �� ������ �Է¹޾� �������� �� ��� ������ ���
	int num1, num2;
	printf("�� ���� �Է��ϼ���.\n");
	scanf("%d %d", &num1, &num2);
	printf("%d ������ %d = �� %d ������ %d", num1, num2, num1 / num2, num1 % num2);
	
	// �� ������ �Է¹޾� ������ ���� (num1-num2)x(num2+num3)x(num3%num1)
	int num1, num2, num3;
	printf("�� ���� �Է��ϼ���.\n");
	scanf("%d %d %d", &num1, &num2, &num3);
	printf("(%d - %d)x(%d + %d)x(%d / %d) = %d", num1, num2, num2, num3, num3, num1, (num1 - num2)*(num2 + num3)*(num3 % num1));
	return 0;
}