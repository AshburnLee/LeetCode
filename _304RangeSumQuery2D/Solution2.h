#ifndef _304RANGESUMQUERY_NUMMATRIX2_H
#define _304RANGESUMQUERY_NUMMATRIX2_H

#include <iostream>
#include <vector>

using namespace std;

/// DP  based on #303, stack of cachoing rows
/// time: O(N*M)
/// space: O(N*M)
class NumMatrix2{
private:
	vector<vector<int>> memo;
public:
	NumMatrix2(vector<vector<int>>& matrix) {
		if (matrix.size()==0 || matrix[0].size()==0) return;

		memo = vector<vector<int>>(matrix.size(), vector<int>(matrix[0].size()+1, 0));
		for (int r=0; r<memo.size(); r++){
			for (int c=0; c<memo[0].size(); c++){
				memo[r][c+1] = memo[r][c] + matrix[r][c];
			}
		}
	}


    int sumRegion(int row1, int col1, int row2, int col2) {
		int res=0;
		for (int r=row1; r<=row2; r++){
			res += memo[r][col2+1] - memo[r][col1];
		}
		return res;
    }
};

#endif
