#ifndef _896MONOTONICARRAY
#define _896MONOTONICARRAY

#include <iostream>
#include <vector>

///time: O(N)
/// space: O(1)
class Solution{
public:
	bool isMonotonic(std::vector<int>& A){
		if (A[0]==A[A.size()-1]){
			for (int i=0; i<A.size()-1; i++)
				if (A[i]!=A[i+1])
					return false;
		}
		else if (A[0]<A[A.size()-1]){
			for (int i=0; i<A.size()-1; i++)
				if (A[i]>A[i+1])
					return false;
		}
		else{
			for (int i=0; i<A.size()-1; i++)
				if (A[i]<A[i+1])
					return false;
		}
		return true;
	
	}


};



#endif
