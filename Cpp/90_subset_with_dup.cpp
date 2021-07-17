//
// Created by bolvvv on 2021/7/17.
//

#include <vector>

using namespace std;

class Solution {
public:
    //思路错误
//    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//        vector<int> path;
//        vector<vector<int>> result;
//        result.push_back(path);
//        dfs(0, 0, path, nums, result);
//        return result;
//    }
//    void dfs(int tmp, int start, vector<int>& path, vector<int>& nums, vector<vector<int>>& result){
//        if(tmp >= nums.size()){
//            path.clear();
//            start++;
//            if(start < nums.size()){
//                dfs(start, start, path, nums, result);
//            }
//            else return;
//        }
//        path.push_back(nums[tmp]);
//        result.push_back(path);
//        dfs(tmp+1, start, path, nums, result);
//    }

    //官方实现
    vector<int> t;
    vector<vector<int>> ans;

    void dfs(bool choosePre, int cur, vector<int>& nums){
        if(cur == nums.size()){
            ans.push_back(t);
            return;
        }
        dfs(false, cur + 1, nums);
        if(!choosePre && cur > 0 && nums[cur -1] == nums[cur]) return;
        t.push_back(nums[cur]);
        dfs(true, cur + 1, nums);
        t.pop_back();
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums) {
        sort(nums.begin(), nums.end());
        dfs(false, 0, nums);
        return ans;
    }
};

int main(){
    Solution solution;
    vector<int> nums = {1,2,2};
    solution.subsetsWithDup(nums);
}