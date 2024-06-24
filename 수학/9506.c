//약수를 구하면서 주어진 수가 완전수인지 판별하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	
	scanf("%d", &n); 

	while (n != -1) {
		printf("%d", n);

		int sum = 0, j = 0;
		int* save = (int*)malloc(sizeof(int) * n); //약수의 개수는 정수보다 작음


		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
				save[j] = i; //약수 저장해 두기
				j++;
			}
		}

		if (sum == n) {
			printf(" = ");
			for (int i = 0; i < j; i++) {
				printf("%d", save[i]);

				if (i != (j - 1))
					printf(" + ");
			}
			printf("\n");
		}
		else {
			printf(" is NOT perfect.\n");
		}

		free(save);

		scanf("%d", &n); //입력 받기
	}

	return 0;
}