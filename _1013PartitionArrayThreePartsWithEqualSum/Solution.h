#ifndef _1013PARTITIONARRAYTHREEWITHEQUALSUM_SOLUTION_H
#define _1013PARTITIONARRAYTHREEWITHEQUALSUM_SOLUTION_H


#include <iostream>
#include <vector>
#include <numeric>

using namespace std;
///time: O(N)
/// space :O(1)
class Solution{
public:
	bool canThreePartsEqualSum(vector<int>& A) {
		int sum = accumulate(A.begin(), A.end(), 0);   
		int count = 3;
		if ( sum%3 != 0 ) return false;
		int avrSum = sum/3;
		int pSum = avrSum;

		for (int i=0; i<A.size(); i++){
			pSum-=A[i];
		//	cout<<pSum<<" ";
			cout<<count<<" ";
			if (pSum == 0){
				count--;
				pSum = avrSum;
			}
			if (count == 0 && i==A.size()-1)
				return true;
		}
		return false;
    }
};

#endif
