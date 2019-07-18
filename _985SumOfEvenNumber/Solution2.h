#ifndef _985SUMOFEVENNUMBER_SOLUTION2_H
#define _985SUMOFEVENNUMBER_SOLUTION2_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
/// time: O(M*N)
/// space:O(1)
class Soltuion2{

public:
	vector<int> sumEvenAfterQueries(vector<int>& A, vector<vector<int>>& queries) {
		vector<int> res;
		int sum = accumulate(A.begin(), A.end(), 0, [](int s, int a){
				return s+(a%2==0?a:0);
				});
		
		for (auto q:queries){
			if(A[q[1]]%2==0)
				sum-=A[q[1]];

			A[q[1]] += q[0];
			
			if (A[q[1]]%2==0)
				sum+=A[q[1]];
			
			res.push_back(sum);
		}
		return res;
	}
};


#endif
