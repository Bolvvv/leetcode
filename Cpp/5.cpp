//
// Created by bolvvv on 2021/3/18.
//
#include "string"
#include "vector"

using namespace std;
//修改
class Solution {
public:
    string longestPalindrome(string s){
        int n = s.size();
        vector<vector<int>> dp(n, vector<int>(n));
        string ans;
        for(int l = 0; l < n; l++){
            for(int i = 0; i + l < n; i++){
                int j = i + 1;
                if (l == 0){
                    dp[i][j] = 1;
                } else if(l == 1){
                    dp[i][j] = (s[i] == s[j]);
                } else{
                    dp[i][j] = (s[i] == s[j] && dp[i+1][j-1]);
                }
                if(dp[i][j] && l+1 > ans.size()){
                    ans = s.substr(i, l+1);
                }
            }
        }
        return ans;
    }
};