#ifndef _40COMBINATIONSUMII_SOLUTION_H
#define _40COMBINATIONSUMII_SOLUTION_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

///time: O(2^N)
/// space: O(2^N)
class Solution{
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
		set<vector<int>> res;
		vector<int> tmp;
		sort(candidates.begin(), candidates.end());
		DFS(candidates, target, res, tmp ,0);
		return {res.begin(), res.end()};

	}
private:
	void DFS(vector<int>& candidates, int target, set<vector<int>>& res, vector<int>& tmp, int index){
	    if (target==0){
		    res.insert(tmp);
			return;
		}

		for (int i=index; i<candidates.size(); i++){
		    if (candidates[i]<=target){
		        tmp.push_back(candidates[i]);
			    DFS(candidates, target-candidates[i], res, tmp, 1+i);
			    tmp.pop_back();
			}else break;
		}
	
	}

};
#endif
