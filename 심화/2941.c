//두세 문자가 한 글자로 묶일 수 있을 때 글자의 수를 세는 문제
//c=, c-, dz=, d-, lj, nj, s=, z=
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char word[100];
	int count = 0;

	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++) {
		count++;

		if (word[i] == '=') {
			if (word[i - 1] == 'c' || word[i - 1] == 's')
				count--;
			
			if (word[i - 1] == 'z') {
				count--;

				if (word[i - 2] == 'd')
					count--;
			}
		}

		if (word[i] == '-') {
			if (word[i - 1] == 'c' || word[i - 1] == 'd')
				count--;
		}

		if (word[i] == 'j') {
			if (word[i - 1] == 'l' || word[i - 1] == 'n')
				count--;
		}
	}

	printf("%d\n", count);

	return 0;
}