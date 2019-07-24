#include "Solution.h"

using namespace std;

int main(int argc, char** argv){

	vector<string> res;
	string s = "s3g5";
	res = Solution().letterCasePermutation(s);
	for (auto i:res)
		cout<<i<<" ";
	cout<<endl;


	return 0;
}
