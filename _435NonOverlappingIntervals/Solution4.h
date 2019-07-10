#ifndef _435NONOVERLAPPINGINTERVALS_SOLUTION4_H
#define _435NONOVERLAPPINGINTERVALS_SOLUTION4_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/// Greedy 
/// time: O(N)
/// space: O(N)
class Solution4{
public:
	int eraseOverLapIntervals(vector<vector<int>>& intervals){
		
		if (intervals.size() == 0) return 0;

		sort(intervals.begin(), intervals.end(),
				[](vector<int>& s, vector<int>& e){
					return s[1] < e[1];
				});

		int res = 1;
		int pre = 0;
		for (int i=1; i<intervals.size(); i++){
			if (intervals[i][0] >= intervals[pre][1]){
				res ++;
				pre = i;
			}
		}

		return intervals.size() - res;
	}
};


#endif 
