//별 찍기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++) {
		//공백 출력 for문
		for (int j = num - i; j > 0; j--)
			printf(" ");

		//* 출력 for문
		for (int j = 0; j < 2 * i - 1; j++)
			printf("*");

		printf("\n");
	}

	for (int i = num - 1; i > 0; i--) {
		for (int j = num - i; j > 0; j--)
			printf(" ");

		for (int j = 0; j < 2 * i - 1; j++)
			printf("*");

		printf("\n");
	}

	return 0;
}