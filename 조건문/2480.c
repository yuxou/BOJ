#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n1, n2, n3;
	int max = 0, prize = 0;

	scanf("%d %d %d", &n1, &n2, &n3);

	if (n1 == n2 && n2 == n3 && n1 == n3) {
		prize = 10000 + n1 * 1000;
	}
	else if (n1 == n2 || n1 == n3) {
		prize = 1000 + n1 * 100;
	}
	else if (n2 == n3) {
		prize = 1000 + n2 * 100;
	}
	else {
		if (n1 > n2 && n1 > n3)
			max = n1;
		else if (n2 > n1 && n2 > n3)
			max = n2;
		else if (n3 > n1 && n3 > n2)
			max = n3;

		prize = max * 100;
	}

	printf("%d", prize);
}