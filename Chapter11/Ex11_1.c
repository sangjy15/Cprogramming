#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)

int Max(int arr[]) {
	int i, maxNum=arr[0];
	for (i = 0; i < 5; i++) {
		if (maxNum < arr[i])
			maxNum = arr[i];
	}
	return maxNum;
}

int Min(int arr[]) {
	int i, minNum = arr[0];
	for (i = 0; i < 5; i++) {
		if (minNum > arr[i])
			minNum = arr[i];
	}
	return minNum;
}

int Sum(int arr[]) {
	int i, sum = 0;
	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	return sum;
}
int main(void) {
	
	// ex01
	int arr[5], i;

	for (i = 0; i < 5; i++) {
		printf("������ �Է��ϼ���. \n");
		scanf("%d", &arr[i]);
	}
	printf("�Էµ� ���� �߿��� �ִ밪. \n", Max(arr));
	printf("�Էµ� ���� �߿��� �ּҰ�. \n", Min(arr));
	printf("�Էµ� ������ �� ��. \n", Sum(arr));
	return 0;
}