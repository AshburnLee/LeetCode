#ifndef _868BINARYGAP_SOLUTION_H
#define _868BINARYGAP_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

///time: O(logN)
/// space: O(logN)
class Solution{
public:
	int binaryGap(int N){
		vector<int> index;
		int k=0;
		int yu;
		while (N!=0){
			k++;
			yu = N%2;
			if (yu == 1)
				index.push_back(k);
			N/=2;
		}

		int res=0;
		for (int i=0; i<index.size()-1; i++){
			res = max(res, index[i+1]-index[i]);	
		}
			
		return res;
	}	
};

#endif
