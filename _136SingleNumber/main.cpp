#include <iostream>
#include "Solution.h"
#include "Solution2.h"
#include "Solution3.h"
using namespace std;

int main(int argc, char** argv){
    vector<int> nums = {1,2,1,2,4};
	int res = Solution().singleNumber(nums);
	int res2 = Solution2().singleNumber(nums);
	int res3 = Solution3().singleNumber(nums);
	cout<<res<<" "<<res2<<" "<<res3<<endl;
	
	return 0;	
}
