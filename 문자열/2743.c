//���ڿ��� �Է¹ް� ���̸� ��� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char str[100];
	int length = 0;

	scanf("%s", str);

	for (int i = 0; str[i] != '\0'; i++) {
		length++;
	}

	//printf("%d\n", strlen(str));
	printf("%d\n", length);

	return 0;
}