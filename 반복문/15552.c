//������ �Է¹ް� ����ϴ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int count;
	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	
	return 0;
}