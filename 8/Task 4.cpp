#include <iostream>

using namespace std;

const int N = 50;

void sMult(int A[][N], int R[][N], int m, int n, int s){
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            R[i][j] = A[i][j] * s;
        }
    }
}

int main(){
    return 0;
}
