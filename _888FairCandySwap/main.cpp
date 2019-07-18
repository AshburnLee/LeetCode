#include "Solution.h"

int main(int argc, char** argv){
	vector<int> A = {35,17,4,24,10};
	vector<int> B = {63,21};

	vector<int> res = Solution().fairCandySwap(A, B);
	for (auto i:res)
		cout<<i<<" ";
	cout<<endl;
	return 0;
}
