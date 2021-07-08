//
// Created by bolvvv on 2021/7/8.
//

#include <vector>

using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int r1 = -1, r2 = -1;
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] < 2){
                r2++;
                swap(nums[i], nums[r2]);
                if(nums[r2] < 1){
                    r1++;
                    swap(nums[r1], nums[r2]);
                }
            }
        }
    }
};