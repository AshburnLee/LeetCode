#include "Solution.h"

int main(int argc,char** argv){


	vector<string> A = {"abc", "aab", "cbc"};

	vector<string> res = Solution().commonChars(A);
	for (auto i: res)
		cout<<i<<" ";
	cout<<endl;

	
	return 0;
}
