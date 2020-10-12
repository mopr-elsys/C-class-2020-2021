#include <iostream>
#include "matrix.hh"
using namespace std;


int main(){
	int A[N][N] = {
		{1, 2,3},
		{5, 3, -8},
		{100, 23, -50}
	};
	
	int B[N][N] = {
		{4, 3, -2},
		{2, 8, 18},
		{-100, 2, -18}
	};
	
	int C[N][N];
	
	sub(A, B, C, 3, 3);
	print(C, 3, 3);

	return 0;
}

