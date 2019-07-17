#ifndef _1122RELATIVESORTARRAY_SOLUTION2_H
#define _1122RELATIVESORTARRAY_SOLUTION2_H


#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
/// sort
///time: O(M*N)
///space:O(1)
class Solution2{
public:
	vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2){
		int index = 0;
		for (int i=0; i<arr2.size(); i++){
			
			for (int j=index; j<arr1.size(); j++){
				
				if (arr1[j]==arr2[i]){
					swap(arr1[j], arr1[index]);
					index++;
				}
			}
		}

		for (auto i:arr1)
			cout<<i<<" ";
		cout<<endl;

		sort(arr1.begin()+index, arr1.end());

		return arr1;
	}
};


#endif
