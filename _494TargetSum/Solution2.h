#ifndef _494TARGETSUM_SOLUTION2_H
#define _494TARGETSUM_SOLUTION2_H


#include <iostream>
#include <vector>

using namespace std;

/// time: O(N^N)
/// space: O(N)
class Solution2{
public:
	int count;
	int findTargetSumWays(vector<int>& nums, int S){
		computeSum(nums, 0, 0, S);
		return count;
	}
	void computeSum(vector<int>& nums, int i, int sum, int S){
		if (i==nums.size()){
			if (sum==S)
				count++;
		} 
		else{
			computeSum(nums, i+1, sum+nums[i], S);
			computeSum(nums, i+1, sum-nums[i], S);
		}
	}
};


#endif
