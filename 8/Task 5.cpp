#include <iostream>

using namespace std;

const int N = 50;

void sub(int A[][50], int B[][50], int C[][50], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = A[i][j] - B[i][j];
        }
    }
}

int main(){
    return 0;
}

