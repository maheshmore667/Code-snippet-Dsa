#include<iostream>

using namespace std;

void transpose(vector<vector<int>>& matrix) {
//transpose of matrix
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
}

int main() {
    //call transpose function here
    return 0;
}