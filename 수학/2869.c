//달팽이의 움직임을 계산하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B, V; // V미터인 막대에 A미터씩 올라가고 자는 동안 B미터씩 미끄러짐
	int cnt = 0;

	scanf("%d %d %d", &A, &B, &V);

	cnt = (V - B - 1) / (A - B) + 1;

	printf("%d\n", cnt);

	return 0;
}