//�迭�� �Է¹ް� v�� ã�� ����, ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int num;
	int searchKey, count = 0;

	scanf("%d", &num);

	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	
	scanf("%d", &searchKey);

	for (int i = 0; i < num; i++) {
		if (arr[i] == searchKey)
			count++;
	}
	printf("%d\n", count);

	free(arr);
}