//�ܾ��� ������ ���ϴ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
	char sentence[1000000];
	int count = 0, length;

	//���Ͱ� ���� ������ �Է¹ޱ� (���� ����)
	scanf("%[^\n]", sentence);

	length = strlen(sentence); 

	//���� �ϳ��� �ԷµǾ��� �� 0 ���
	if (length == 1) {
		if (sentence[0] == ' ') {
			printf("0\n");
			return 0;
		}
	}

	//������ ������ �ܾ� üũ == ó��, ���� ������ ���� ��� ����ؼ� 1���� len - 1����
	for (int i = 1; i < length - 1; i++) {
		if (sentence[i] == ' ') {
			count++;
		}	
	}

	//������ ������ �ܾ��� ���� üũ�ؼ� +1 (���� �ܾ� 4��? ���� 3��)
	printf("%d", count + 1);

	return 0;
}