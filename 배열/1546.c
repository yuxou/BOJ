//평균을 조작하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int max = -9999;

	scanf("%d", &n);

	int* score = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &score[i]);

		if (score[i] > max) 
			max = score[i];
	}

	double sum = 0;

	for (int i = 0; i < n; i++) {
		sum = sum + ((double)score[i] / max) * 100;
	}

	printf("%f\n", (double)sum / n);

	free(score);
}