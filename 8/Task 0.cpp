#include <iostream>

using namespace std;

const int N = 50;

void print(int A[][N], int n, int m){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    return 0;
}
