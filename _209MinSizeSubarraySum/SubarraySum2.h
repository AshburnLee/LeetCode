//
// Created by junhui on 18/05/19.
//

#ifndef _209MINSIZESUBARRAYSUM_SUBARRAYSUM2_H
#define _209MINSIZESUBARRAYSUM_SUBARRAYSUM2_H

#include <iostream>
#include <vector>
using namespace std;

class Solution2{
public:
    /// time: O(N)
    /// space: O(1)
    int minSubArrayLen(int s, vector<int>& nums) {
        int l=0;
        int r = -1;
        int sum =0;
        int res = nums.size()+1;

        while ( l < nums.size()){
            if (r+1 < nums.size() && sum < s){
                r++;
                sum += nums[r];
            }
            else{
                sum -= nums[l];
                l++;
            }
            if (sum>=s)
                res = min(res, r-l+1);
        }
        if (res == nums.size()+1)
            return 0;
        return res;
    }
};

#endif //_209MINSIZESUBARRAYSUM_SUBARRAYSUM2_H
