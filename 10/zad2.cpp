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
}

void sum(int A[][N], int B[][N], int C[][N], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

int main(){
	int A[2][N] = {{1, 2}, {3, 4}};
	int B[2][N] = {{1, 2}, {3, 4}};
	int C[2][N];
	sum(A, B, C, 2, 2);
	print(C, 2, 2);
	return 0;
}
