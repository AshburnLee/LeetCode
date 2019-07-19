#include "Solution.h"

int main(int argc, char** argv){
	vector<int> A = {0,1,0,3,5,7};
	vector<int> res = Solution().productExceptSelf(A);
	for (auto item: res)
		cout<<item<<" ";
	cout<<endl;
	
	vector<int> B = {2,3,4,5};
	vector<int> res2 = Solution().productExceptSelf(B);
	for (auto item: res2)
		cout<<item<<" ";
	cout<<endl;


	vector<int> c = {2,3,0,5};
	vector<int> res3 = Solution().productExceptSelf(c);
	for (auto item: res3)
		cout<<item<<" ";
	cout<<endl;
	return 0;
}
