//둘씩 반복해서 나눴을 때 점의 개수를 세는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int dots = 2;
	int N;

	scanf("%d", &N);
	
	while (N--) {
		dots += (dots - 1);
	}

	printf("%d\n", dots * dots);

	return 0;
}