//과제 제출 기한 지남
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int student[31] = { 0 };
	int submit;

	for (int i = 1; i <= 28; i++) {
		scanf("%d", &submit);

		student[submit] = submit;
	}

	for (int i = 1; i <= 30; i++) {
		if (student[i] == 0)
			printf("%d\n", i);
	}
}