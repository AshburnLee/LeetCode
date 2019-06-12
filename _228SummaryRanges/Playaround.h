#ifndef _228SUMMARYRANGES_SOLUTION_H
#define _228SUMMARYRANGES_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;
/// time: O(N^2)
/// space: O(N)
class Solution{
public:
	vector<string> summaryRanges(vector<int>& nums){
		if (nums.size()==0) return res;
		if (nums.size()==1) res.push_back(to_string(nums[0]));

		else if (nums.size()>=2){
			int i=0, k=0, j=1;
			while(j<=nums.size()){
				if (j==nums.size()){
					func(i, k, nums);
					break;
				}else if ((long)nums[j] - (long)nums[k]==1){
					j++;
					k++;
				}else if ((long)nums[j] - (long)nums[k]!=1){
					func(i, k, nums);
					i = j;
					k = j;
					j++;
				}
			}
		}
		return res;
	}
private:
	vector<string> res;
	void func(int i, int k, vector<int>& nums){
		int arrow = 0;
		string tmp;
		for (int l=i; l<=k; l++){
			tmp += to_string(nums[l]);
			if (arrow < k-i){
				tmp += "->";
				arrow ++;
			}
		}
		res.push_back(tmp);
	}
};

#endif
