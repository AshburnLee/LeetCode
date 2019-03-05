#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    //time: O(N*logN)
    // space :O(1)
    int missingNumber2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int res;
        for (int i=0;i<nums.size(); i++){
            if (nums[i] != i ){
                res = i;
                return res;
            }else {
                res = i + 1;
                return res;
            }
        }
    }
    
    // tiem: O(n)
    // space O(1)
    // mathmatical way
    int missingNumber(vector<int>& nums){
        // expected size and sum
        int n = nums.size() + 1;
        int sumExp = n*(n-1)/2;

        // real sum
        int sumReal = 0;
        for(auto _:nums)
            sumReal += _;
        // teh difference is the missing number
        return sumExp - sumReal;
    }
};

int main(int argc, char const *argv[])
{
    int test[] = {1,2};
    vector<int> nums(test, test+sizeof(test)/sizeof(int));

    cout<<Solution().missingNumber(nums)<<endl;
    return 0;
}
