#ifndef _287FINFDDUPLICATENUMBER_SOLUTION_H_
#define _287FINFDDUPLICATENUMBER_SOLUTION_H_

#include <iostream>
#include <algorithm>
#include <vector>

///time: O(logN)
/// space :O(1)
class Solution{
public:
	int findDuplicate(std::vector<int>& nums){
		sort(nums.begin(), nums.end());
		for (int i=0; i<nums.size()-1; i++)
			if (nums[i]==nums[i+1])
				return nums[i];
		
		return -1;
	}
};


#endif //_287FINFDDUPLICATENUMBER_SOLUTION_H_
