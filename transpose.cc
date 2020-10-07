#include <iostream>
#include "matrix.hh"
using namespace std;


int main(){
	int A[3][N]{
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	
	print(A, 3, 3);
	cout << endl;
	
	transpose(A, 3, 3);
	print(A, 3, 3);

	return 0;
}
