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

void transpose(int A[][N], int B[][N], int m, int n){
	//B[0][0] = A[0][0];
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			B[j][i] = A[i][j];
		}
	}
}

int main(){
	int A[2][N] = {{1, 2}, {3, 4}};
	int B[2][N];
	transpose(A, B, 2, 2);
	print(A, 2, 2);
	print(B, 2, 2);
	return 0;
}
