//������ ���ڿ��� �Է¹޴� ����, ������ ��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	char str[100];
	int sum = 0;

	scanf("%d", &num);

	scanf("%s", str);

	for (int i = 0; i < num; i++) {
		sum += str[i] - '0'; //0�� ����, ���������� 48�� �ǹ��� (�ƽ�Ű�ڵ�)
	}

	printf("%d\n", sum);

	return 0;
}