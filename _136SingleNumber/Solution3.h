#ifndef _136SINGLENUMBER_SOLUTION3_H
#define _136SINGLENUMBER_SOLUTION3_H

#include <iostream>
#include <vector>

using namespace std;

/// time: O(N)
/// space: O(1)
class Solution3{
public:
    int singleNumber(vector<int>& nums){
		int res = 0;
		for (auto i: nums)
			res ^= i;

		return res;
	}
};

#endif
