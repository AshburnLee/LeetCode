#ifndef _215KTHLARGESTELEMENT_H
#define _215KTHLARGESTELEMENT_H

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

// 重构类运算符()
struct Increase{
	bool operator()(const int& a, const int& b){
		return a>b;
	}
};

class Solution{
	public:
		int findKthLargestElement(vector<int>& nums, int k){
			sort(nums.begin(), nums.end(), Increase());
			return nums[k-1];
		}
};


#endif  // _215KTHLARGESTELEMENT_H
