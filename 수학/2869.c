//�������� �������� ����ϴ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int A, B, V; // V������ ���뿡 A���;� �ö󰡰� �ڴ� ���� B���;� �̲�����
	int cnt = 0;

	scanf("%d %d %d", &A, &B, &V);

	cnt = (V - B - 1) / (A - B) + 1;

	printf("%d\n", cnt);

	return 0;
}