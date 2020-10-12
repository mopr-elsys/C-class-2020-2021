#include <iostream>
using namespace std;

const int N = 50;

void print(int A[][N], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			cout << A[i][j];
		}
		cout << '\n';
	}
	cout << '\n';
}

void sMult(int A[][N], int R[][N], int m, int n, int s){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			R[i][j] = A[i][j] * s;
		}
	}
}

void sum(int A[][N], int B[][N], int C[][N], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

void sub(int A[][50], int B[][50], int C[][50], int m, int n){
	sMult(A, A, m, n, -1);
	sum(A, B, C, m, n);
	sMult(C, C, m, n, -1);
}

int main(){
	int A[2][N] = {{1, 2, 3}, {4, 5, 6}};
	int B[2][N] = {{7, 8 , 9}, {10, 11, 12}};
	int C[2][N];
	
	print(A, 2, 3);
	print(B, 2, 3);
	
	sub(A, B, C, 2, 3);
	print(C, 2, 3);
	return 0;
}


