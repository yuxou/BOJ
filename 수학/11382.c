//더 큰 수를 더하는 문제
#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
int main()
{
	unsigned long long A, B, C;
	
	scanf("%llu %llu %llu", &A, &B, &C);

	printf("%llu\n", A + B + C);
}