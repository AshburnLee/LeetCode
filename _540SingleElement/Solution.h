#ifndef _540SINGLEELEMENT_SOLUTION_H
#define _540SINGLEELEMENT_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

/// time: O(N)
/// space: O(1)
class Solution{
public:
	int singleNonDuplicate(vector<int>& nums){
		int res;
		if (nums.size() == 1) return nums[0];

		for (int i=0; i<nums.size()-1; i+=2){
			if (nums[i]!=nums[i+1]){
				res = nums[i];
				break;
			}else{
				if (i == nums.size()-3 && nums[i]==nums[i+1])
					return nums[nums.size()-1];	
			}
		}
		return res;
	
	}
};

#endif
