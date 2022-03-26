#include <stdio.h>

int Add1(int num1, int num2) {
	return num1 + num2;
}

int main1(void) {
	int result;
	result = Add1(3, 4);
	printf("µ¡¼À°á°ú1; %d \n", result);
	result = Add1(5, 8);
	printf("µ¡¼À°á°ú2: %d \n", result);
	return 0;
}