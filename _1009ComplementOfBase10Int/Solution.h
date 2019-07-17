#ifndef _1009COMPLEMENTOFBASE10INT_SOLUTION_H
#define _1009COMPLEMENTOFBASE10INT_SOLUTION_H

#include <iostream>
using namespace std;

class Solution{
public:
	int bitwiseComplement(int N){
		int x = 1;
		while (N>x)
			x = x*2+1;
		return x-N;
	}
};


#endif
