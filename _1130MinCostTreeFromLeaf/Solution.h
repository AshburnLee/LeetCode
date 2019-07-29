#ifndef _1130MINCOSTTREEFROMLEAF_SOLUTION_H
#define _1130MINCOSTTREEFROMLEAF_SOLUTION_H

#include <iostream>
#include <vector>
#include <climits>

///time: O(N^3)
///space: O(N^2)
class Solution{
private:
	int memo[41][41];
	int splitMax[41][41];

	int dp(int left, int right){
		if(left == right)
			return 0;
		if (memo[left][right]!=-1)
			return memo[left][right];
		int res = INT_MAX;
		for (int i=left; i<right; i++)
			res = std::min(res, splitMax[left][i] * splitMax[i+1][right] + dp(left, i)+dp(i+1, right));

		memo[left][right] = res;
		return res;
	
	}
public:
	int mctFromLeafValues(std::vector<int>& arr){
		for (int i=0; i<41; i++){
			for (int j=0; j<41; j++)
				memo[i][j]=-1;
		}
		for (int i=0; i<arr.size();i++){
			splitMax[i][i] = arr[i];
			for (int j=i+1; j<arr.size(); j++)
				splitMax[i][j] = std::max(splitMax[i][j-1], arr[j]);
		}

		return dp(0, arr.size()-1);
	}
};


#endif
