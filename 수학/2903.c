//�Ѿ� �ݺ��ؼ� ������ �� ���� ������ ���� ����
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