//조건에 맞는 문자열을 찾는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int num, count = 0;
	int group; //그룹 단어인지 아닌지 판별
	char word[100];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%s", word);

		group = 1; //단어 입력받고, 1로 초기화

		for (int j = 0; word[j] != '\0'; j++) {
			for (int k = 0; k < j - 1; k++) {
				if (word[j] == word[k] && word[j] != word[j - 1]) {
					group = 0;
					break;
				}
			}
			//그룹 단어가 아니라면 break
			if (group == 0)
				break;
		}
		//그룹 단어가 맞으면 갯수 세기
		if (group == 1)
			count++;
	}

	printf("%d\n", count);

	return 0;
}