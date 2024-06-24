//배수와 약수를 배우는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1 = -1, n2 = -1;

	while (n1 != 0 && n2 != 0) {
		scanf("%d %d", &n1, &n2);

		if (n1 != 0 && n2 != 0) {
			if (n2 % n1 == 0)
				printf("factor\n");
			else if (n1 % n2 == 0)
				printf("multiple\n");
			else
				printf("neither\n");
		}
		else
			break;
	}

	return 0;
}