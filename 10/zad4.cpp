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

int main(){
	int A[2][N] = {{1, 2}, {3, 4}};
	int R[2][N];
	sMult(A, R, 2, 2, 2);
	print(R, 2, 2);
	return 0;
}
