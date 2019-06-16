#ifndef _213HOUSEROBBER_SOLUTION_H
#define _213HOUSEROBBER_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

/// time: O(N^2)
/// space: O(N)
class Solution {
public:
    int rob(vector<int>& nums) {  
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return nums[0];
        if (nums.size() == 2) return max(nums[0], nums[1]);
        
        vector<int> memo1(nums.size(), 0);        
                
        memo1[0] = nums[0];        
        memo1[1] = max(nums[0], nums[1]);        
                
        for (int i=2; i<nums.size(); i++){        
            int tmp=0;        
            for (int j=0; j<=i-2; j++)        
                if (memo1[j]>tmp)        
                    tmp = memo1[j];        
            memo1[i] = max(memo1[i-1], nums[i]+ tmp);        
                    
        }        
                                            
            
        vector<int> memo2(nums.size(), 0);    
        memo2[1] = nums[1];        
        memo2[2] = max(nums[1], nums[2]);        
                
        for (int i=3; i<nums.size(); i++){        
            int tmp=0;        
            for (int j=0; j<=i-2; j++)        
                if (memo2[j]>tmp)        
                    tmp = memo2[j];        
            memo2[i] = max(memo2[i-1], nums[i]+ tmp);        
                    
        }    
    
        return  max( memo1[nums.size()-2], memo2[nums.size()-1]);     
    }    
};
#endif
