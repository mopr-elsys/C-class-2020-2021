#include <iostream>
using namespace std;

const int N = 50;

bool equal(int A[][N], int m1, int n1, int B[][N], int m2, int n2){
	if(m1 != m2 || n1 != n2){
		return false;
	}
	
	for(int i = 0; i < m1; i++){
		for(int j = 0; j < n1; j++){
			if(A[i][j] != B[i][j]){
				return false;
			}
		}
	}
	return true;
}

int main(){
	int A[2][N] = {{1, 2}, {3, 4}};
	int B[2][N] = {{1, 2}, {3, 4}};
	cout << equal(A, 2, 2, B, 2, 2) << endl;
	return 0;
}
