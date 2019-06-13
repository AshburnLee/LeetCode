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
		vector<int> sum;
	public:
		NumArray2(vector<int>& nums){
			sum = vector<int>(nums.size(), 0);

			sum[0] = nums[0];
			for (int i=1; i<nums.size(); i++)
				sum[i] = nums[i] + sum[i-1];
		}

		int sumRange(int i, int j){
			return i==0 ? sum[j] : sum[j]-sum[i-1];
		}
};

#endif 
