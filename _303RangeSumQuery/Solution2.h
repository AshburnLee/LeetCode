#ifndef _303RANGESUMQUERY_SOLUTION2_H
#define _303RANGESUMQUERY_SOLUTION2_H

#include <iostream>
#include <vector>

using namespace std;

/// DP
/// time: O(nums.size())
/// space: O(nums.size())
class NumArray2{
	private:
		vector<int> memo;
	public:
		NumArray2(vector<int>& nums){
			memo = vector<int>(nums.size()+1, 0);

			for (int i=0; i<nums.size(); i++)
				memo[i+1] = memo[i] + nums[i];
		}

		int sumRange(int i, int j){
			return memo[j+1] - memo[i];
		}

};

#endif 
