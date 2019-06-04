#ifndef _240SEARCH2DMATRIX_SOLUTION_H
#define _240SEARCH2DMATRIX_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
	// col>=row
	vector<int> getDiag1(int d, vector<vector<int>>& matrix){
		int row = matrix.size();

		vector<int> diag;
		for (int i=0; i<row; i++)
			diag.push_back(matrix[i][i+d]);

		return diag;
	}

	// row > col
	vector<int> getDiag2(int d, vector<vector<int>>& matrix){
		int col = matrix[0].size();

		vector<int> diag;
		for (int i=0; i<col; i++)
			diag.push_back(matrix[i+d][i]);

		return diag;
	}



	/// search target 
	bool search(vector<vector<int>>& matrix, int target, int pr, int pc){
		for (int r=0; r<pr; r++)
			if (target == matrix[r][pc])
				return true;
			
		for (int c=0; c<pc; c++)
			if (target == matrix[pr][c])
				return true;
		return false;
	}

public:
	bool searchMatrix(vector<vector<int>>& matrix, int target){
		if (matrix.empty() || matrix[0].empty()) return false;

		int pr = 0;
		int pc = 0;
		int row = matrix.size();
		int col = matrix[0].size();

		for (int d=0; d<=max(row, col)-min(row, col); d++){
			vector<int> diag;
			
			if (col>=row)
				diag = getDiag1(d, matrix);
			else if (col<row)
				diag = getDiag2(d, matrix);
			
			for (int i=0; i<diag.size(); i++){
				if (diag[i]>target){
					pr = i;
					pc = i+d;
					if (search(matrix, target, pr, pc)) return true;
					else
						break;
				}
				else if (diag[i]==target) return true;
			}
		}
		return false;
	}

};

#endif
