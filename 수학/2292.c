//������ �����Ǵ� ��Ģ�� ���� ������ ��ġ�� �����ϴ� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int N;
	int cnt = 1, num = 1;
	int add = 6; //���ڰ� ���� ���� �þ
	
	scanf("%d", &N);

	while (1) {
		if (N <= num) //N�� ������ ������ �۰ų� ���� ���
			break; 

		num += add; 
		add += 6; 
		cnt++; 
	}

	printf("%d\n", cnt);

	return 0;
}