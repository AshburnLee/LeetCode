#ifndef _303RANGESUMQUERY_SOLUTION_H
#define _303RANGESUMQUERY_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;
/// time: 15.99%  Inefficient
/// space: 13.12%
class NumArray {
private:
	vector<int> tmp;
public:
    NumArray(vector<int>& nums) {
		 tmp = nums;
    }
    
    int sumRange(int i, int j) {
        int res = 0;
		for (int k=i; k<=j; k++)
			res += tmp[k];
		return res;
    }
};

#endif
