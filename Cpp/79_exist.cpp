//
// Created by bolvvv on 2021/7/13.
//

#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    //自己的代码，可能逻辑有问题
//    bool exist(vector<vector<char>>& board, string word) {
//        //首先在board中搜索字符串的首字母
//        vector<vector<int>> first_word;
//        for(int i = 0; i < board.size(); i++){
//            for(int j = 0; j < board[0].size(); j++){
//                if(board[i][j] == word[0]){
//                    vector<int> tmp;
//                    tmp.push_back(i);
//                    tmp.push_back(j);
//                    first_word.push_back(tmp);
//                }
//            }
//        }
//        if(first_word.empty()) return false;
//        else{
//            for(auto i : first_word){
//                bool flag = false;
//                vector<vector<char>> record(board.size(), vector<char>(board[0].size(), '0'));
//                dfs(board, record, word, i[0], i[1], 0, flag);
//                if(flag) return true;
//            }
//            return false;
//        }
//    }
//
//    void dfs(vector<vector<char>>& board, vector<vector<char>>& record, const string& word, int row, int col, int index, bool& flag){
//        if(row < 0 || row >= board.size() || col < 0 || col >= board[0].size()) return;
//        if(record[row][col] != '0') return;//此位置已经被用过
//        if(board[row][col] != word[index]) return;//不相等直接返回
//        else{
//            if(index == word.size()) {
//                flag = true;
//                return;
//            }
//            else{
//                //记录此位置
//                record[row][col] = 'a';
//                //搜寻其他位置
//                dfs(board, record, word, row-1, col, index+1, flag);//上
//                dfs(board, record, word, row+1, col, index+1, flag);//下
//                dfs(board, record, word, row, col-1, index+1, flag);//左
//                dfs(board, record, word, row, col+1, index+1, flag);//右
//            }
//        }
//    }

    //官方代码
    bool check(vector<vector<char>>& board, vector<vector<int>>& visited, int i, int j, string& s, int k){
        if(board[i][j] != s[k]) return false;
        else if(k == s.length() - 1) return true;
        visited[i][j] = true;
        vector<pair<int, int>> directions{{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
        bool result = false;
        for(const auto& dir:directions) {
            int newi = i + dir.first, newj = j+dir.second;
            if(newi >= 0 && newi < board.size() && newj >= 0 && newj < board[0].size()){
                if(!visited[newi][newj]){
                    bool flag = check(board, visited, newi, newj, s, k + 1);
                    if(flag){
                        result = true;
                        break;
                    }
                }
            }
        }
        visited[i][j] = false;
        return result;
    }
    bool exist(vector<vector<char>>& board, string word){
        int h = board.size(), w = board[0].size();
        vector<vector<int>> visited(h, vector<int>(w));
        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                bool flag = check(board, visited, i, j, word, 0);
                if (flag) {
                    return true;
                }
            }
        }
        return false;
    }
};
int main(){
    vector<vector<char>> board = {{'A','B','C','E'},{'S','F','C','S'},{'A','D','E','E'}};
    string word = "ABCCED";
    Solution solution;
    cout << solution.exist(board, word) << endl;
}