#include "Solution.h"

int main(int argc, char** argv){
	string s1 = "AECBDGHABC";
	string s2 = "ECDGHB";

	string res = Solution().getLCS(s1, s2);

	cout<<res<<endl;
	return 0;	
}
