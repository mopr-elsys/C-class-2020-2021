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

bool equal(int a[][M], int n, int m, int b[][M]){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == b[i][j]) continue;
			else return false;
		}
	}
	return true;
}

void sum(int a[][M], int b[][M], int c[][M], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}

void transpose(int a[][M], int b[][M], int n, int m){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			b[i][j] = a[j][i];
		}
	}
}


void sMulti(int a[][M], int b[][M], int n, int m, int s){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			b[i][j] = a[i][j] * s;
		}
	}
}

void sub(int a[][M], int b[][M], int c[][M], int n, int m){
	sMulti(b, b, 3, 3, -1);
	sum(a, b, c, 3, 3);
}

int main(){
	int a[3][M] = {{12, 64, -34},
					{-234, 12, 823},
					{657, 283, -123}};
					
	int b[3][M] = {{12, 64, -34},
					{-234, 12, 823},
					{657, 283, -123}};
					
	int c[3][M];
	

//--Transpose function------------
/*	cout << "Before transposition: "<<endl;
	print(a, 3, 3);
	transpose(a, c, 3, 3);
	cout << "After transposition: "<<endl;
	print(c, 3, 3);
*/
//--End of Transpose function------------

//--sMultiplication function------------
/*	cout << "Before multiplication: "<<endl;
	print(a, 3, 3);
	sMulti(a, c, 3, 3, 5);
	cout << "After multiplication: "<<endl;
	print(c, 3, 3);
*/
//--end of sMultiplication function------------

//--sub function-----------------
/*	cout<< "Before subtraction:"<<endl;
	print(a, 3, 3);
	print(b, 3, 3);
	sub(a, b, c, 3, 3);
	cout<< "After subtraction:"<<endl;
	print(c, 3, 3);
*/
//--end of sub function-----------------

	return 0;
}