//���ڿ��� �Է¹ް� ���ڿ��� Ư�� ��ġ�� �о� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1000
int main()
{
	char str[MAX];
	int i;

	scanf("%s", str);
	scanf("%d", &i);

	printf("%c", str[i - 1]);
}