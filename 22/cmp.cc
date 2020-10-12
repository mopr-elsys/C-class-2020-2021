#include <stdio.h>

#define N 50

bool equal(int A[][N], int m1, int n1, int B[][N], int m2, int n2)
{
    if (m1 != m2 | n1 != n2)
        return false;

    for (int i = 0; i < m1; ++i)
    {
        for (int j = 0; j < n1; ++j)
        {
            if (A[i][j] != B[i][j])
                return false;
        }
    }

    return true;
}

int main()
{
    int A[1][N] = {1, 2, 3, 4, 5};
    int B[1][N] = {1, 2, 3, 4, 5};

    bool result = equal(A, 1, 5, B, 1, 5);

    if (result == true)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    
    return 0;
}