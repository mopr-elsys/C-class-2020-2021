#include <iostream>
using namespace std;

const int N = 50;

void print(int A[][N], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << A[i][j] << " ";
		}
		cout << endl;
	}
}

bool equal(int A[][N], int m1, int n1, int B[][N], int m2, int n2){
	if(m1 != m2 || n1 != n2) return false;
	
	for(int i = 0; i < m1; i++){
		for(int j = 0; j < n1; j++){
			if(A[i][j] != B[i][j]) return false;
		}
	}
	
	return true;
}

void sum(int A[][N], int B[][N], int C[][N], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

void transpose(int A[][N], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(i < j)
				swap(A[i][j], A[j][i]);
		}
	}
}

void sMult(int A[][N], int B[][N], int m, int n, int s){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			B[i][j] = A[i][j] * s;
		}
	}
}

void sub(int A[][N], int B[][N], int C[][N], int m, int n){
	sMult(B, B, m, n, -1);
	sum(A, B, C, m, n);
}

