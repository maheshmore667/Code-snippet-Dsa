 #include<iostream>
 using namespace std;
 
 
 void rotate(vector<vector<int>>& matrix) {
        int row = matrix.size();
        //rotate 90degree = transpose + reverse the row
        
        //transpose of matrix
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < i; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        //reverse the row
        
        for(int i = 0; i < row; i++ ) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
        
        
    }

    
int main() {
    //call rotate function here
    return 0;
}