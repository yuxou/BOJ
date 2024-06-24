//최댓값이 어디에 있는지 찾는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num[9];
	int max = -9999, maxIndex;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &num[i]);

		if (num[i] > max) {
			max = num[i];
			maxIndex = i + 1;
		}
	}
	printf("%d\n%d", max, maxIndex);
}