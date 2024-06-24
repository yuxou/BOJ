//A+B를 여러번 출력하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;

	scanf("%d", &num);

	int* A = (int*)malloc(sizeof(int) * num);
	int* B = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &A[i], &B[i]);
	}

	for (int i = 0; i < num; i++) {
		printf("%d\n", A[i] + B[i]);
	}

	free(A);
	free(B);
}