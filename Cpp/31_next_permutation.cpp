#include <vector>
#include <algorithm>
#include <iostream>

class Solution {
    public:
    void nextPermutation(std::vector<int>& nums){
        
        std::vector<int>::reverse_iterator p;
        for (p = nums.rbegin(); p != nums.rend()-1; ++p){
            std::vector<int>::reverse_iterator it;
            for (it = p+1; it != nums.rend(); ++it){
                if (*p > *it){
                    int tmp = *p;
                    *p = *it;
                    *it = tmp;
                }
            }
        }
        //此时说明nums已是最大值，需要将其转换为最小值
        if(p == nums.rend()-1){
            std::reverse(nums.begin(), nums.end());
        }

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