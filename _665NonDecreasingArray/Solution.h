#ifndef _665NONDECREASINGARRAY_SOLUTION_H
#define _665NONDECREASINGARRAY_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/// time: O(NlogN)
/// space: O(1)
class Solution{
public:
	bool checkPossibility(vector<int>& nums){
		for (int i=0; i<nums.size()-1; i++){
			if (nums[i]>nums[i+1]){
				int tmp = nums[i];

				nums[i]=nums[i+1];
				if (is_sorted(nums.begin(), nums.end())) return true;

				nums[i]=tmp;
				nums[i+1] = tmp;
				if (is_sorted(nums.begin(), nums.end())) return true;

				return false;
			}
		}
		return true;
	
	}
};

#endif
