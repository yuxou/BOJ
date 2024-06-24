//최댓값을 2차원에서 찾는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num[9][9];
	int max = -99;
	int rowIndex, colIndex;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &num[i][j]);

			if (num[i][j] > max) {
				max = num[i][j];
				rowIndex = i + 1;
				colIndex = j + 1;
			}
		}
	}

	printf("%d\n%d %d\n", max, rowIndex, colIndex);

	return 0;
}