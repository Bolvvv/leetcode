//
// Created by bolvvv on 2021/7/2.
//

#include <vector>

using namespace std;

class Solution {
public:
    //自己的解答，有问题
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        vector<vector<int>> result;
//        int idx = 0;
//        vector<int> combine;
//        dfs(target, combine, idx, candidates, result);
//        return result;
//    }
//    vector<int> dfs(int target, vector<int> combine, int idx, vector<int>& candidates, vector<vector<int>> result){
//        if(idx > candidates.size()-1) return {};
//        int remain_value = target - candidates[idx];
//        if(remain_value < 0) return {};
//        else if(remain_value == 0) return combine;
//        else {
//            combine.push_back(candidates[idx]);//将该数值加入到combine中
//            //继续使用idx坐标
//            vector<int> temp_result_1 = dfs(remain_value, combine, idx, candidates, result);
//            if(!temp_result_1.empty()) result.push_back(temp_result_1);
//            //不使用当前坐标的值，即使用下一个坐标
//            vector<int> temp_result_2 = dfs(remain_value, combine, idx+1, candidates, result);
//            if(!temp_result_2.empty()) result.push_back(temp_result_2);
//            return {};
//        }
//    }

    //官方解答:
    void dfs(vector<int>& candidates, int target, vector<vector<int>>& ans, vector<int>& combine, int idx){
        if(idx == candidates.size()){
            return;
        }
        if(target == 0){
            ans.emplace_back(combine);
            return;
        }
        dfs(candidates, target, ans, combine, idx+1);
        if(target - candidates[idx] >= 0){
            combine.emplace_back(candidates[idx]);
            dfs(candidates, target-candidates[idx], ans, combine, idx);
            combine.pop_back();
        }
    }
};

int main(){
    Solution solution;
    vector<int> candidates = {2,3,6,7};
    int target = 7;
    solution.combinationSum(candidates, target);
}