//배열에 값을 쓰는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, m;
	int i, j, k;
	int arr[100] = { 0 };

	scanf("%d %d", &n, &m);

	for (int h = 0; h < m; h++) {
		scanf("%d %d %d", &i, &j, &k);

		for (int x = i; x <= j; x++) {
			arr[x] = k;
		}
	}

	for (int h = 1; h <= n; h++) {
		printf("%d ", arr[h]);
	}

	return 0;
}