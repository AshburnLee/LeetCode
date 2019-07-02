
#ifndef _974SUBARRAYSUMDIVISIBLEBYK_SOLUTION2_H
#define _974SUBARRAYSUMDIVISIBLEBYK_SOLUTION2_H

#include <iostream>
#include <vector>

///DP time limit exceede
///time: O(N^2)
///space: O(N)
using namespace std;
class Solution2{
public:
	int subarraysDivByK(vector<int>& A, int k){
		int res = 0;
		vector<int> memo(A.size(),0);
		memo[0]=A[0];
		for (int i=1; i<A.size(); i++)
			memo[i] = memo[i-1] + A[i];

		for (int i=0; i<memo.size(); i++){
			if (memo[i]%k==0) res++;
		}

		for (int i=0; i<A.size()-1; i++){
			for (auto& item:memo)
				item = item-A[i];
			for (int j=i+1; j<memo.size(); j++){
				if (memo[j]%k==0) res++;
			}
		}

		return res;
	}
};

#endif 
