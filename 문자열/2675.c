//각 문자를 반복하여 출력하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 1000
int main()
{
	int num;
	int repeat = 0;
	char word[MAX];
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d %s", &repeat, word);

		for (int j = 0; j < strlen(word); j++) {
			for (int k = 0; k < repeat; k++) {
				printf("%c", word[j]);
			}
		}
		printf("\n");
	}

	return 0;
}