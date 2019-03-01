#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end(), greater<>());
        return nums[k-1];
    }

    // partition
    int findKthLargest(vector<int>& nums, int k) {
        return 0;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> test = {2,6,3,9};
    Solution sol;
    cout<<sol.findKthLargest(test,2)<<endl;
    return 0;
}
