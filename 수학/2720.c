//��Ź�� ���� ����?
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	int total = 0;
	int money[4] = { 25, 10, 5, 1 };

	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &total);

		int change[4] = { 0 }; //����, ����, ����, ����� ���� �ʱ�ȭ

		for (int j = 0; j < 4; j++) {
			while (total >= money[j]) {
				total -= money[j];
				change[j]++;
			}

			if (total == 0)
				break;
		}

		for (int j = 0; j < 4; j++) {
			printf("%d ", change[j]);
		}
		printf("\n");
	}
	return 0;
}