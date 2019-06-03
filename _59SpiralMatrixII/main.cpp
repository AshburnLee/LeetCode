#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

void printMat(vector<vector<int>>& matrix){
	for (auto i: matrix){
			for (auto ii:i){
					cout<<ii<<" ";
			}
			cout<<endl;
	}
}
int main(int argc, char** argv){
	vector<vector<int>> matrix;
	for (int i=0; i<10; i++){
		cout<<i<<" ";
	}
	cout<<endl;

	matrix = Solution().generateMatrix(1);	
	printMat(matrix);
	cout<<endl;

	matrix = Solution().generateMatrix(2);	
	printMat(matrix);
	cout<<endl;	
	
	matrix = Solution().generateMatrix(3);	
	printMat(matrix);
	cout<<endl;

	matrix = Solution().generateMatrix(4);	
	printMat(matrix);
	cout<<endl;
	
	matrix = Solution().generateMatrix(7);	
	printMat(matrix);
	cout<<endl;

	matrix = Solution().generateMatrix(10);	
	printMat(matrix);
	cout<<endl;

	return 0;
}
