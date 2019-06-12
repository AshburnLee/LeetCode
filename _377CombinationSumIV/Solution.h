#ifndef _377COMBINATIONSUMIV_SOLUTION_H
#define _377COMBINATIONSUMIV_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;
/// time: O(2^N)
/// space: O(2^N)
class Solution{
public:
	vector<vector<int>> combinationSum4(vector<int>& nums, int target){
		vector<vector<int>> res;
		vector<int> tmp;
		DFS(nums, target, tmp, res);

		return res;
	}
private:
	///vector<vector<int>> res;

	void DFS(vector<int>& nums, int target, vector<int>& tmp, vector<vector<int>>& res){
		if (target==0){
			res.push_back(tmp);
			return;
		}

		for (int i=0; i<nums.size() && target>0; i++){
			tmp.push_back(nums[i]);
			DFS(nums, target-nums[i], tmp, res);

			tmp.pop_back();
		}
	}

};

#endif
