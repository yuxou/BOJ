//숫자를 뒤집어서 비교하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1, num2;

	scanf("%d %d", &num1, &num2);
	
	num1 = num1 / 100 + ((num1 / 10) % 10) * 10 + ((num1 % 100) % 10) * 100;
	num2 = num2 / 100 + ((num2 / 10) % 10) * 10 + ((num2 % 100) % 10) * 100;

	if (num1 < num2)
		printf("%d", num2);
	else
		printf("%d", num1);

	return 0;
}