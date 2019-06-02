#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;

void printVect(vector<vector<int>>& res){
	for (auto i: res){
		for (auto ii:i){
			cout<<ii<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
}

int main(int argc, char** argv){
	vector<vector<int>> intervals = {{1,5},{2,7},{8,9},{10,15}};
	vector<vector<int>> res = Solution().merge(intervals);
	printVect(res);

	vector<vector<int>> intervals2 = {{0,3},{0,5},{3,6},{7,9}};
	vector<vector<int>> res2 = Solution().merge(intervals2);
	printVect(res2);	
	return 0;
}

