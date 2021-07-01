//
// Created by bolvvv on 2021/7/1.
//
#include <vector>

using namespace std;

class Solution {
public:
    int binarySearch(vector<int>& nums, int target, bool lower){
        int left = 0;
        int right = (int)nums.size()-1;
        int ans = (int)nums.size();
        while(left <= right){
            int mid = left + (right - left)/2;
            if(nums[mid] > target || (lower && nums[mid] >= target)) {
                right = mid -1;
                ans = mid;
            } else{
                left = mid + 1;
            }
        }
        return ans;
    }
};
int main(){
    Solution solution;
}