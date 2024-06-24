//최솟값과 최댓값을 찾는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int range, num;
	int min = 9999999;
	int max = -9999999;

	scanf("%d", &range);

	for (int i = 0; i < range; i++) {
		scanf("%d", &num);

		if (num < min)
			min = num;

		if (num > max)
			max = num;
	}
	printf("%d %d", min, max);

	return 0;
}