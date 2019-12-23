#include <iostream>
#include "Solution.h"

int main(int argc, char** argv){
	vector<int> nums = {4,5,6,7,0,1,2};
	int target = 0;
	std::cout<<Solution().search(nums, target)<<std::endl;
	return 0;
}
