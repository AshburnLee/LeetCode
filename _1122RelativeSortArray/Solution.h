#ifndef _1122RELATIVESORTARRAY_SOLUTION_H
#define _1122RELATIVESORTARRAY_SOLUTION_H


#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
/// time: O(M*N)
/// space: O(M)
using namespace std;
class Solution{
public:
	vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2){
		vector<int> res;
		map<int, int> mp;
		for (auto& i: arr1)
			mp[i]++;
		
		// for each item in arr2
		for (int i=0; i<arr2.size(); i++){

			// seach arr2[i] from map
			for (auto itr=mp.begin(); itr!=mp.end(); itr++){

				if (itr->first == arr2[i]){
					for (int j=0; j<itr->second; j++)
						res.push_back(arr2[i]);
					mp.erase(itr);
				}
			}
		}
		
		
		for (auto itr = mp.begin(); itr!=mp.end(); itr++)
			for (int j=0; j<itr->second; j++)
				res.push_back(itr->first);

		return res;
	}
};


#endif
