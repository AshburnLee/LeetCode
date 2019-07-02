#ifndef _974SUBARRAYSUMDIVISIBLEBYK_SOLUTION_H
#define _974SUBARRAYSUMDIVISIBLEBYK_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

/// DP but memory limit exceede
/// time: O(N^2)
/// space: O(N)
class Solution{
	public:
		int subarraysDivByK(vector<int>& A, int k){
			int res=0;
			for (int i=0; i<A.size(); i++){
				vector<int> memo(A.size()-i, 0);
				memo[0]=A[i];
				if (memo[0]%k==0) res++;
				for (int j=1; j<A.size()-i; j++){
					memo[j] = memo[j-1] + A[j+i];
					if (memo[j]%k==0)
						res++;
				}

			}
			return res;
		
		}

};

#endif
