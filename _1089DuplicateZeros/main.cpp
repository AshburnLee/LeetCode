#include "Solution.h"

int main(int argc, char** argv){
	vector<int> arr = {1,0,2,3,0,4,5};
	Solution().duplicateZeros(arr);

	for (auto i:arr)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
