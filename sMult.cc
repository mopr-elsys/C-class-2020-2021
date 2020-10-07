#include <iostream>
#include "matrix.hh"
using namespace std;

int main(){
	int A[N][N] = {
		{1, 2, 3},
		{5, 6, 7},
		{-5, 34, -12}
	};
	
	int B[N][N];
	
	sMult(A, B, 3, 3, 5);
	print(B, 3, 3);

	return 0;
}
