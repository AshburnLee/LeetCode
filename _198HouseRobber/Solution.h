#ifndef _198HOUSEROBBER_SOLUTION_H
#define _198HOUSEROBBER_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

/// time: O(N^2)
/// space: O(N)
class Solution {
public:
    int rob(vector<int>& nums) {
        vector<int> memo(nums.size(), 0);
        
        memo[0] = nums[0];
        memo[1] = max(nums[0], nums[1]);
        
        for (int i=2; i<nums.size(); i++){
            int tmp=0;
            for (int j=0; j<=i-2; j++)
                if (memo[j]>tmp)
                    tmp = memo[j];
            memo[i] = max(memo[i-1], nums[i]+ tmp);
            
        }
        return memo[nums.size()-1];
    }
};

#endif
