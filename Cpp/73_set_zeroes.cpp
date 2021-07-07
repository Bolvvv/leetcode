//
// Created by bolvvv on 2021/7/7.
//

#include <vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size(), col = matrix[0].size();
        bool row0_flag = false, col0_flag = false;
        //第一列判断
        for(int j = 0; j < col; j++){
            if(matrix[0][j] == 0) {
                row0_flag = true;
                break;
            }
        }
        for(int i = 0; i < row; i++){
            if(matrix[i][0] == 0){
                col0_flag = true;
                break;
            }
        }
        //把第一行和第一列作为标识位
        for(int i = 1; i < row; i++){
            for(int j = 1; j < col; j++){
                if(matrix[i][j] == 0){
                    matrix[i][0]= matrix[0][j] = 0;
                }
            }
        }
        //根据标识位置零
        for(int i = 1; i < row; i++){
            for(int j = 1; j < col; j++){
                if(matrix[i][0] == 0 || matrix[0][j] == 0) matrix[i][j] = 0;
            }
        }
        if(row0_flag){
            for(int j = 0; j < col; j++){
                matrix[0][j] = 0;
            }
        }
        if(col0_flag){
            for(int i = 0; i < row; i++){
                matrix[i][0] = 0;
            }
        }


    }
};