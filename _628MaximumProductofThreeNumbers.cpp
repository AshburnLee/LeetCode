//
// Created by junhui on 15/04/19.
//
#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Solution {
public:
    // time: O(NlogN)    53.71%
    // space : O(1)      97.89%
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int length = nums.size()-1;
        int res1 = nums[length] * nums[length-1] * nums[length-2];
        int res2 = nums[length] * nums[0] * nums[1];
        return res1 > res2 ? res1: res2;
    }
};
int main(int argc, char** argv){
    vector<int> tst = {-3,-5,1,2,3,4};
    cout<<Solution().maximumProduct(tst)<<endl;
    return 0;
}