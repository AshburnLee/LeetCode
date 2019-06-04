#include <iostream>
#include <vector>
#include "Solution.h"
#include "Solution2.h"

using namespace std;

int main(int argc, char** argv){
	vector<vector<int>> mat = {{1,4,7, 11,15,18},
						       {2,5,8, 12,16,20},
			                   {3,6,9, 13,17,22},
			                   {4,7,12,14,19,30}};
	cout<<Solution().searchMatrix(mat, 22)<<endl;
	cout<<Solution().searchMatrix(mat, 11)<<endl;

	cout<<endl;
	vector<vector<int>> mat2 = {{1,4, 7 },
						        {2,5, 8 },
			                    {3,6, 9 },
			                    {4,7, 12},
							    {5,10,20}};
	cout<<Solution().searchMatrix(mat2, 2)<<endl;
	cout<<Solution().searchMatrix(mat2, 6)<<endl;

	cout<<endl;
	vector<vector<int>> mat3 = {{1},{3},{5}};
	cout<<Solution().searchMatrix(mat3, 0)<<endl;
	cout<<Solution().searchMatrix(mat3, 3)<<endl;
	
	cout<<endl;
	vector<vector<int>> mat4 = {{1,3,5}};
	cout<<Solution().searchMatrix(mat4, 0)<<endl;
	cout<<Solution().searchMatrix(mat4, 3)<<endl;

	return 0;
}
