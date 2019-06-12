#include <iostream>
#include "Solution.h"

using namespace std;

int main(int argc, char** argv){

	vector<int> nums = {4,1,2};
	int target = 32;

	vector<vector<int>> res = Solution().combinationSum4(nums, target);
	for (auto i: res){
		for (auto ii:i)
			cout<<ii<<" ";
		cout<<endl;
	}
	return 0;
}
