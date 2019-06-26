#ifndef _1051HEIGHTCHECKER_SOLUTION_H
#define _1051HEIGHTCHECKER_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/// time: O(logN)
/// space: O(N)
class Solution{
	public:
		int heightChecker(vector<int>& height){
			vector<int> tmp(height.begin(), height.end());

			sort(height.begin(), height.end());
			
			int res = 0;
			for (int i=0; i<tmp.size(); i++){
				if(tmp[i]!=height[i])
					res ++;
			}

			return res;

		}
};

#endif
