#include "Solution.h"
#include "Solution2.h"

int main(int argc, char** argv){
	vector<int> nums = {7,46,36,49,5,34,25,39,41,38,49,47,17,11,1,41,7,16,23,13};
	int target = 3;

	cout<<Solution().findTargetSumWays(nums, target)<<endl;

	cout<<Solution2().findTargetSumWays(nums, target)<<endl;

	return 0;
}
