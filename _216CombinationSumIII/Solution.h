#ifndef _216COMBINATIONSUMIII_SOLUTION_H
#define _216COMBINATIONSUMIII_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;
			
/// time: O(9^k)
/// space: O(9^k)
class Solution{
	public:
		vector<vector<int>> combinationSum3(int k, int n){
			vector<int> tmp;
			DFS(k, n, tmp, 0);
			
			return res;
		}

	private:
		vector<vector<int>> res;
		void DFS(int k, int n, vector<int>& tmp, int index){
			if (k==0 && n==0){
				res.push_back(tmp);
				return;
			}

			for (int i=index+1; i<=9; i++){
				tmp.push_back(i);
				k--;
				DFS(k, n-i, tmp, i );
				k++;
				tmp.pop_back();
			}
		}
};
#endif
