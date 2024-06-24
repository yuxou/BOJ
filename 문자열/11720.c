//정수를 문자열로 입력받는 문제, 숫자의 합
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num;
	char str[100];
	int sum = 0;

	scanf("%d", &num);

	scanf("%s", str);

	for (int i = 0; i < num; i++) {
		sum += str[i] - '0'; //0을 빼줌, 정수형으로 48을 의미함 (아스키코드)
	}

	printf("%d\n", sum);

	return 0;
}