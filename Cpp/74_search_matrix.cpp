//
// Created by bolvvv on 2021/7/7.
//

#include <vector>

using namespace std;

class Solution {
public:
    //需要注意列的判断是row_top<row_bottom，而不是<=
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int row_top = -1, row_bottom = row-1;
        while (row_top < row_bottom) {
            int row_mid = row_top + (row_bottom - row_top + 1) / 2;
            if (matrix[row_mid][0] <= target) {
                row_top = row_mid;
            } else{
                row_bottom = row_mid - 1;
            }
        }
        if(row_top < 0) return false;
        return col_search(row_top, col, matrix, target);
    }
    static bool col_search(const int now_row, const int right, const vector<vector<int>>& matrix,const int target){
        int col_left = 0, col_right = right-1;
        while(col_left <= col_right){
            int col_mid = col_left+(col_right-col_left)/2;
            if(matrix[now_row][col_mid] == target) return true;
            else if(matrix[now_row][col_mid] < target){
                col_left = col_mid+1;
            } else{
                col_right = col_mid-1;
            }
        }
        return false;
    }
};