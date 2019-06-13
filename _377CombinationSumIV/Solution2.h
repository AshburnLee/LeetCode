#ifndef _377COMBINATIONSUMIV_SOLUIION2_H
#define _377COMBINATIONSUMIV_SOLUTION2_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/// DP: more general verion of Climbing Staires Problem
/// time: O(target * nusm.size()) 
/// space: O(target)
class Solution2{
public:
    int combinationSum4(vector<int>& nums, int target) {
        
        sort(nums.begin(),nums.end());
        vector<unsigned long long> dp(target+1,0);
        dp[0]=1;  /// the key here !
        
        for(int t=1;t<=target;t++){
            for(int j=0;j<nums.size();j++){
                if(nums[j]>t)
                    break; /// use default value 
                dp[t]+=dp[t-nums[j]];
            }
        }
        return dp[target];
    }
};

#endif
