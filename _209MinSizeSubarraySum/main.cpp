#include <iostream>
#include "SubarraySum1.h"
#include "SubarraySum2.h"
using namespace std;

int main() {
    vector<int> nums = {2,3,1,2,4,3};
    cout<<Solution().minSubArrayLen(7, nums)<<endl;
    cout<<Solution2().minSubArrayLen(7, nums)<<endl;
    return 0;
}