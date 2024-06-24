//¿µ¼öÁõ
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int total = 0;
	int count;

	scanf("%d", &total);
	scanf("%d", &count);

	int* price = (int*)malloc(sizeof(int) * count);
	int* num = (int*)malloc(sizeof(int) * count);

	int sum = 0;
	for (int i = 0; i < count; i++) {
		scanf("%d %d", &price[i], &num[i]);
		sum += price[i] * num[i];
	}
	
	if (sum == total) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	free(price);
	free(num);
}