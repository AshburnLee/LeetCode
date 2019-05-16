#include <iostream>
#include "sortColor1.h"
#include "sortColor2.h"

using namespace std;

int main() {
    vector<int> nums = {2,1,0,0,2,2,1,1};
    Solution().sortColor(nums);
    Solution2().sortColors(nums);
    return 0;
}