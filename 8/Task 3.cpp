#include <iostream>

using namespace std;

const int N = 50;

void transpose(int A[][N], int B[][N], int m, int n){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            B[j][i] = A[i][j];
        }
    }
}

int main(){
    return 0;
}
