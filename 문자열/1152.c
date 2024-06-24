//단어의 개수를 구하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char sentence[1000000];
	int count = 0, length;

	//엔터가 나올 때까지 입력받기 (공백 포함)
	scanf("%[^\n]", sentence);

	length = strlen(sentence); 

	//공백 하나만 입력되었을 때 0 출력
	if (length == 1) {
		if (sentence[0] == ' ') {
			printf("0\n");
			return 0;
		}
	}

	//공백의 갯수로 단어 체크 == 처음, 끝에 공백이 들어올 경우 대비해서 1부터 len - 1까지
	for (int i = 1; i < length - 1; i++) {
		if (sentence[i] == ' ') {
			count++;
		}	
	}

	//공백의 갯수로 단어의 갯수 체크해서 +1 (만약 단어 4개? 공백 3개)
	printf("%d", count + 1);

	return 0;
}