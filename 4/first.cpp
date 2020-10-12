#include <iostream>

using namespace std;

const int N = 50;

void print(int A[][N], int n, int m){
	for(int i = 0;i < m;i++){
		for(int j = 0; j < n;j++){
			cout<<A[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

bool equal(int A[][N], int n1, int m1, int B[][N], int n2, int m2){
	if(n1 != n2 || m1 != m2)return false;
	for(int i = 0;i < m1;i++){
		for(int j = 0; j < n1;j++){
			if(A[i][j] != B[i][j])return false;
		}
	}
	return true;
}

void sum(int A[][N], int B[][N], int C[][N], int n, int m){
	for(int i = 0;i < m;i++){
		for(int j = 0; j < n;j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

void swap(int *a, int *b){
	int c = *b;
	*b = *a;
	*a = c;
}

void transpose(int A[][N], int n, int m){
	for(int i = 0;i < m;i++){
		for(int j = 0; j < n;j++){
			if(i < j)swap(A[i][j], A[j][i]);
		}
	}
}

void sMult(int A[][N], int n, int m, int a){
	for(int i = 0;i < m;i++){
		for(int j = 0; j < n;j++){
			A[i][j] *= a;
		}
	}
}

void sub(int A[][N], int B[][N], int C[][N], int n, int m){
	sMult(B, 3, 3, -1);
	sum(A, B, C, 3, 3);
	sMult(B, 3, 3, -1);
}

int main(){
	cout<<"Exercise start here\n\n";
	
	int A[3][N] = {{12, 64, -34},
				{-234, 12, 823},
				{657, 283, -123}};
	int B[3][N] = {{12, 62, -34},
				{-234, 13, 823},
				{657, 283, -123}};
	int C[3][N];
	print(A, 3, 3);
	sub(A, B, C, 3, 3);
	print(C, 3, 3);
	
	cout<<"Exercise end here\n";
	return 0;
}
