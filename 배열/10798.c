//문자열의 배열을 다루는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char board[5][15] = { 0 }; //초기화 꼭 해 주기
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