#ifndef _435NONOVERLAPPINGINTERVALS_SOLUTION3_H
#define _435NONOVERLAPPINGINTERVALS_SOLUTION3_H

#include <iostream>
#include <vector>
#include <algorithm>
#include "Interval.h"

using namespace std;

/// Greedy 
/// time: O(N)
/// space: O(N)
class Solution3{
public:
	int eraseOverLapIntervals(vector<Interval*>& intervals){
		
		if (intervals.size() == 0) return 0;

		sort(intervals.begin(), intervals.end(),
				[](Interval* s, Interval* e){
					return s->end < e->end;
				});

		int res = 1;
		int pre = 0;
		for (int i=1; i<intervals.size(); i++){
			if (intervals[i]->start >= intervals[pre]->end){
				res ++;
				pre = i;
			}
		}

		return intervals.size() - res;
	}
};


#endif 
