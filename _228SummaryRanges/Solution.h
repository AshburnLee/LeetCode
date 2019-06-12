#ifndef _228SUMMARYRANGES_PLAYGROUND_H
#define _228SUMMARYRANGES_PLAYGROUND_H

#include <iostream>
#include <vector>

using namespace std;
/// time: O(N^2)
/// space: O(N)
class Playaround{
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
		string tmp;
		if(i==k)
			res.push_back(to_string(nums[i]));
		else{
			tmp += to_string(nums[i]);
			tmp += "->";
			tmp += to_string(nums[k]);
			res.push_back(tmp);
		}
	}
};

#endif
