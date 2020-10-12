#include <iostream>
using namespace std;
const int M = 50;

void print(int a[][M], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

bool equal(int 	A[][M], int n, int m, int B[][M]){

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(A[i][j] == B[i][j]){
				continue;
			}else
				return false;
		}
	}
	return true;
}


void sum(int A[][M],  int B[][M], int C[][M], int n, int m){

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}

	print(C, m, n);
}

void transpose(int A[][M], int B[][M], int m, int n){

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			B[i][j] = A[j][i];
		}
	}
	
	print(B, m, n);

}

void sMult(int A[][M], int R[][M], int m, int n, int s){
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			R[i][j] = A[i][j] * s;
		}
	}

	//print(R, m, n);

}

void sub(int A[][M], int B[][M], int C[][M], int m, int n){

	sMult(B, B, m, n, -1);
	sum(A, B, C, m, n);

}



int main(){
	int a[3][M] =  {{1, 4, 7},
					{2, 5, 8},
					{3, 6, 9}};
				
	int b[3][M] =  {{1, 1, 1},
				    {1, 1, 1},
					{1, 1, 1}};
					
	int c[3][M] =  {{0, 1, 0},
					{0, 1, 0},
					{0, 1, 0}};
	//print(a, 3, 3);
	
	//cout << equal(a, 3, 3, b)<<endl;;
	//sum(a, b, c, 3, 3);
	//sMult(b, b, 3, 3, 5);
	//transpose(a, c, 3, 3);
	sub(b, c, a, 3, 3);
	return 0;
}


