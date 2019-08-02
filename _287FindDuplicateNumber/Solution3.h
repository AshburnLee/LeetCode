#ifndef _287FINFDDUPLICATENUMBER_SOLUTION_H_
#define _287FINFDDUPLICATENUMBER_SOLUTION_H_

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>

///time: O(N)
/// space :O(N)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> st;
        for (auto item : nums){
            if( st.find(item)!=st.end() )
                return item;
            else
                st.insert(item);
        }
        return -1;
    }
};

#endif //_287FINFDDUPLICATENUMBER_SOLUTION_H_
