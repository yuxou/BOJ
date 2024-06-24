//규칙에 따라 문자에 대응하는 수를 출력하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	char word[15];
	int total = 0;

	scanf("%s", word);

	for (int i = 0; word[i] != '\0'; i++) {
		switch (word[i]) {
			case 'A': case 'B': case 'C':
				total += 3;
				break;
			case 'D': case 'E': case 'F':
				total += 4;
				break;
			case 'G': case 'H': case 'I':
				total += 5;
				break;
			case 'J': case 'K': case 'L':
				total += 6;
				break;
			case 'M': case 'N': case 'O':
				total += 7;
				break;
			case 'P': case 'Q': case 'R': case 'S':
				total += 8;
				break;
			case 'T': case 'U': case 'V':
				total += 9;
				break;
			case 'W': case 'X': case 'Y': case 'Z':
				total += 10;
				break;
		}
	}

	printf("%d", total);

	return 0;
}