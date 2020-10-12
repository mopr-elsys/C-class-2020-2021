#include <iostream>

using namespace std;

const int N = 50;

bool equal(int A[][N],int m1,int n1, int B[][N], int m2,int n2){
    if(m1 == m2 && n1 == n2){
        for(int i = 0; i < m1; i++){
            for(int j = 0; j < n1; j++){
                if(A[i][j] != B[i][j])
                    return false;
            }
        }
    }
    return true;
}

void print(int A[][N],int m,int n){
	for(int i = 0;i < m;i++){
		for(int j = 0;j < n;j++){
			cout << A[i][j] << " ";	
		}
		cout << endl;
	}
}

void sum(int A[][N],int B[][N],int C[][N],int m,int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

void transponse(int A[][N],int C[][N],int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			C[i][j] = A[j][i];
		}
	}
}

void sMulti(int A[][N],int R[][N], int m, int n, int s){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			R[i][j] = s*A[i][j];
		}
	}
}

void sub(int A[][N],int B[][N],int C[][N],int m,int n){
    sMulti(B,B,m,n,-1);
	sum(A,B,C,m,n);
}

int main()
{

    int A[3][N] = {{2, 3, 4},{5, 6, 7},{8, 9, 10}};
    int B[3][N] = {{1, 2, 3},{4, 5, 6},{7, 8, 9}};
	int C[3][N] = {{0}};
	int R[3][N] = {{0}};	
	transponse(A,C,3,3);
	print(A,3,3);
	cout << endl;
	print(C,3,3);
	cout << endl;
	sMulti(A,R,3,3,3);
	print(R,3,3);
	cout << endl;
	sub(A,B,C,3,3);
    print(C,3,3);
	//cout << equal(A,3,3,B,2,2) << endl;
    return 0;
}