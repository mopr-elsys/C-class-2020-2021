#include <iostream>
#include "matrix.hh"
using namespace std;


int main(){
	int A[3][N] = {
		{12, 64, -34},
		{-234, 12, 823},
		{657, 283, -123}
	};
	
	int B[4][N] = {
		{12, 64, -34},
		{-234, 12, 823},
		{657, 283, -123},
		{11, 12, 13}
	};
	
	int C[3][N] = {
		{12, 64, -34},
		{-234, 11, 823},
		{657, 283, -123}
	};
	
	int D[3][N] = {
		{12, 64, -34},
		{-234, 12, 823},
		{657, 283, -123}
	};
	
	cout << equal(A, 3, 3, B, 4, 3) << endl;
	cout << equal(A, 3, 3, C, 3, 3) << endl;
	cout << equal(A, 3, 3, D, 3, 3) << endl;
	
	return 0;
}
