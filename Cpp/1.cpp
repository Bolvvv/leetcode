#include <iostream>
#include <vector>
#include <map>

using namespace std;

class Solution {
public:
    //方法1：暴力破解
    vector<int> twoSum1(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
    //方法2：map表
    vector<int> twoSum2(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> result;
        for(int i = 0; i < n; i++){
            auto iter = result.find(target-nums[i]);
            if(iter != result.end()){
                return {i, iter->second};
            }
            else{
                result[nums[i]]=i;
            }
        }
        return {};
    }
};
