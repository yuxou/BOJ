//�־��� �ܾ�� ���� ���� ���� ���ĺ��� ����ϴ� ����
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
		//sentence[i]�� �ҹ��� a~z ������ ���� ��� �ƽ�Ű �ڵ� ������
		//�ҹ��� a�� ���ָ� ���� 0~26 ������ ���� ���� <<�빮�ڵ� ��������
		
		if (sentence[i] >= 'a' && sentence[i] <= 'z')
			alphaNum[sentence[i] - 'a']++;
		else if (sentence[i] >= 'A' && sentence[i] <= 'Z')
			alphaNum[sentence[i] - 'A']++;
	}

	int max = 0, maxIndex;
	int result = 0; //���� ���� ���� �� ���� ������?

	for (int i = 0; i < 26; i++) {
		if (alphaNum[i] > max) {
			max = alphaNum[i];
			maxIndex = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (max == alphaNum[i])
			result++; // �� �� �̻��̸� ����ǥ 
	}

	if (result > 1)
		printf("?\n");
	else
		printf("%c\n", maxIndex + 'A');

	return 0;
}