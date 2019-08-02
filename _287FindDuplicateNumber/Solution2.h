#ifndef _287FINFDDUPLICATENUMBER_SOLUTION2_H_
#define _287FINFDDUPLICATENUMBER_SOLUTION2_H_

#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_set>
#include <unordered_map>

///time: O(N)
/// space :O(N)
class Solution2{
public:
	int findDuplicate(std::vector<int>& nums){
		std::unordered_map<int, int> mp;
		for (auto item: nums)
			mp[item]++;
		for (auto itr = mp.begin(); itr!=mp.end(); itr++)
			if (itr->second != 1)
				return itr->first;
		return -1;
	}
};


#endif //_287FINFDDUPLICATENUMBER_SOLUTION2_H_
