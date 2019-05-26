#include <iostream>
#include "Solution.h"
#include "Solution2.h"
using namespace std;

int main() {
    vector<int> nums = {1,3,2,2,5,2,3,7};
    cout<<Solution().findLHS(nums)<<endl;

    vector<int> nums2 = {1,1,1,1};
    cout<<Solution().findLHS(nums2)<<endl;

    vector<int> nums3 = {1,4,1,3,1,-14,1,-13};
    cout<<Solution().findLHS(nums3)<<endl;


    cout<<Solution2().findLHS(nums)<<endl;
    cout<<Solution2().findLHS(nums2)<<endl;
    cout<<Solution2().findLHS(nums3)<<endl;

    return 0;
}