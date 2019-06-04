#ifndef _74SEARCH2DMATRIX_SOLUTION_H
#define _74SEARCH2DMATRIX_SOLUTION_H

#include <iostream>
#include<vector>
using namespace std;

/// time: O(M+N)
/// space: O(N)
class Solution{
public:
	bool searchMatrix(vector<vector<int>>& matrix, int target){
		int row = matrix.size();
		int col = matrix[0].size();

		vector<int> station(row, 0);
		for (int r=0; r<row; r++)
			station[r] = matrix[r][col-1];
		
		// rough-tuning
		int pr = 0;
		for (int i=0; i<station.size(); i++){
			if (target == station[i])
				return true;
			if (target < station[i]){
				pr = i;
				break;
			}
		}

		// fine-tuning
		for (int c=0; c<col; c++){
			if (matrix[pr][c] == target)
				return true;
		}
		return false;
	}

};
#endif
