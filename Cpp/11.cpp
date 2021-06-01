//
// Created by bolvvv on 2021/6/1.
//
#include <vector>
#include <iostream>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int ans = 0;
        int area = 0;
        while(l < r){
            area =min(height.at(l), height.at(r)) * (r-l);
            ans = max(ans, area);
            if(height.at(l) <= height.at(r)){
                l += 1;
            } else{
                r -= 1;
            }
        }
        return ans;
    }
    int min(int i, int j){
        return i>j?j:i;
    }
    int max(int i, int j){
        return i>j?i:j;
    }
};
int main(){
    Solution solution;
    vector<int> m = {1,8,6,2,5,4,8,3,7};
    cout<<solution.maxArea(m);
}