//�迭�� �Է¹ް� x���� ���� ���� ã�� ����
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