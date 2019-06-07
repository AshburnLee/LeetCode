#ifndef _57INSERTINTERVALS_SOLUTION2_H
#define _57INSERTINTERVALS_SOLUTION2_H

#include <iostream>
#include <vector>

using namespace std;

class Solution2{
public:
	vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval){
		vector<vector<int>> res;

	



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


};

#endif 
