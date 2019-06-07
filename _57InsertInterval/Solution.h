#ifndef _57INSERTINTERVALS_SOLUTION_H
#define _57INSERTINTERVALS_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/// time: O(NLlogN)
/// space: O(M+N)
class Solution{
private:
	static bool compare(vector<int>& a, vector<int>& b){
		return a[0]<b[0];
	}
public:
	vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval){
		vector<vector<int>> res;

		intervals.push_back(newInterval);
		if (intervals.size() ==0) return res;
		if (intervals.size() ==1) {
			res.push_back(intervals[0]);
			return res;
		}

		sort(intervals.begin(), intervals.end(), compare);

		res.push_back(intervals[0]);
		int i=1;
		while(i < intervals.size()){
			vector<int>& last = res.back();
			if (last[1]<intervals[i][0])
				res.push_back(intervals[i]);
			else{
				last[1] = max(last[1], intervals[i][1]);
			}
			i++;
		}

		return res;
		
	}

};
#endif
