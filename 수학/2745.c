//������ ���� ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int convert(char c) 
{
	if (c >= 'A' && c <= 'Z') 
		return c - 'A' + 10;
	else if (c >= 'a' && c <= 'z')
		return c - 'a' + 10;
	else
		return c - '0'; // ������ ���

	// �ùٸ� ���ڰ� �ƴ� ���
	return -1;
}

int main()
{
	int b, decimal = 0;
	char n[100000];

	scanf("%s %d", n, &b);

	int i = 0;

	while (n[i] != '\0') {
		int digit = convert(n[i]);

		if (digit == -1 || digit >= b)
			return 0;

		decimal = decimal * b + digit;
		i++;
	}

	printf("%d\n", decimal); //10�������� ��ȯ�� ��

	return 0;
}