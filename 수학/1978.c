//2부터 X - 1까지 모두 나눠서 X가 소수인지 판별하는 문제 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n;
	int cnt = 0; //소수의 개수

	scanf("%d", &n); //자연수의 개수 

	for (int i = 0; i < n; i++) {
		int num;
		int j;

		scanf("%d", &num);

		for (j = 2; j < num; j++) {
			if (num % j == 0)
				break; //1과 num외의 약수가 있으면 break
		}

		if (num == j) 
			cnt++;
	}
	printf("%d\n", cnt);
	
	return 0;
}