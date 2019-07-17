#ifndef _868BINARYGAP_SOLUTION2_H
#define _868BINARYGAP_SOLUTION2_H

#include <iostream>
#include <vector>

using namespace std;

///time: O(logN)
/// space: O(1)
class Solution2{
public:
	int binaryGap(int N){
		int last = -1, res=0;
		for (int i=0; i<32; i++){
			if (((N>>i)&1) > 0) {
				if (last >= 0)
					res = max(res, i-last);
				last = i;
			}
		}
		return res;
	}	
};

#endif
