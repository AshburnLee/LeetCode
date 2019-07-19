#ifndef _238PRODUCTOFARRAY_SOLUTION_H
#define _238PRODUCTOFARRAY_SOLUTION_H

#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
///time: O(N)
/// space :O(1)
class Solution{
public:
    vector<int> productExceptSelf(vector<int>& nums) {
		int nz=0;  //number of zeros
		for (auto item:nums)
			if (item==0)
				nz++;

		// when no zero in nums
		if (nz==0){
			int pro = accumulate(nums.begin(), nums.end(), 1, multiplies<int>());
			vector<int> res;
			for (auto item:nums)
				res.push_back(pro/item);
			return res;
		}

		// more than two zeros
		else if (nz>=2)
			return vector<int>(nums.size(), 0);
        
		// only one zero
		else if (nz==1){
			int index=0;
			for (int i=0; i<nums.size(); i++)
				if (nums[i]==0)
					index=i;
			int p=1;
			for (int i=0; i<nums.size(); i++)
				if (i!=index)
					p*=nums[i];
			vector<int> res;
			for (auto item: nums){
				if (item!=0)
					res.push_back(0);
				else
					res.push_back(p);
			}
			return res;
		}
    }

};

#endif
