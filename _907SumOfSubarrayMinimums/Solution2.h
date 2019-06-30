#ifndef _908SUMOFSUBARRAYMINIMUMS_SOLUTION2_H
#define _908SUMOFSUBARRAYMINIMUMS_SOLUTION2_H

#include <iostream>
#include <vector>
#include <algorithm>

/// Easy to understand yet time limit exceede
/// time: O(N^2)
/// space: O(N)
using namespace std;
class Solution2{
public:
	int sumSubarrayMins(vector<int>& A){
		vector<vector<int>> res;
		int ans = 0;

		for (int i=0; i<A.size(); i++){
			vector<int> tmp;
			tmp.push_back(A[i]);
			ans += *min_element(tmp.begin(), tmp.end());
			for (int j=i+1; j<A.size(); j++){
				tmp.push_back(A[j]);
				ans+=*min_element(tmp.begin(), tmp.end());
			}
		}

		return ans;
	}
};

#endif
