//�� �ܾ�� �� ���ĺ��� ó�� �����ϴ� ��ġ�� ã�� ����
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
	} //alphabet�� ��ġ���� -1�� �ʱ�ȭ�Ѵ�.

	scanf("%s", word); //�ܾ �Է¹ް�

	length = strlen(word); //���� ���ϱ�

	for (int i = 0; i < length; i++) {
		index = word[i] - 'a'; //���ĺ� - 'a'�� �ϸ� ���ĺ��� �ε����� ���� �� ����
		
		if (alphabet[index] == -1) {
			alphabet[index] = i; //�ε����� �ش��ϴ� �κп� ���ĺ��� ��ġ�� �ִ´�
		}
		else {
			continue;
		}
 	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", alphabet[i]); //�ϳ��� ���
	}

	return 0;
}