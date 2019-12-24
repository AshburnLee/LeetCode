#ifndef _215KTHLARGESTELEMENT_SOLUTION2_H
#define _215KTHLARGESTELEMENT_SOLUTION2_H

#include <algorithm>
#include <iostream>
#include <vector>

/*
 * This process only works for an array with elements from 0 to 9.
 * one digit.
 * */
using namespace std;
class Solution2{
public:
	int findKthLargestElement(vector<int>& nums, int k){
		int res = 1;  // 与k比较
		int count[10] = {0};  // 频数记录
		for (int i=0; i<nums.size(); i++){
			count[nums[i]]++;
		}

		for (int i=9; i>=0; i--){    
			if (count[i] == 0) continue;

			for (int j=1; j<=count[i]; j++){
				if (res < k) res+=1;  
				else if(res == k) return i;
			}
		}

		throw invalid_argument("no return");
	}
};
#endif  // _215KTHLARGESTELEMENT_SOLUTION2_H

