#include <stdio.h>

#define N 50

void print(int A[][N], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf("%d ", A[i][j]);
        }
        putchar('\n');
    }
}

void sum(int A[][N], int B[][N], int C[][N], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main()
{
    int A[1][N] = {1, 2, 3, 4, 5};
    int B[1][N] = {0};
    int C[1][N];
    sum(A, B, C, 1, 5);
    print(C, 1, 5);
    return 0;
}