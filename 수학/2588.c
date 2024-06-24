//°ö¼À, ºóÄ­¿¡ µé¾î°¥ ¼ö´Â?
#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>
int main()
{
	int n1, n2;

	scanf("%d %d", &n1, &n2);

	int temp1 = n2 % 10;
	int temp2 = (n2 / 10) % 10;
	int temp3 = n2 / 100;

	printf("%d\n", n1 * temp1);
	printf("%d\n", n1 * temp2);
	printf("%d\n", n1 * temp3);

	int temp4 = n1 * n2;

	printf("%d\n", temp4);
}