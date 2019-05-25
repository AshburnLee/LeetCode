//
// Created by junhui on 24/05/19.
//

#ifndef _594LONGESTHARMONIOUSSUBSEQUENCE_SOLUTION_H
#define _594LONGESTHARMONIOUSSUBSEQUENCE_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

class Solution {
public:
    /// time: O(N)   35.11%
    /// space: O(N)  49.77%
    int findLHS(vector<int>& nums) {
        map<int, int> mp;
        for (auto& item: nums)
            mp[item]++;

        int res = 0;
        for (auto itr = mp.begin(); itr!=mp.end(); itr++){
            if ( mp.find(itr->first + 1) != mp.end()){
                res = max(res, mp[itr->first] + mp[itr->first+1]);
            }
        }
        return res;
    }
};

#endif //_594LONGESTHARMONIOUSSUBSEQUENCE_SOLUTION_H
