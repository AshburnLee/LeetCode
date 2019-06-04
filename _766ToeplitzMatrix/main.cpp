#include <iostream>
#include <vector>

#include "Solution.h"

using namespace std;

int main(int argc, char** argv){
	vector<vector<int>> mat = {{1,2,3,4},
							   {5,1,2,3},
							   {6,5,1,2}};
	cout<<Solution().isToeplitzMatrix(mat)<<endl;
	
	vector<vector<int>> mat2 = {{1,2,3,4},
							    {5,1,9,3},
							    {6,5,1,2}};
	cout<<Solution().isToeplitzMatrix(mat2)<<endl;

	vector<vector<int>> mat3 = {{},{}};	
	cout<<Solution().isToeplitzMatrix(mat3)<<endl;

	return 0;

}

