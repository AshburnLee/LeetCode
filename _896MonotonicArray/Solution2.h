#ifndef _896MONOTONICARRAY_SOLUTION2_H
#define _896MONOTONICARRAY_SOLUTION2_H

#include <iostream>
#include <vector>

///time: O(N)
/// space: O(1)
class Solution2{
public:
	bool isMonotonic(std::vector<int>& A){
	
		bool inc = true, dec = true;
		for (int i=1; i<A.size(); i++){
			if (A[i]<A[i-1])
				inc = false;
			if (A[i]>A[i-1])
				dec = false;
		}
		return inc || dec;
	}


};



#endif
