//
// Created by bolvvv on 2021/7/8.
//

#include <vector>

using namespace std;

class Solution {
public:
    //有问题
//    int removeDuplicates(vector<int>& nums) {
//        if(nums.empty() || nums.size() == 1) return nums.size();
//        int flag_count = 0;
//        int sub_len = 0;
//        for(int i = 1; i < nums.size()-sub_len; i++) {
//            if(nums[i] == nums[i-1]){
//                flag_count++;
//            }
//            else{
//                if(flag_count >=2){
//                    int start = i - flag_count + 1;
//                    sub_len = flag_count-1;
//                    for(int j = start, temp = i; temp < nums.size();j++, temp++){
//                        nums[j] = nums[temp];
//                    }
//                    i = i - flag_count + 1;
//                }
//                flag_count = 0;
//            }
//        }
//        //最后一个数重复出现到数组结束
//        return nums.size()-sub_len-flag_count+1;
//    }
    //双指针
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if(n <= 2) return n;
        int slow = 2, fast = 2;
        while(fast < n){
            if(nums[slow-2] != nums[fast]){
                nums[slow] = nums[fast];
                ++slow;
            }
        }
        return slow;
    }
};