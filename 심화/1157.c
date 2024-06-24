//주어진 단어에서 가장 많이 사용된 알파벳을 출력하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 1000000
int main(void)
{
	char sentence[MAX];
	int alphaNum[26] = { 0 };

	scanf("%s", sentence);

	int len = strlen(sentence);

	for (int i = 0; i < len; i++) {
		//sentence[i]가 소문자 a~z 사이의 값일 경우 아스키 코드 값에서
		//소문자 a를 빼주면 숫자 0~26 사이의 값이 나옴 <<대문자도 마찬가지
		
		if (sentence[i] >= 'a' && sentence[i] <= 'z')
			alphaNum[sentence[i] - 'a']++;
		else if (sentence[i] >= 'A' && sentence[i] <= 'Z')
			alphaNum[sentence[i] - 'A']++;
	}

	int max = 0, maxIndex;
	int result = 0; //가장 많이 쓰인 게 여러 개인지?

	for (int i = 0; i < 26; i++) {
		if (alphaNum[i] > max) {
			max = alphaNum[i];
			maxIndex = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == alphaNum[i])
			result++; // 두 개 이상이면 물음표 
	}

	if (result > 1)
		printf("?\n");
	else
		printf("%c\n", maxIndex + 'A');

	return 0;
}