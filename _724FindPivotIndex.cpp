//
// Created by junhui on 12/04/19.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // time: O(N)
    // space: O(1)
    int pivotIndex(vector<int>& nums) {
        if (nums.size()==0)
            return -1;

        if (nums.size()==1)
            return 0;

        int sum = 0;
        for (auto& _:nums)
            sum+=_;

        int ls = 0;
        int rs = sum-nums[0];

        for (int i=0; i<nums.size(); i++){
            if (ls==rs)
                return i;
            if (i>0){
                ls+=nums[i-1];
                rs-=nums[i];
            }
        }
        return -1;
    }
};

int main(int argc, char** argv){
    Solution sol;

    vector<int> nums = {1,2,3};
    cout<<sol.pivotIndex(nums)<<endl;

    vector<int> nums1 = {3,1,7,3,6,5,6,3};
    cout<<sol.pivotIndex(nums1)<<endl;

    vector<int> nums3 = {-1,-1,-1,-1,-1,0};
    cout<<sol.pivotIndex(nums3)<<endl;

    return 0;
}