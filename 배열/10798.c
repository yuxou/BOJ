//���ڿ��� �迭�� �ٷ�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char board[5][15] = { 0 }; //�ʱ�ȭ �� �� �ֱ�
	int i, j;

	for (i = 0; i < 5; i++)
		scanf("%s", board[i]);

	for (i = 0; i < 15; i++) {
		for (j = 0; j < 5; j++) {
			if (board[j][i] != '\0')
				printf("%c", board[j][i]);
		}
	}
	printf("\n");

	return 0;
}