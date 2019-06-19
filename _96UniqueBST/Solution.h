#ifndef _96UNIQUEBST_SOLUTION_H
#define _96UNIQUEBST_SOLUTION_H

#include "TreeNode.h"
#include <iostream>
#include <vector>
using namespace std;

/// DP 
/// time: O(N^2)
/// space: O(N)
class Solution{
public:
	int numTree(int n){
		vector<int> memo(n+1, 0);
		memo[0] = 1;
		for (int i=1; i<=n ;i++){
			for (int k=1; k<=i; k++){
				memo[i] += memo[k-1] * memo[i-1-(k-1)];
			}
		}
		return memo[n];
	
	}
};

#endif
