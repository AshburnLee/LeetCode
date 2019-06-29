#ifndef _1089DUPILCATEZEROS_SOLUTION_H
#define _1089DUPILCATEZEROS_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

/// time: O(N)
/// space: O(N)
class Solution{
	public:
		void duplicateZeros(vector<int>& arr){
			int size = arr.size();
			vector<int> res;

			for (int i=0; i<size; i++){
				if (res.size() != size){
					res.push_back(arr[i]);
					if (arr[i]==0)
						res.push_back(0);
				}
			}
			for (int i=0 ;i<size; i++){
				arr[i] = res[i];
			}
		}
};

#endif
