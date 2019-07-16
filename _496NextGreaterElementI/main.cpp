#include "Solution.h"

int main(int argc, char** argv){

	vector<int> nums1 = {4,1,2};
	vector<int> nums2 = {1,3,4,2};
	vector<int> res = Solution().nextGreaterElement(nums1, nums2);

	for (auto i:res)
		cout<<i<<" ";
	cout<<endl;


	vector<int> nums11 = {2,4};
	vector<int> nums22 = {1,2,3,4};
	vector<int> res1 = Solution().nextGreaterElement(nums11, nums22);

	for (auto i:res1)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
