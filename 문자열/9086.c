//¹®...Á¦
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 1000
int main()
{
	int num;
	
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		char str[MAX];
		
		scanf("%s", str);
		
		int len = strlen(str);
		
		printf("%c%c\n", str[0], str[len - 1]);
	}

	return 0;
}