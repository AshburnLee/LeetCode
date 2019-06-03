#ifndef _867TRANSPOSEMATRIX
#define _867TRANSPOSEMATRIX

#include <iostream>
#include <vector>

using namespace std;
/// time: O(M*N)
/// space: O(M*N)
class Solution{
public:
	vector<vector<int>> transpose(vector<vector<int>>& A) {
		if (A.empty()) return {};
		int row = A.size();
		int col = A[0].size();
		vector<vector<int>> res(col, vector<int>(row, 0));
		
		for (int r=0; r<row; r++){
			for (int c=0; c<col; c++){
				res[c][r] = A[r][c];
			}
		}

		return res;

	}

};

#endif
