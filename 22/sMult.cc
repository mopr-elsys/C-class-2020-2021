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

int main()
{
    int A[1][N] = {1, 2, 3, 4, 5};
    int R[1][N];
    sMult(A, R, 1, 5, 2);
    print(R, 1, 5);   
    return 0;   
}