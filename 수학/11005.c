//반대 방향으로 진법을 변환하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void convert(int n, int b)
{
	char digits[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char result[1000000]; //변환된 숫자의 각 자리 저장 배열

	int i = 0;

	while (n > 0) {
		int digit = n % b;
		result[i++] = digits[digit];
		n /= b;
	}

	for (int j = i - 1; j >= 0; j--) {
		printf("%c", result[j]);
	}
}

int main()
{
	int n, b;
	
	scanf("%d %d", &n, &b);

	convert(n, b);

	return 0;
}