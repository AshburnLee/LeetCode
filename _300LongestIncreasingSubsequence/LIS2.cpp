//
// Created by junhui on 30/04/19.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    //DP
    // time: O(N^2)  53.43%
    // space: O(N)   24.47%
    int lengthOfLIS(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        // calculate memo
        vector<int> memo(nums.size(), 1);
        for (int i=1; i<nums.size(); i++){
            for (int j=0; j<i; j++){
                if (nums[i]>nums[j])
                    memo[i] = max(memo[i], 1+memo[j]);
            }
        }

        // get max length
        int res = memo[0];
        for (int i=0; i<memo.size(); i++)
            res = max(res, memo[i]);

        return res;
    }
};

int main(int argc, char** argv){
    vector<int> nums={2,5,3,6,4,7,8};
    cout<<Solution().lengthOfLIS(nums)<<endl;
    return 0;
}
