//
// Created by bolvvv on 2021/7/5.
//
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums){
        vector<vector<int>> res;
        backtrack(res, nums, 0, (int)nums.size());
        return res;
    }
    void backtrack(vector<vector<int>>& res, vector<int>& output, int first, int len){
        if(first == len){
            res.emplace_back(output);
            return;
        }
        for(int i = first; i < len; ++i){
            swap(output[i], output[first]);
            backtrack(res, output, first+1, len);
            swap(output[i], output[first]);
        }
    }
};
int main(){
    Solution solution;
    vector<int> nums = {1,2,3};
    solution.permute(nums);
}