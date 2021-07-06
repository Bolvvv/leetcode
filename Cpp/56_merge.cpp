//
// Created by bolvvv on 2021/7/6.
//

#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    //错误，未考虑边界问题，如[[1,4],[5,6]]，最后的结果应该是[[1,4],[5,6]]，而不是[[1,6]]，因为4和5之间应是空白

//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        int left = INT_MAX, right = 0;
//        vector<vector<int>> result;
//        for(vector<int> interval : intervals){
//            if(interval[0] < left) left = interval[0];
//            if(interval[1] > right) right = interval[1];
//        }
//        if(right == left) {
//            vector<int> res = {left, right};
//            result.emplace_back(res);
//            return result;
//        }
//        int array[right-left+1];
//        for(int &a : array) a = 0;
//        for(vector<int> interval : intervals){
//            for(int i = interval[0]-left; i <= interval[1]-left; i++) array[i] = 1;
//        }
//        vector<int> temp;
//        for(int i = 0; i < sizeof(array)/sizeof(array[0]); ++i){
//            if(array[i] == 1){
//                if(temp.empty()) temp.emplace_back(i + 1);
//                if(i == sizeof(array)/sizeof(array[0]) -1){
//                    temp.emplace_back(i + 1);
//                    result.emplace_back(temp);
//                    temp.clear();
//                }
//            } //存储当前数字，但由于数组是0开始的，因此需要存储i+1
//            else{
//                if(!temp.empty()){
//                    temp.emplace_back(i - 1 + 1);//存储上一个的值
//                    result.emplace_back(temp);
//                    temp.clear();
//                }
//            }
//        }
//        return result;
//    }
};
int main(){
    Solution solution;
    vector<vector<int>> test = {{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> res = solution.merge(test);
    for(auto i : res){
        cout<<i[0]<<" "<<i[1]<<endl;
    }

}