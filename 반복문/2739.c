//구구단을 출력하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", n, i, (n * i));
	}
}