#ifndef _1089DUPILCATEZEROS_SOLUTION2_H
#define _1089DUPILCATEZEROS_SOLUTION2_H

#include <iostream>
#include <vector>
#include <list>

using namespace std;

/// time: O(N)
/// space: O(N)
class Solution2{
	public:
		void duplicateZeros(vector<int>& arr){
			int size = arr.size();
			list<int> q(arr.begin(), arr.end());
	
			list<int>::iterator itr = q.begin();
			for (;itr!=q.end(); itr++){
				if (*itr == 0){
					q.insert(itr, 0);
				}
			}

			itr = q.begin();
			for (int i=0; i<size; i++){
				arr[i] = *itr;
				itr++;
			}
		}
};

#endif
