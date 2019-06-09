#ifndef _136SINGLENUMBER_SOLUTION2_H
#define _136SINGLENUMBER_SOLUTION2_H

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

/// time: O(N)
/// space: O(N)
class Solution2{
public:
    int singleNumber(vector<int>& nums){
		unordered_set<int> set(nums.begin(), nums.end());

		int sum1 = 0;
		for (int i=0; i<nums.size(); i++){
//			set.insert(nums[i]);
			sum1 += nums[i];
		}
		
		int sum2 = 0;
		for (auto itr=set.begin(); itr!=set.end(); itr++)
			sum2 += *itr;

		return sum2*2-sum1;
	}
};

#endif
