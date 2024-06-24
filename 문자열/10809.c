//한 단어에서 각 알파벳이 처음 등장하는 위치를 찾는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char word[100];
	int alphabet[26];
	int index, length;

	for (int i = 0; i < 26; i++) {
		alphabet[i] = -1;
	} //alphabet의 위치들을 -1로 초기화한다.

	scanf("%s", word); //단어를 입력받고

	length = strlen(word); //길이 구하기

	for (int i = 0; i < length; i++) {
		index = word[i] - 'a'; //알파벳 - 'a'를 하면 알파벳의 인덱스를 구할 수 있음
		
		if (alphabet[index] == -1) {
			alphabet[index] = i; //인덱스에 해당하는 부분에 알파벳의 위치를 넣는다
		}
		else {
			continue;
		}
 	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]); //하나씩 출력
	}

	return 0;
}