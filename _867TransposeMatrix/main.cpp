#include <iostream>
#include <vector>
#include "Solution.h"

using namespace std;

void printMat(vector<vector<int>>& A) {
	for (auto i: A){
		for (auto ii: i){
			cout<<ii<<" ";
		}
		cout<<endl;
	}
}


int main(int argc, char** argv){
	
	vector<vector<int>> A = {{1,2,3},{4,5,6},{7,8,9}};
	vector<vector<int>> res = Solution().transpose(A);
	printMat(res);
	cout<<endl;
	
	vector<vector<int>> B = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
	vector<vector<int>> res2 = Solution().transpose(B);
	printMat(res2);
	cout<<endl;


	vector<vector<int>> C = {{1,2},{4,5},{7,9}};
	vector<vector<int>> res3 = Solution().transpose(C);
	printMat(res3);
	cout<<endl;
	
	return 0;
}
