//���ǿ� �´� ���ڿ��� ã�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int num, count = 0;
	int group; //�׷� �ܾ����� �ƴ��� �Ǻ�
	char word[100];

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%s", word);

		group = 1; //�ܾ� �Է¹ް�, 1�� �ʱ�ȭ

		for (int j = 0; word[j] != '\0'; j++) {
			for (int k = 0; k < j - 1; k++) {
				if (word[j] == word[k] && word[j] != word[j - 1]) {
					group = 0;
					break;
				}
			}
			//�׷� �ܾ �ƴ϶�� break
			if (group == 0)
				break;
		}
		//�׷� �ܾ ������ ���� ����
		if (group == 1)
			count++;
	}

	printf("%d\n", count);

	return 0;
}