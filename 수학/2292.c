//벌집이 형성되는 규칙에 따라 벌집의 위치를 구현하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int N;
	int cnt = 1, num = 1;
	int add = 6; //숫자가 여섯 개씩 늘어남
	
	scanf("%d", &N);

	while (1) {
		if (N <= num) //N이 벌집의 수보다 작거나 같을 경우
			break; 

		num += add; 
		add += 6; 
		cnt++; 
	}

	printf("%d\n", cnt);

	return 0;
}