//팰린드롬인지 확인하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 100
int main()
{
	char word[MAX];
	int result = 1;

	scanf("%s", word);

	int length = strlen(word);

	for (int i = 0; i < length / 2; i++) {
		if (word[i] != word[length - 1 - i])
			result = -1;	
	}

	if (result == 1)
		printf("1\n");
	else
		printf("0\n");

	return 0;
}