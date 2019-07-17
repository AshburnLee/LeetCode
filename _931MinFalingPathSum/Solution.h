#ifndef _931MINFALLINGPATHSUM_SOLUTION_H
#define _931MINFALLINGPATHSUM_SOLUTION_H

#include <iostream>
#include <vector>
#include <climits>

using namespace std;

///time: O(N^2)
/// space: O(N^2)
class Solution{
public:
	int minFallingPathSum(vector<vector<int>>& A) {
		int n = A.size();
		int m = n+2;
		vector<vector<int>> memo(n, vector<int>(m, INT_MAX));

		// init memo
		for (int i=1; i<m-1; i++)
			memo[0][i] = A[0][i-1];

		// construct memo
		for (int j=1; j<n; j++){
			for (int i=1; i<m-1; i++ ){
				memo[j][i] =A[j][i-1] + min(memo[j-1][i-1], min(memo[j-1][i], memo[j-1][i+1]));
			}
		}

		// find answer
		int res=memo[n-1][0];
		for (int i=0; i<m; i++)
			res = min(memo[n-1][i], res);
		
		return res;
    }
};

#endif
