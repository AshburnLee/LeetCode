#ifndef _435NONOVERLAPPINGINTERVALS_SOLUTION_H
#define _435NONOVERLAPPINGINTERVALS_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Interval{
	int start;
	int end;
	Interval():start(0), end(0) {}
	Interval(int s, int e):start(s), end(e){}
};

class Solution{
public:
	int eraseOverLapIntervals(vector<Interval*> intervals){
	
		if (intervals.size() == 0) 
			return 0;
		sort(intervals.begin(), intervals.end(), 
				[](Interval* s, Interval* e){
					return s->start < e->start;
				} );

		vector<int> memo(intervals.size() ,1);
		for (int i=1; i<intervals.size(); i++){
			for (int j=0; j<i; j++){
				if (intervals[i]->start >= intervals[j]->end)
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
