#ifndef _33SEARCHINROTATEDSORTEDARRAY_SOLUTION_H
#define _33SEARCHINROTATEDSORTEDARRAY_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

/// time: O(M*N)
/// space: O(M*N)
class Solution{
	public:
		int search(vector<int>& nums, int target){
			int res = -1;
			for (int i=0;i<nums.size();i++){
				if (nums[i]==target){
				res = i;
				break;
				}
			}
			return res;
		}
};

#endif // _33SEARCHINROTATEDSORTEDARRAY_SOLUTION_H

