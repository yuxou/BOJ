//Å·, Äý, ·è, ºñ¼ó, ³ªÀÌÆ®, Æù
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int pieces[6];
	int correctNum[6] = { 1, 1, 2, 2, 2, 8 };

	for (int i = 0; i < 6; i++) {
		scanf("%d", &pieces[i]);
	}

	for (int i = 0; i < 6; i++) {
		printf("%d ", correctNum[i] - pieces[i]);
	}
	return 0;
}