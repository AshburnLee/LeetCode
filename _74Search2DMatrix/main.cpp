#include<iostream>
#include<vector>
#include "Solution.h"
using namespace std;

int  main(int argc, char** argv){
	vector<vector<int>> matrix = {{1,3,5,7},{11,13,15,17},{21,23,25,27}};
	cout<<Solution().searchMatrix(matrix, 23)<<endl;
	cout<<Solution().searchMatrix(matrix, 22)<<endl;

	vector<vector<int>> matrix2 = {{1}};
	cout<<Solution().searchMatrix(matrix2, 1)<<endl;
	cout<<Solution().searchMatrix(matrix2, 2)<<endl;
	return 0;
}
