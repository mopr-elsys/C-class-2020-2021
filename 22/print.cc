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

int main()
{
    int A[5][N] = {{1, 2}, {2, 3}, {3, 4}, {4, 5}, {5, 6}};
    print(A, 5, 2);
    return 0;   
}