#include <iostream>
#include "Solution.h"

using namespace std;

void printVec(vector<int>& res ){
	for (auto i: res)
		cout<<i<<" ";
	cout<<endl;
}

int main(int argc, char** argv){
	
	vector<vector<int>> matrix = {
		{0,1,2,3,4,5            ,6},
		{19,  20,21,22,23,24    ,7},
		{18,  31,32,33,34   ,25    ,8},
		{17,  30,29,28,27,26   ,9},
		{16,15,14,13,12,11    ,10}};
	vector<int> res = Solution().spiralOrder(matrix);
	printVec(res);
	cout<<endl;

	vector<vector<int>> matrix2 = {
		{1,2,3},
		{8,9,4},
		{7,6,5}};
	vector<int> res2 = Solution().spiralOrder(matrix2);
	printVec(res2);
	cout<<endl;

	vector<vector<int>> matrix3 = {
		{1,2,3},
		{10,11,4},
		{9,12,5},
		{8,7,6}};
	vector<int> res3 = Solution().spiralOrder(matrix3);
	printVec(res3);	
	cout<<endl;	

	vector<vector<int>> matrix4 = {
		{1,2,3}
		};
	vector<int> res4 = Solution().spiralOrder(matrix4);
	printVec(res4);
	cout<<endl;

	vector<vector<int>> matrix5 = {
		{1},{2},{3}
		};
	vector<int> res5 = Solution().spiralOrder(matrix5);
	printVec(res5);
	cout<<endl;


	vector<vector<int>> matrix6 = {};
	vector<int> res6 = Solution().spiralOrder(matrix6);
	printVec(res6);
	cout<<endl;
	return 0;
}
