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

void transpose(int A[][N], int B[][N], int m, int n)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            B[i][j] = A[j][i];
        }
    }
}

int main()
{
    int A[3][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][N];
    
    transpose(A, B, 3, 3);

    print(B, 3, 3);

    return 0;
}