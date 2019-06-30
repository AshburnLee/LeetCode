#ifndef _908SUMOFSUBARRAYMINIMUMS_SOLUTION_H
#define _908SUMOFSUBARRAYMINIMUMS_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>

/// Easy to understand but Memory Limit Exceeded
///time: O(N^2)
///space: O(N^2)
using namespace std;
class Solution{
public:
	int sumSubarrayMins(vector<int>& A){
		vector<vector<int>> res;

		for (int i=0; i<A.size(); i++){
			vector<int> tmp;
			tmp.push_back(A[i]);
			res.push_back(tmp);
			for (int j=i+1; j<A.size(); j++){
				tmp.push_back(A[j]);
				res.push_back(tmp);
			}
		}

		int ans=0;
		for (auto i: res){
			ans += *min_element(i.begin(), i.end());	
		}
		
		// show res
		for (auto i: res){
			for (auto ii:i)
				cout<<ii<<" ";
			cout<<endl;
		}
		cout<<endl;

		return ans;
	}
};

#endif
