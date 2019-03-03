#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>
using namespace std;

class Solution {
public:
    // O(n^3)
    int maxSubArray2(vector<int>& nums) {
        int res = nums[0];
        for (int gap = 0; gap<nums.size(); gap++){
            for (int i=0; i<nums.size()-gap; i++){
                int sum = 0;
                for (int k=i; k<=i+gap;k++){
                    sum += nums[k];
                    res = max(res, sum);
                }
            }
        }
        return res;
    }

    // O(n) 
    // form wikipedia
    int maxSubArray(vector<int>& nums){
        int sum = 0, maxSum = INT_MIN;
        for (int num : nums) {
            sum += num;
            maxSum = max(maxSum, sum);
            if (sum < 0) {
                sum = 0;
            }
        }
        return maxSum;
    }
};

int main(int argc, char const *argv[])
{
    int myints[] = {-2,1};
    vector<int> test (myints, myints + sizeof(myints) / sizeof(int) );
    cout<<Solution().maxSubArray(test)<<endl;
    cout<<INT_MIN<<endl;

    return 0;
}
