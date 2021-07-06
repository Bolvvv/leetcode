//
// Created by bolvvv on 2021/7/6.
//

#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));//构建n*n的vector
        int top_row = 0, left_column = 0, bottom_row = n-1, right_column = n-1;
        n = n*n;
        int sub_value = n;
        while(top_row <= bottom_row && left_column <= right_column){
            for(int j = left_column; j <= right_column; j++){
                matrix[top_row][j] = n-sub_value+1;
                sub_value--;
            }
            for(int i = top_row+1; i <= bottom_row; i++){
                matrix[i][right_column] = n-sub_value+1;
                sub_value--;
            }
            if(left_column<right_column && top_row < bottom_row){
                for (int j = right_column-1; j >= left_column+1; --j) {
                    matrix[bottom_row][j] =  n-sub_value+1;
                    sub_value--;
                }
                for(int i = bottom_row; i >= top_row+1; --i){
                    matrix[i][left_column] = n-sub_value+1;
                    sub_value--;
                }
            }
            top_row++;bottom_row--;left_column++;right_column--;
        }
        return matrix;
    }
};