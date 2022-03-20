#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable : 6031)
#pragma warning(disable : 4996)
int main(void) {
	// ex01
	int i, j;
	for (i = 1; i < 10; i++) {
		if (i % 2 == 0) {
			for (j = 1; j < 10; j++) {
				if (i == j) {
					printf("%d x %d = %d \n **********\n", i, j, i * j);
					break;
				}
				else {
					printf("%d x %d = %d \n", i, j, i * j);
					continue;
				}
			}
		}
	}
	
	return 0;
}