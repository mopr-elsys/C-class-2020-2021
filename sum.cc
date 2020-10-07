#include <iostream>
#include "matrix.hh"
using namespace std;


int main(){
	int A[3][N] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	int B[3][N] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	int C[3][N];
	
	sum(A, B, C, 3, 3);
	
	print(C, 3, 3);

	return 0;
}
