//
// Created by junhui on 26/05/19.
//

#ifndef _594LONGESTHARMONIOUSSUBSEQUENCE_SOLUTION2_H
#define _594LONGESTHARMONIOUSSUBSEQUENCE_SOLUTION2_H

#include <iostream>
#include <vector>
using namespace std;

class Solution2{
public:
    ///time: O(N^2)  Time limit exceeded.
    ///space: O(logN) for sorting
    int findLHS(vector<int>& nums) {
        int res = 0;
        sort(nums.begin(), nums.end());

        for (int i=0; i<nums.size(); i++){
            int index = find_last(nums, nums[i]+1);
            if (index != -1)
                res = max(res, index-i+1);
        }
        return res;
    }

private:
    int find_last(vector<int>& sorted, int a){
        int index = -1;
        for (int i=0; i< sorted.size(); i++){
            if (sorted[i] == a)
                index = max(index, i);
        }
        return index;
    }
};

#endif //_594LONGESTHARMONIOUSSUBSEQUENCE_SOLUTION2_H
