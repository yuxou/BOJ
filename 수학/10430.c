//나머지, 네 개의 계산식을 계산하는 문제
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);

	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);
}