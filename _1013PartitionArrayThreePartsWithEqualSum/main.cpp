#include "Solution.h"

int main(int argc, char** argv){
	vector<int> A = {0,2,1,-6,6,-7,9,1,2,0,1};
	cout<<Solution().canThreePartsEqualSum(A)<<endl;
	
	vector<int> B = {0,2,1,-6,6,7,9,-1,2,0,1};
	cout<<Solution().canThreePartsEqualSum(B)<<endl;
	return 0;
}
