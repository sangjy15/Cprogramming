#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int Add2(int num1, int num2) { // �������� ��, ��ȯ �� ��
	return num1 + num2;
}

void ShowAddResult(int num) { // �������� o, ��ȯ�� x
	printf("������� ��� %d \n", num);
}

int ReadNum(void) { // �������� x, ��ȯ�� o
	int num;
	scanf("%d", &num);
	return num;
}

void HowToHowThisProg(void) { // �������� x, ��ȯ�� x
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ��� \n");
}

int main2(void) {
	int result, num1, num2;
	HowToHowThisProg();
	num1 = ReadNum();
	num2 = ReadNum();
	result = Add2(num1, num2);
	ShowAddResult(result);
	return 0;
}