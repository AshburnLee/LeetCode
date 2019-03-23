//
// Created by junhui on 23/03/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
public:
    // time: O(NlogN)
    // space: O(1)
    int arrayPairSum2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i=0; i<nums.size(); i+=2)
            sum += nums[i];

        return sum;
    }

    // time:O(NlogN)
    // space: O(1)
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        for (int i=0; i<nums.size()/2; i++) {
            sum += nums[2*i];
        }

        return sum;
    }

};

int main(int argc, char** argv){
    vector<int> tst = {6,3,5,1,9,4,6,2};

    cout<<Solution().arrayPairSum(tst)<<endl;
    return 0;
}