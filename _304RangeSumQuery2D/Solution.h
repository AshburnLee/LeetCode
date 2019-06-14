#ifndef _304RANGESUMQUERY_NUMMATRIX_H
#define _304RANGESUMQUERY_NUMMATRIX_H

#include <iostream>
#include <vector>

using namespace std;

/// DP
/// time: O(N*M)
/// space: O(N*M)
class NumMatrix{
private:
	vector<vector<int>> memo;
public:
	NumMatrix(vector<vector<int>>& matrix) {
		if (matrix.size()==0 || matrix[0].size()==0) return;

		memo = vector<vector<int>>(matrix.size()+1, vector<int>(matrix[0].size()+1, 0));


		for (int r=0; r<matrix.size(); r++){
			for (int c=0; c<matrix[0].size(); c++){
				memo[r+1][c+1] = memo[r][c+1] + memo[r+1][c] + matrix[r][c]-memo[r][c];
			}
		}
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
		return memo[row2+1][col2+1]-memo[row1][col2+1]-memo[row2+1][col1]+memo[row1][col1];
        
    }
};

#endif
