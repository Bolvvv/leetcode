//
// Created by bolvvv on 2021/6/2.
//

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i : nums){
            cout<<i<<endl;
        }

    }
};

int main(){
    vector<int> test = {1,2,3,5,1,2,3,4};
    Solution solution;

    solution.threeSum(test);
}