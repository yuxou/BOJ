//입력이 끝날 때까지 a+b를 출력하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int a, b;

	while (scanf("%d %d", &a, &b) != EOF) {		
		printf("%d\n", a + b);
	}
	return 0;
}