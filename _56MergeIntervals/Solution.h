#ifndef _56MERGEINTERVALS_SOLUTION_H
#define _56MERGEINTERVALS_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/// time: O(intervals.size())
/// space: O(2* intervals.size()
class Solution{
private:
	static bool compare(vector<int>& a , vector<int>& b){
		return a[0] < b[0];
	}
public:
	vector<vector<int>> merge(vector<vector<int>>& intervals) {
		vector<vector<int>> res;
		if (intervals.size()==0)
			return res;
		if (intervals.size()==1){
			res.push_back(intervals[0]);
			return res;
		}
		
		sort(intervals.begin(), intervals.end(), compare);

		res.push_back(intervals[0]);

		int i=1;
		while(i < intervals.size()){
			vector<int>& last = res.back();

			if (last[1] < intervals[i][0]){
				res.push_back(intervals[i]);
			}else{
				last[1] = max(last[1], intervals[i][1]);
			}
			i++;
		}
		return res;
	}

};

#endif
