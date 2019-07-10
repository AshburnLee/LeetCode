#ifndef _435NONOVERLAPPINGINTERVALS_SOLUTION2_H
#define _435NONOVERLAPPINGINTERVALS_SOLUTION2_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution2{
public:
	int eraseOverLapIntervals(vector<vector<int>>& intervals){
	
		if (intervals.size() == 0) 
			return 0;

		sort(intervals.begin(), intervals.end(), 
				[](vector<int> s, vector<int> e){
					return s[0] < e[0];
				} );

		vector<int> memo(intervals.size() ,1);
		for (int i=1; i<intervals.size(); i++){
			for (int j=0; j<i; j++){
				if (intervals[i][0] >= intervals[j][1])
					memo[i] = max(memo[i], 1+memo[j]);
			}
		}

		int res = 0;
		for (int i=0; i<memo.size(); i++)
			res = max(res, memo[i]);

		return intervals.size() - res;
	}
};

#endif
