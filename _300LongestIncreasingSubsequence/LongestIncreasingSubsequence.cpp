//
// Created by junhui on 28/04/19.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
private:
    vector<int> memo;

    // get the length of LIS end with nums[index]
    // and store the value to memo[index]
    int getMaxLength(vector<int>& nums, int index){
        if (memo[index] != -1)
            return memo[index];

        int res = 1;
        for (int i=0; i<=index-1; i++){
            if (nums[index] > nums[i])
                res = max(res, 1+getMaxLength(nums, i));
        }
        memo[index] = res;
        return res;
    }
public:
    // time: O(N^2)   29.23%
    // space: O(1)    23.16%
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        memo = vector<int>(nums.size(), -1);
        int res=1;
        for (int i=0; i<nums.size(); i++){
            res = max(res, getMaxLength(nums, i));
        }

//        for (int i=0; i<nums.size(); i++)
//            memo[i] = getMaxLength(nums, i);
//
//        int res = memo[0];
//        for (auto& _ : memo)
//            if (_>res)
//                res = _;


        return res;
    }
    void printVec(){
        for (auto& _: memo)
            cout<<_<<" ";
        cout<<endl;
    }
};

int main(int argc, char** argv){
    vector<int> nums = {10,9,2,5,3,4};
    Solution sol;
    cout<<sol.lengthOfLIS(nums)<<endl;
    sol.printVec();

    vector<int> nums2 = {10,9,2,5,3,7,19,18};
    Solution sol2;
    cout<<sol2.lengthOfLIS(nums2)<<endl;
    sol2.printVec();

    return 0;

}
