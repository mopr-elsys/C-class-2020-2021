#include <iostream>

using namespace std;

const int N = 50;

void sum(int A[][N], int B[][N], int C[][N], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
}

int main(){
    return 0;
}
