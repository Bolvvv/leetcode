//
// Created by bolvvv on 2021/7/12.
//

#include <vector>

using namespace std;

class Solution {
public:

    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        if(n <= 0|| k <= 0 || k > n) return result;
        vector<int> temp;
        dfs(1, n, k, temp, result);
        return result;
    }
    void dfs(int start, int n, int k, vector<int> &temp, vector<vector<int>> &result) {
        if(temp.size() == k) {
            result.push_back(temp);
            return;
        }

        for(int i = start; i <= n - (k - temp.size()) + 1; i++){
            temp.push_back(i);
            dfs(i+1, n, k, temp, result);
            temp.pop_back();
        }
    }
};

int main(){
    int n = 4, k = 2;
    Solution solution;
    solution.combine(n, k);
}