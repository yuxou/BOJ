//2���� X - 1���� ��� ������ X�� �Ҽ����� �Ǻ��ϴ� ���� 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	int cnt = 0; //�Ҽ��� ����

	scanf("%d", &n); //�ڿ����� ���� 

	for (int i = 0; i < n; i++) {
		int num;
		int j;

		scanf("%d", &num);

		for (j = 2; j < num; j++) {
			if (num % j == 0)
				break; //1�� num���� ����� ������ break
		}

		if (num == j) 
			cnt++;
	}
	printf("%d\n", cnt);
	
	return 0;
}