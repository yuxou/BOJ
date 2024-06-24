//행렬을 2차원 배열로 만들어 더하는 문제
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int rowNum, colNum;

    scanf("%d %d", &rowNum, &colNum);
    
    int** A = (int**)malloc(sizeof(int*) * rowNum);
    for (int i = 0; i < rowNum; i++) {
        A[i] = (int*)malloc(sizeof(int) * colNum);
    }

    int** B = (int**)malloc(sizeof(int*) * rowNum);
    for (int i = 0; i < rowNum; i++) {
        B[i] = (int*)malloc(sizeof(int) * colNum);
    }

    int** sum = (int**)malloc(sizeof(int*) * rowNum);
    for (int i = 0; i < rowNum; i++) {
        sum[i] = (int*)malloc(sizeof(int) * colNum);
    }

    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (int i = 0; i < rowNum; i++) {
        for (int j = 0; j < colNum; j++) {
            sum[i][j] = A[i][j] + B[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    free(A);
    free(B);
    free(sum);

    return 0;
}