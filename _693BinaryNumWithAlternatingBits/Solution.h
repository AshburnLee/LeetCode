#ifndef _693BINARYNUMWITHALTERNATINGBITS_SOLUTION_H
#define _693BINARYNUMWITHALTERNATINGBITS_SOLUTION_H

#include <iostream>

class Solution{
	public:
		int hasAlternatingBits(int n){
		
			int pre = n%2;
			while(n>0){
				n = n>>1;
				int cur = n%2;
				if (cur == pre)
					return false;
				pre = cur;
			}
			return true;
		}
};

#endif
