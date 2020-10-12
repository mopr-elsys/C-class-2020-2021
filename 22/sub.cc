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

void sMult(int A[][N], int R[][N], int m, int n, int s)
{
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            R[i][j] = A[i][j] * s;
        }
    }
}


void sub(int A[][N], int B[][N], int C[][N], int m, int n)
{
    sMult(B, C, m, n, -1);
    sum(A, C, C, m, n);
}

int main()
{
    int A[1][N] = {1, 2, 3, 4, 5};
    int B[1][N] = {1, 1, 1, 1, 1};
    int C[1][N];
    sub(A, B, C, 1, 5);
    print(C, 1, 5);
    return 0;
}