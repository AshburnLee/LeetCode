#ifndef _59SPIRALMATRIXII
#define _59SPIRALMATRIXII

#include <iostream>
#include <vector>

using namespace std;

/// time: O(N^N)
/// space: O(N^N)
class Solution{
private:

	void fillMatrix(int& item, vector<vector<int>>& matrix, int r1,int c1,int r2, int c2){
		int count = r1;
		for (int c=count; c<c2; c++){
			matrix[r1][c] = item;
			item++;
		}
		for (int r=count; r<r2; r++){
			matrix[r][c2] = item;
			item++;
		}
		for (int c=c2; c>count; c--){
			matrix[r2][c] = item;
			item++;
		}
		for (int r=r2; r>count; r--){
			matrix[r][c1] = item;
			item++;
		}

	}
	void printMat(vector<vector<int>>& matrix){
		for (auto i: matrix){
				for (auto ii:i){
						cout<<ii<<" ";
				}
				cout<<endl;
		}
	}
public:
	vector<vector<int>> generateMatrix(int n){
		vector<vector<int>> matrix(n, vector<int>(n, 0)); // init a matrix

		int r1 = 0, c1 = 0;
		int r2 = n-1, c2 = n-1;
		
		int item = 1;
		int i = 1;

		while(i<=n/2){
			fillMatrix(item, matrix, r1, c1, r2, c2);
			r1++, c1++;
			r2--, c2--;	
			i++;
		}

		if (n%2!=0)
			matrix[n/2][n/2]=n*n;

		return matrix;
	}
};

#endif
