//
// Created by junhui on 16/04/19.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    //time: O(N)   82.66%
    // space: O(1)   100.00%
    int minMoves(vector<int>& nums) {
        long sum = 0;
        int minItem = nums[0];
        for (auto& _: nums){
            if (_ < minItem)
                minItem = _;
            sum += _;
        }
        cout<<sum<<" "<<minItem<<endl;
        int n = nums.size();

        return sum - long(n) * long(minItem);
    }
};

int main(int argc, char** argv){

    vector<int> nums = {-2147483648,-1};
    Solution sol;

    cout<<sol.minMoves(nums)<<endl;
    return  0;
}