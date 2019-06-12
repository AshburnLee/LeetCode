#include <iostream>
#include "Solution.h"
#include "Playaround.h"
using namespace std;

void printVec(vector<string> res){
	for (auto i: res)
		cout<<i<<" ";
	cout<<endl;

}
int main(int argc, char** argv){
	vector<int> nums = {0, 2,3,4,6,8,9};
	vector<string> res = Solution().summaryRanges(nums);
	vector<string> res11 = Playaround().summaryRanges(nums);
	printVec(res);
	printVec(res11);

	vector<int> nums2 = {1,2,3,4,5,  7,8,9};
	vector<string> res2 = Solution().summaryRanges(nums2);
	vector<string> res22 =Playaround().summaryRanges(nums2);
	printVec(res2);
	printVec(res22);

	vector<int> nums3 = {0, 2,3,4,  6,7,8, 10};
	vector<string> res3 = Solution().summaryRanges(nums3);
	vector<string> res33 =Playaround().summaryRanges(nums3);
	printVec(res3);
	printVec(res33);

	return 0;

}
