#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
    public:
    //错误方法：
//    void nextPermutation(std::vector<int>& nums){
//        std::vector<int>::iterator p;
//        bool stop_flag = false;
//        for (p = nums.end()-1; p != nums.begin(); --p){
//            std::vector<int>::iterator it;
//            for (it = p-1; it != nums.begin()-1; --it){
//                if (*p > *it){
//                    int tmp = *p;
//                    *p = *it;
//                    *it = tmp;
//                    stop_flag = true;
//                    break;
//                }
//            }
//            if(stop_flag) break;
//        }
//        //此时说明nums已是最大值，需要将其转换为最小值
//        if(p == nums.begin()){
//            std::reverse(nums.begin(), nums.end());
//        }
//    }

    //标准答案：
    void nextPermutation(vector<int>& nums){
        int i = nums.size() - 2;
        while(i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }
        if(i >= 0){
            int j = nums.size() - 1;
            while(j >= 0 && nums[i] >= nums[j]){
                j--;
            }
            std::swap(nums[i], nums[j]);
        }
        std::reverse(nums.begin()+i+1, nums.end());
    }
};

int main(){
    Solution solution;
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(7);
    v.push_back(6);
    solution.nextPermutation(v);
    for (int i = 0; i < v.size(); ++i){
        std::cout<<v[i]<<std::endl;
    }
}