#ifndef _494TARGETSUM_SOLUTION_H
#define _494TARGETSUM_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;
/// time: O(N^N)
/// space: O(N)
class Solution{
private: 
	int sum;
	int computeSum(vector<int>& nums, vector<int>& sign){
		int tmp = 0;
		for (int i=0; i<nums.size(); i++){

			if (sign[i]==0)
				tmp -= nums[i];
			else
				tmp += nums[i];
		}
		return tmp;
	}
public:
	int findTargetSumWays(vector<int>& nums, int S){
		int k = nums.size();

		sum = combinations(S, nums.size(), nums);

		return sum;	
	}

	int combinations(int S, int k, vector<int>& nums){
		vector<int> sign;
		sum=0;
		signCollections(S, k, 0, sign, nums);

		return sum;
	}

	void signCollections(int S, int k, int start, vector<int>& sign, vector<int>& nums){
		if (sign.size() == k){
			if (computeSum(nums, sign) == S)
				sum++;
			return;
		}

		for (int i=0; i<2; i++){
			sign.push_back(i);
			signCollections(S, k, i, sign, nums);
			sign.pop_back();
		}
		return;
	}
	
};

#endif
