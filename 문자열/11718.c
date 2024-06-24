//그대로 출력하기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char sentence[1000];

	while (scanf("%c", &sentence) != EOF) {
		printf("%c", sentence);
	}

	return 0;
}