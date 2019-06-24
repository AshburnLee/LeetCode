#ifndef _674LONGESTINCREASINGCONTINUOUSSUB_SOLUTION_H
#define _674LONGESTINCREASINGCONTINUOUSSUB_SOLUTION_H

#include <iostream>
#include <vector>
using namespace std;

/// time: O(N)
/// space: O(1)
class Solution{
public:
    int findLengthOfLCIS(vector<int>& nums) {
		int res = 0;
		int start = 0;
		for (int i=0; i<nums.size(); i++){
			if (i>0 && nums[i]<=nums[i-1])
				start = i;
			res = max(res, i-start +1);
		}
		return res;
    }
};
#endif
