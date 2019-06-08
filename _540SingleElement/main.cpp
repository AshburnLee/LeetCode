#include <iostream>
#include "Solution.h"

using namespace std;

int main(int argc, char** argv){
	vector<int> nums = {1};
	cout<<Solution().singleNonDuplicate(nums)<<endl;
	vector<int> nums2 = {1,1,2,2,30,4,4,5,5,6,6};
	cout<<Solution().singleNonDuplicate(nums2)<<endl;
	vector<int> nums3 = {1,1,2};
	cout<<Solution().singleNonDuplicate(nums3)<<endl;

	return 0;
}
