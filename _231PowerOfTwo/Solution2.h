#ifndef _231POWEROFTWO_SOLUTION2_H
#define _231POWEROFTWO_SOLUTION2_H

#include <iostream>

using namespace std;
///iteration 
///time: O(logN)
/// space: O(1)
class Solution2{
public:
	bool isPowerOfTwo(int n){
		if (n==0 || (n>1 && n%2 != 0)) 
			return false;
		while(n!=1){
			if (n%2 == 0)
				n = n/2;
			else //(n%2 != 0)
				return false;
		}
		return true;
	}
};


#endif
