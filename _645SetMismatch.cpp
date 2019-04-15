//
// Created by junhui on 15/04/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

class Solution {
public:
    // time: O(NlogN)   45.76%
    // space: O(1)      100.00%
    vector<int> findErrorNums(vector<int>& nums) {
        // 1) sort & find the repeated number
        sort(nums.begin(), nums.end());
        int repeated;
        vector<int> res;
        for (int i=0;i<nums.size()-1; i++){
            if (nums[i]==nums[i+1]){
                repeated = nums[i];
                res.push_back(repeated);
            }
        }
        // find the value it suppose to be
        int sumS=0;
        int sumA=0;
        for (auto& V:nums)
            sumA += V;
        for (int v=1;v<=nums.size(); v++)
            sumS += v;

        res.push_back(repeated + (sumS-sumA));

        return res;
    }

    // time: O(N)  27.72%
    // space: O(1)   21.31%
    vector<int> findErrorNums2(vector<int>& nums){
        unordered_map<int, int> mp;
        vector<int> res;
        // create a map
        for (auto& _: nums)
            mp[_]++;

        // find the key with value 2
        for (unordered_map<int, int >::iterator itr=mp.begin(); itr!=mp.end(); itr++)
            if (itr->second == 2)
                res.push_back(itr->first);

        // find the missing number
        for (int v=1; v<=nums.size(); v++)
            if (mp.find(v) == mp.end())
                res.push_back(v);

        return res;
    }
};


int main(int argc, char** argv){
    Solution sol;

    vector<int> vec = {3,2,4,3,5};
    vector<int> res = sol.findErrorNums2(vec);
    
    return 0;
}