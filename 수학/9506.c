//����� ���ϸ鼭 �־��� ���� ���������� �Ǻ��ϴ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	
	scanf("%d", &n); 

	while (n != -1) {
		printf("%d", n);

		int sum = 0, j = 0;
		int* save = (int*)malloc(sizeof(int) * n); //����� ������ �������� ����


		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				sum += i;
				save[j] = i; //��� ������ �α�
				j++;
			}
		}

		if (sum == n) {
			printf(" = ");
			for (int i = 0; i < j; i++) {
				printf("%d", save[i]);

				if (i != (j - 1))
					printf(" + ");
			}
			printf("\n");
		}
		else {
			printf(" is NOT perfect.\n");
		}

		free(save);

		scanf("%d", &n); //�Է� �ޱ�
	}

	return 0;
}