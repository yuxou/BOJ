//배열의 값을 교환하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, m;
	int i, j;
	int arr[100];
	int temp;

	scanf("%d %d", &n, &m);
	
	for (int h = 1; h <= n; h++) {
		arr[h] = h;
	}

	for (int h = 0; h < m; h++) {
		scanf("%d %d", &i, &j);

		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for (int h = 1; h <= n; h++) {
		printf("%d ", arr[h]);
	}
}