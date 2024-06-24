//문자열을 입력받고 문자열의 특정 위치를 읽어 보자
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