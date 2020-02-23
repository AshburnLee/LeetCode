#include "Solution.h"

int main(){
	vector<int> nums = {1,2,3,4};
	Solution sol;
	vector<int> res;
	res = sol.decompressList(nums);

	for(auto i:res)
		cout<<i<<" ";
	cout<<endl;

	return 0;

}
