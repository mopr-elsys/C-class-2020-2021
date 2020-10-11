#include <iostream>
using namespace std;

const int M = 50;

bool equal(int A[][M], int n1, int m1, int B[][M], int n2, int m2)
{
	if(n1 != n2 || m1 != m2)
		return false;
	
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < m1; j++)
		{
			if(A[i][j] != B[i][j])
				return false;
		}
	}
	return true;
}

void sum(int A[][M], int n1, int m1, int B[][M], int n2, int m2, int C[][M], int n3, int m3)
{
	if(n1 != n2 || m1 != m2)
		return;
	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < m1; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

void print(int A[][M], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout<<A[i][j]<< " ";
		} 
		cout<<endl;
	}
}

void transpose(int A[][M], int B[][M], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			B[j][i] = A[i][j];
		}
	}
}

void sMult(int A[][M], int B[][M], int n, int m, int s)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			B[i][j] = A[i][j]*s;
		}
	}
}

void sub(int A[][M], int B[][M], int C[][M], int n, int m)
{
	sMult(B,C,n,m,-1);
	sum(A,n,m,C,n,m,C,n,m);
}



int main()
{
	int A[2][M] = {{1,2},{3,4}};
	int B[2][M] = {{1,2},{3,5}};
	int C[3][M] = {{1,2,3}, {4,5,6}, {7,8,9}};
	int D[2][M];
	//cout<<equal(A,2,2,B,2,2)<<endl;
	//sum(A,2,2,B,2,2,C,2,2);
	//print(C,3,3);
	sub(A,B,D,2,2);
	print(D,2,2);
	return 0;
}

//dterziev@elsys-bg.org
//mopr-elsys/C-class-2020-2021