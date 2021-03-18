//
// Created by bolvvv on 2021/3/17.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> bubble_sort(vector<int>& nums){
    vector<int> src_site;
    for(int i = 0; i < nums.size()-1; i++){
        for(int j = 0; j < nums.size()-1-i; j++){
            if(nums[j]>nums[j+1]){
                int tmp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = tmp;
            }
        }
    }
    return nums;
}

//int main(){
//    vector<int>a = {1,3,5,2,6,7,9,10,99,1};
//    vector<int>m = bubble_sort(a);
//    for(int i = 0; i < a.size(); i++){
//        cout<<m[i]<<endl;
//    }

//}