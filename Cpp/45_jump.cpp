//
// Created by bolvvv on 2021/7/2.
//
#include <vector>

using namespace std;

class Solution {
public:
    //贪心
    //自己的答案，有问题，主要是没有考虑到起始点跳的距离比其所覆盖的下一次的所有点都跳的远的情况
//    int jump(vector<int>& nums){
//        if(nums[0] == 0 || nums.size() == 1) return 0;
//        int jump_count = 0;
//        int i = 0;
//        while(true){
//            int now_value = nums[i];
//            if(now_value + i >= nums.size()-1) {
//                jump_count++;
//                return jump_count;
//            }
//            jump_count++;
//
//            int max_value = 0;
//            int choose_p = i+1;
//            for(int j = 1; j <= now_value; ++j){
//                int current_p = i+j;
//                if(max_value <= nums[current_p]){
//                    max_value = nums[current_p];
//                    choose_p = current_p;
//                }
//            }
//            if(i+max_value >= nums.size()-1){
//                jump_count++;
//                return jump_count;
//            } else {
//                i = choose_p;
//            }
//        }
//    }
public:
    int jump(vector<int>& nums){
        int maxPos = 0, n = nums.size(), end = 0, step = 0;
        for(int i = 0; i < n - 1; ++i){
            if(maxPos >= i){
                maxPos = max(maxPos, i + nums[i]);
                if(i == end){
                    end = maxPos;
                    ++step;
                }
            }
        }
        return step;
    }
};
//int main(){
//    vector<int> nums = {1,3,2};
//    Solution solution;
//    solution.jump(nums);
//}