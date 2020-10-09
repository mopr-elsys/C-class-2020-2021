#include <iostream>

using namespace std;

const int N = 50;

bool equal(int A[][N], int m1, int n1, int B[][N], int m2, int n2){
    if((n1 == n2) && (m1 == m2)){
        for(int i = 0; i < m1; i++){
            for(int j = 0; j < n1; j++){
                if(A[i][j] != B[i][j]){
                    return false;
                }
            }
        }
        return true;
    }
    return false;
}

int main(){
    return 0;
}
