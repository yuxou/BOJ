//2차원 배열을 활용하여 색종이로 평면을 덮는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num; 
	int paper[100][100] = { 0 };
	int x, y;
	int size = 0; //검은 영역의 넓이

	scanf("%d", &num); //색종이의 수 입력

	for (int i = 0; i < num; i++) {
		scanf("%d %d", &x, &y); //색종이의 위치 입력

		//색종이가 있는 부분을 1로 표시
		for (int j = x; j < x + 10; j++) { 
			for (int k = y; k < y + 10; k++) {
				paper[j][k] = 1;
			}
		}
	}

	//검은 영역의 개수 세기 
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (paper[i][j] == 1)
				size++;
		}
	}

	printf("%d\n", size);

	return 0;
}