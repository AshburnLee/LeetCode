//
// Created by junhui on 20/03/19.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    //time: O(N)
    // space: O(1)
    int firstMissingPositive(vector<int>& nums) {
        if (nums.size() == 0)
            return 1;

        sort(nums.begin(), nums.end());

        int pId = 0;
        for(int i=0; i<nums.size(); i++){
            if( nums[i]>0 ){
                pId = i;
                cout<<pId<<endl;
                break;
            }
            if (nums[nums.size()-1] <= 0)
                return 1;
        }

        for(int i=pId; i<nums.size(); i++){
            if (nums[pId] > 1)
                return 1;
            else if( i+1<nums.size() && (nums[i+1] - nums[i] == 0 || nums[i+1] - nums[i] == 1))
                continue;
            else
                return (long long)nums[i]+1;
        }
        return 1;
    }
};

int main(int argc, char** argv){
    vector<int> test = {0,1,2};

    cout<<Solution().firstMissingPositive(test)<<endl;
    return 0;
}
