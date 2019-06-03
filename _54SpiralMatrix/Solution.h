#ifndef _54SPIRALMATRIX_SOLUTION_H
#define _54SPIRALMATRIX_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

/// time: O(M*N)
/// space: O(M*N)
class Solution{
private:
	vector<int> res;
	void spr1al(vector<vector<int>>& matrix, int r1, int c1, int r2, int c2, int count){
		for (int c = count; c<c2; c++)
			res.push_back(matrix[r1][c]);
		for (int r = count; r<r2; r++)
			res.push_back(matrix[r][c2]);
		for (int c = c2; c>count; c--)
			res.push_back(matrix[r2][c]);
		for (int r = r2; r>count; r--)
			res.push_back(matrix[r][c1]);
	}

	
	void printVec(vector<int>& res ){
		for (auto i: res)
			cout<<i<<" ";
		cout<<endl;
	}
public:
	vector<int> spiralOrder(vector<vector<int>>& matrix) {
       		if (matrix.empty()) return {};
        
		int row = matrix.size();
		int col = matrix[0].size();
        

		int r1 = 0, c1 = 0;
		int r2 = row-1, c2 = col-1;
		int count = 0;
       

		while( r1< r2 && c1 < c2 ) {
			spr1al(matrix, r1, c1, r2, c2, count);
			r1++, c1++;
			r2--, c2--;
			count++;
		}
		if (r1==r2 && c1!=c2){
			for (int c=c1; c<=c2; c++)
				res.push_back(matrix[r1][c]);
		}else if (c1==c2 && r1!=r2){
			for (int r=r1; r<=r2;r++)
				res.push_back(matrix[r][c1]);
		}else if(r1==r2 && c1==c2){
			res.push_back(matrix[r1][c1]);
		}

		return res;
	}
};

#endif
