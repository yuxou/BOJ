//배열을 입력받고 x보다 작은 수를 찾는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num, x;

	scanf("%d %d", &num, &x);

	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);

		if (arr[i] < x)
			printf("%d ", arr[i]);
	}

	free(arr);
}