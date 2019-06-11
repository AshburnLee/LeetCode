#include <iostream>
#include "Solution.h"

using namespace std;

void printVec(vector<vector<int>>& res){
	for (auto i: res){
		for (auto ii: i){
		    cout<<ii<<" ";
		}
		cout<<endl;
    }
}
int main(int argc, char** argv){
    vector<int> candidates = {10,1,2,7,6,1,5};
	int target = 8;
	vector<vector<int>> res = Solution().combinationSum2(candidates, target);
	printVec(res);

	cout<<endl;
    vector<int> candidates2 = {2,5,2,2,1};
	int target2 = 5;
	vector<vector<int>> res2 = Solution().combinationSum2(candidates2, target2);
	printVec(res2);
    return 0;

}
