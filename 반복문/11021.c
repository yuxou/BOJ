//a+b�� ���� �� �Ƹ���� ����ϴ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 1; i <= count; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}
	
	return 0;
}