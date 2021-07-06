//
// Created by bolvvv on 2021/7/6.
//

#include <vector>

using namespace std;

class Solution {
public:
    //自己的代码，已AC
//    bool canJump(vector<int>& nums) {
//        if(nums.size()==1) return true;
//        else{
//            for(int i = 0; i < nums.size(); ){
//                if(i+nums[i] >= nums.size()-1) return true;
//                else{
//                    int max_length= 0;
//                    int max_length_position = i;
//                    for(int j = 1; j<= nums[i]; ++j){
//                        if(nums[i+j] == 0) continue;
//                        else{
//                            if(nums[i+j] + j > max_length){
//                                max_length = nums[i+j] + j;
//                                max_length_position = i+j;
//                            }
//                        }
//                    }
//                    if(max_length == 0) return false;
//                    else {
//                        i = max_length_position;
//                    }
//                }
//            }
//            return true;
//        }
//    }
    //官方代码：
    bool canJump(vector<int>& nums){
        int n = nums.size();
        int rightmost = 0;
        for(int i = 0; i < n; ++i){
            if(i <= rightmost){
                rightmost = max(rightmost, i + nums[i]);
                if(rightmost >= n - 1){
                    return true;
                }
            }
        }
        return false;
    }
};