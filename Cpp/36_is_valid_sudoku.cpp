//
// Created by bolvvv on 2021/7/1.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //1. 判断行
        char judge_raw[9][9];
        for(int r = 0; r < 9; r++){
            for(int l = 0; l < 9; l++){
                if(r == 4){
                    char now_val = board[r][l];
                    if(now_val != '.'){
                        int now_val_int = now_val-'1';
                        if(judge_raw[r][now_val_int] != '\0'){
                            return false;
                        } else{
                            judge_raw[r][now_val_int] = now_val_int;
                        }
                    }
                }
            }
        }
        //2.判断竖
        char judge_column[9][9];
        for (int l = 0; l < 9; ++l) {
            for(int r = 0; r < 9; ++r){
                char now_val = board[r][l];
                if(now_val != '.'){
                    int now_val_int = now_val-'1';
                    if(judge_column[now_val_int][l] != '\0'){
                        return false;
                    } else{
                        judge_column[now_val_int][l] = now_val_int;
                    }
                }
            }
        }
        //3.判断方框
        for(int c = 0; c < 9; ++c){
            char judge_box[3][3];
            int raw_multi = c/3;
            int column_multi = c%3;
            for(int r = 0+raw_multi*3; r < 3+raw_multi*3; ++r){
                for(int l = 0+column_multi*3; l < 3+column_multi*3; ++l){
                    char now_val = board[r][l];
                    if(now_val != '.'){
                        int now_val_int = now_val-'1';
                        int now_val_row = now_val_int/3;
                        int now_val_column = now_val_int%3;
                        if(judge_box[now_val_row][now_val_column] != '\0'){
                            return false;
                        } else{
                            judge_box[now_val_row][now_val_column] = now_val_int;
                        }
                    }
                }
            }
        }
        return true;
    }

};

// int main(){
//    Solution solution;
//     vector<vector<char>> a = {{'7','.','.','.','4','.','.','.','.'},
//                       {'.','.','.','8','6','5','.','.','.'},
//                       {'.','1','.','2','.','.','.','.','.'},
//                       {'.','.','.','.','.','9','.','.','.'},
//                       {'.','.','.','.','5','.','5','.','.'},
//                       {'.','.','.','.','.','.','.','.','.'},
//                       {'.','.','.','.','.','.','2','.','.'},
//                       {'.','.','.','.','.','.','.','.','.'},
//                       {'.','.','.','.','.','.','.','.','.'}};
//
//    cout<<solution.isValidSudoku(a)<<endl;
//};