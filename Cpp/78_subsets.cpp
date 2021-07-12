//
// Created by bolvvv on 2021/7/12.
//
#include <vector>

using namespace std;

class Solution {
public:
    void dfs(int index, vector<int>& nums, vector<int>& temp,  vector<vector<int>> &result){
        result.push_back(temp);
        for(int i = index; i < nums.size(); i++){
            temp.push_back(nums[i]);
            dfs(i+1, nums, temp, result);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> result;
        dfs(0, nums, temp, result);
        return result;
    }
};
int main(){
    vector<int> nums = {1,2,3};
    Solution solution;
    solution.subsets(nums);
}