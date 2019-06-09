#ifndef _137SINGLENUMBERII_SOLUTION_H
#define _137SINGLENUMBERII_SOLUTION_H

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/// time: O(N)
/// space: O(N)
class Solution{
public:
    int singleNumber(vector<int>& nums){
		unordered_map<int, int> mp;
		int res;
		for (int i=0; i<nums.size(); i++)
			mp[nums[i]]++;

		for (auto itr=mp.begin(); itr!=mp.end(); itr++)
			if (itr->second==1){
				res = itr->first;
				break;
			}
		return res;
	}
};

#endif
