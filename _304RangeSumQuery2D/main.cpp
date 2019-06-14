#include <iostream>
#include "Solution.h"
#include "Solution2.h"

using namespace std;

int main(){
	vector<vector<int>> matrix = {{3,0,1,4,2},
								{5,6,3,2,1},
								{1,2,0,1,5},
								{4,1,0,1,7},
								{1,0,3,0,5}};

	NumMatrix* obj = new NumMatrix(matrix);

	cout<<obj->sumRegion(2,1,4,3)<<endl;
	cout<<obj->sumRegion(1,1,2,2)<<endl;
	cout<<obj->sumRegion(1,2,2,4)<<endl;

	cout<<endl;
	NumMatrix2* obj2 = new NumMatrix2(matrix);
	obj2->printmemo();
	cout<<obj2->sumRegion(2,1,4,3)<<endl;
	cout<<obj2->sumRegion(1,1,2,2)<<endl;
	cout<<obj2->sumRegion(1,2,2,4)<<endl;

	return 0;
}

