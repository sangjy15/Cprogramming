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
int example(void) {
	
	// ex01
	/*
	int arr[5], i;

	for (i = 0; i < 5; i++) {
		printf("정수를 입력하세요. \n");
		scanf("%d", &arr[i]);
	}
	printf("입력된 정수 중에서 최대값: %d \n", Max(arr));
	printf("입력된 정수 중에서 최소값: %d \n", Min(arr));
	printf("입력된 정수의 총 합: %d \n", Sum(arr));
	*/
	// ex02
	char arr[] = { "Good time" };
	int i;
	for (i = 0; i < sizeof(arr); i++) {
		printf("%c \n", arr[i]);
	}
	return 0;
}