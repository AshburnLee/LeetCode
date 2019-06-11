#include <iostream>
#include "Solution.h"

using namespace std;

void printVec(vector<vector<int>>& res){
	for (auto i: res){
		for (auto ii:i){
			cout<<ii<<" ";
		}
		cout<<endl;
	}

}
int main(int argc, char** argv){
	vector<vector<int>> res = Solution().combinationSum3(3,9);
	printVec(res);

    return 0;
}
