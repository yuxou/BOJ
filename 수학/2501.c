//주어진 수의 약수를 구하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int N, K;
	int cnt = 0;

	scanf("%d %d", &N, &K);

	for (int i = 1; i <= N; i++) {
		if (N % i == 0) {
			cnt++;
		}			

		if (cnt == K) {
			printf("%d\n", i);
			break;
		} 

		if (i == N && cnt < K)
			printf("0\n");
	}

	return 0;
}