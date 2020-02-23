#ifndef IMAGESMOOTHER_H_
#define IMAGESMOOTHER_H_

#include<iostream>
#include <vector>

using namespace std;

class Solution{
public:
	vector<vector<int>> imageSmoother(vector<vector<int>>& M){
		int numRow = M.size();
		int numCol = M[0].size();
		vector<vector<int>> res(numRow, vector<int>(numCol, 0));

		for(int i=0;i<numRow;i++){
			for(int j=0;j<numCol;j++){
				res[i][j]=smoothThisPixle(M, i, j);
			}
		}
		return res;
	}
private:
	int smoothThisPixle(vector<vector<int>>& M, int r, int c){
		int numRow = M.size();
		int numCol = M[0].size();
		int count=0;
		int sum=0;
		for(int i=-1;i<2;i++){
			for(int j=-1;j<2;j++){
				if(r+i<0 || r+i>=numRow || c+j<0 ||c+j>=numCol)
					continue;
				count++;
				sum+=M[r+i][c+j];
			}
		}
		return sum/count;

	}

};


#endif
