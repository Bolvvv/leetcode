//
// Created by bolvvv on 2021/7/5.
//

#include <vector>

using namespace std;

class Solution{
public:
    //未考虑中间为一竖或一横的情况
//    vector<int> spiralOrder(vector<vector<int>>& matrix){
//        int top_row = 0, left_column = 0, bottom_row = matrix.size()-1, right_column = matrix[0].size()-1;
//        vector<int> res;
//        if(bottom_row == 0) return matrix[0];
//        if(right_column == 0) {
//            for(int i = 0; i <= bottom_row; i++){
//                res.emplace_back(matrix[i][0]);
//            }
//            return res;
//        }
//        while(top_row <= bottom_row && left_column <= right_column){
//            for(int j = left_column; j <= right_column; j++){
//                res.emplace_back(matrix[top_row][j]);
//            }
//            for(int i = top_row+1; i <= bottom_row; i++){
//                res.emplace_back(matrix[i][right_column]);
//            }
//            for(int j = right_column-1; j >= left_column+1; j--){
//                res.emplace_back(matrix[bottom_row][j]);
//            }
//            for (int i = bottom_row; i >= top_row+1; i--) {
//                res.emplace_back(matrix[i][left_column]);
//            }
//            top_row++;bottom_row--;left_column++;right_column--;
//        }
//        return res;
//    }
    //官方答案
    vector<int> spiralOrder(vector<vector<int>>& matrix){
        if(matrix.size() == 0 || matrix[0].size() == 0) return {};
        int rows = matrix.size(), columns = matrix[0].size();
        vector<int> order;
        int left = 0, right = columns - 1, top = 0, bottom = rows - 1;
        while (left <= right && top <= bottom) {
            for (int column = left; column <= right; column++) {
                order.push_back(matrix[top][column]);
            }
            for (int row = top + 1; row <= bottom; row++) {
                order.push_back(matrix[row][right]);
            }
            //这个if很关键
            if(left<right && top<bottom){
                for (int column = right - 1; column > left; column--) {
                    order.push_back(matrix[bottom][column]);
                }
                for (int row = bottom; row > top; row--) {
                    order.push_back(matrix[row][left]);
                }
            }
            left++;right--;top++;bottom--;
        }
        return order;
    }
};