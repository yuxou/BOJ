//�м��� �������� ��Ģ�� ã�� ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int X; //X��° �м�
	
	scanf("%d", &X);

	int i = 1; //i��° �밢��
	int numerator = 1, denominator = 1; //����, �и�

	while (1) {	//X��° �м��� �� ��° �밢���� �ִ��� ã��
		if (i * (i - 1) / 2 + 1 <= X && X <= i * (i + 1) / 2)
			break;
		i++;
	}

	if (i % 2 == 0) { //¦����° �밢��
		numerator = X - (i - 1) * i / 2;
		denominator = (i + 1) - numerator;
	}
	else { //Ȧ����° �밢��
		denominator = X - (i - 1) * i / 2;
		numerator = (i + 1) - denominator;
	}	

	printf("%d/%d\n", numerator, denominator);

	return 0;
}