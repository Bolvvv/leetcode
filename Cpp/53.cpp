//
// Created by bolvvv on 2021/7/5.
//

#include <vector>

using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_res = 0;
        int temp_sum = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] >= 0){
                temp_sum+=nums[i];
                max_res = max_res > temp_sum ? max_res:temp_sum;
            }
            else{
                if(i+1 < nums.size()){
                    if(nums[i+1] + nums[i] >= 0){
                        temp_sum+=nums[i];
                    } else{
                        temp_sum = 0;
                    }
                }
            }
        }
        return max_res;
    }
};