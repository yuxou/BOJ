//2���� �迭�� Ȱ���Ͽ� �����̷� ����� ���� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num; 
	int paper[100][100] = { 0 };
	int x, y;
	int size = 0; //���� ������ ����

	scanf("%d", &num); //�������� �� �Է�

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &x, &y); //�������� ��ġ �Է�

		//�����̰� �ִ� �κ��� 1�� ǥ��
		for (int j = x; j < x + 10; j++) { 
			for (int k = y; k < y + 10; k++) {
				paper[j][k] = 1;
			}
		}
	}

	//���� ������ ���� ���� 
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1)
				size++;
		}
	}

	printf("%d\n", size);

	return 0;
}