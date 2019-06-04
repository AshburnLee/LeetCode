#ifndef _766TOEPLITZMATRIX_SOLUTION_H
#define _766TOEPLITZMATRIX_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

/// tiem: O(N*M)
/// sapce: O(1)
class Solution{
public:
	bool isToeplitzMatrix(vector<vector<int>>& matrix){
		int row = matrix.size();
		int col = matrix[0].size();
		
		for (int r=1; r<row; r++)
			for (int c=1; c<col; c++)
				if (matrix[r-1][c-1] != matrix[r][c])
					return false;

		return true;
	}

};
#endif
