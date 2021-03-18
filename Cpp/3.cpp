//
// Created by bolvvv on 2021/3/18.
//

#include "string"
#include "set"

using namespace std;

//成功解决
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> char_set;
        int left,right=0,max=0;
        for(int i =0; i < s.size(); ++i){
            left = i;
            int mid_max = 0;
            while((!char_set.count(s[right]))&&(right!=s.size())){
                char_set.insert(s[right]);
                mid_max = right-left+1;
                right++;
            }
            char_set.erase(s[left]);
            max = max > mid_max?max:mid_max;
        }
    }
};