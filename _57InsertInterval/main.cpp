#include <iostream>
#include <vector>
#include "Solution.h"
using namespace std;

void printIntervals(vector<vector<int>>& intervals) {
	for (auto i:intervals){
		for (auto ii:i){
			cout<<ii<<" ";
		}
		cout<<endl;
	}
	return;
}
int main(int argc, char** argv){
	vector<vector<int>> intervals = {{1,2},{3,5},{6,7},{8,10},{12,16}};
	vector<int> newInterval = {4,8};

	vector<vector<int>> res =Solution().insert(intervals, newInterval);
	printIntervals(res);

	return 0;
}
