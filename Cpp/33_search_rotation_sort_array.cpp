//
// Created by bolvvv on 2021/6/29.
//

#include <vector>

class Solution {
public:
    //自己的答案，未完成
//    int search(std::vector<int>& nums, int target){
//        int size = nums.size();
//        int middle = size%2==0 ? size/2 - 1 : size/2;
//        if(nums[0] < nums[middle]){
//            if(target <= nums[middle] && target >= nums[0]){
//                for(int i = 0; i <= middle; i++){
//                    if(target == nums[i]){
//                        return i;
//                    } else{
//                        return -1;
//                    }
//                }
//            } else{
//                //查询另外一半，二分查找
//                int tmp_middle = (nums.size()-middle)/2+middle;
//                if(nums[middle+1] < nums[tmp_middle]){
//                    if(target <= nums[tmp_middle] && target >= nums[middle+1]){
//                        for(int i = middle+1; i <= tmp_middle; i++){
//                            if(target == nums[i]){
//                                return i;
//                            } else{
//                                return -1;
//                            }
//                        }
//                    } else{
//                        //查询另外一半，二分查找
//                    }
//                } else{
//                    //二分查询
//                }
//            }
//        } else{
//            //二分查找
//        }
//
//
//
//        //如果此时在正常的"小->大"序列中
//        if(nums[0] < nums[k-1]){
//            if(target<=nums[k-1] && target >= nums[0]){
//
//            } else{
//                //此时在正常序列中没有，查询另外一个序列
//
//            }
//        }
//    }

    //官方答案
    int search(std::vector<int>& nums, int target){
        int n = (int)nums.size();
        if(!n){
            return -1;
        }
        if(n == 1){
            return nums[0] == target ? 0 : -1;
        }
        int l = 0, r = n - 1;
        while(l <= r){
            int mid = (l + r)/2;
            if(nums[mid] == target) return mid;
            if(nums[0] <= nums[mid]){
                if(nums[0] <= target && target < nums[mid]){
                    r = mid -1;
                } else{
                    l = mid + 1;
                }
            } else{
                if(nums[mid] < target && target <= nums[n-1]){
                    l = mid + 1;
                } else{
                    r = mid - 1;
                }
            }
        }
        return -1;
    }
};