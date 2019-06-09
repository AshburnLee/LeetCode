#ifndef _137SINGLENUMBERII_SOLUTION3_H
#define _137SINGLENUMBERII_SOLUTION3_H

#include <iostream>
#include <vector>

using namespace std;

/// time: O(N)
/// space: O(1)
class Solution3{
public:
    int singleNumber(vector<int>& nums){
		int ones = 0;
		int twos = 0;
		for (auto i:nums){
			ones = (ones^i) & ~twos;
			twos = (twos^i) & ~ones;
		}
		return ones;
	}
};

#endif
