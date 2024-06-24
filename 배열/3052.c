//배열을 활용하여 서로 다른 값의 개수를 찾는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num[10];
	int remainder[10];
	int result = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num[i]);
		remainder[i] = num[i] % 42;
	}

	for (int i = 0; i < 10; i++) {
		int count = 0;

		for (int j = i + 1; j < 10; j++) {
			if (remainder[i] == remainder[j])
				count++;
		}
		if (count == 0)
			result++;
	}
	printf("%d\n", result);
}