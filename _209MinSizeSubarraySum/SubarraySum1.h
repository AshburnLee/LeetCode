//
// Created by junhui on 18/05/19.
//

#ifndef _209MINSIZESUBARRAYSUM_SUBARRAYSUM1_H
#define _209MINSIZESUBARRAYSUM_SUBARRAYSUM1_H


#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    /// time: O(N^3)
    /// space: O(1)
    int minSubArrayLen(int s, vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        for (int gap=0; gap<nums.size(); gap++)
            for (int i=0; i<nums.size()-gap; i++){
                int sum = 0;
                for (int k=i;k<=i+gap;k++){
                    sum = sum + nums[k];
                }
                if(sum >= s)
                    return gap+1;
            }
        return 0;
    }
};

#endif //_209MINSIZESUBARRAYSUM_SUBARRAYSUM1_H
