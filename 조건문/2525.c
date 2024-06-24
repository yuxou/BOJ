#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int h, m;
	int time;

	scanf("%d %d", &h, &m);
	scanf("%d", &time);

	if (m + time < 60)
		printf("%d %d", h, m + time);
	else if (m + time >= 60) {
		int hour = (m + time) / 60;
		int min = (m + time) % 60;

		if (h + hour < 24)
			printf("%d %d", h + hour, min);
		else
			printf("%d %d", h + hour - 24, min);
	}
}