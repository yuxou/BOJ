//분수의 순서에서 규칙을 찾는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int X; //X번째 분수
	
	scanf("%d", &X);

	int i = 1; //i번째 대각선
	int numerator = 1, denominator = 1; //분자, 분모

	while (1) {	//X번째 분수가 몇 번째 대각선에 있는지 찾기
		if (i * (i - 1) / 2 + 1 <= X && X <= i * (i + 1) / 2)
			break;
		i++;
	}

	if (i % 2 == 0) { //짝수번째 대각선
		numerator = X - (i - 1) * i / 2;
		denominator = (i + 1) - numerator;
	}
	else { //홀수번째 대각선
		denominator = X - (i - 1) * i / 2;
		numerator = (i + 1) - denominator;
	}	

	printf("%d/%d\n", numerator, denominator);

	return 0;
}