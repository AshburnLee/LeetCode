#include "Solution.h"
#include "Solution2.h"

int main(int argc, char** argv){
	
	vector<int> arr = {1,0,2,3,0,4,5};
	Solution().duplicateZeros(arr);

	for (auto i:arr)
		cout<<i<<" ";
	cout<<endl;

	vector<int> arr2 = {1,0,2,3,0,4,5};
	Solution2().duplicateZeros(arr2);

	for (auto i:arr2)
		cout<<i<<" ";
	cout<<endl;

	return 0;
}
