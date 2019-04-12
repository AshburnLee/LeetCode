//
// Created by junhui on 12/04/19.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // time: O(N)
    //space: O(N)
    int findMaxConsecutiveOnes(vector<int>& nums) {
        vector<int> zeroId;
        zeroId.push_back(-1);

        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == 0)
                zeroId.push_back(i);
        }
        if (nums[nums.size()-1] != 0)
            zeroId.push_back(nums.size());

        int res = 0;
        for (int i=1; i<zeroId.size(); i++ ){
            if (zeroId[i]-zeroId[i-1]-1 >res )
                res = zeroId[i]-zeroId[i-1]-1;

        }
        return res;
    }

    // time: O(N)
    // space: O(1)
    int findMaxConsecutiveOnes2(vector<int>& nums) {
        int res=0;
        for (int i=0; i<nums.size(); ){
            if (nums[i]==0)
                i++;

            else if (nums[i]==1){
                int j=i;
                while (j<nums.size() && nums[j]!=0 )  //!!!
                    j++;
                res = max(res, j-i);
                i=j;
            }
        }
        return res;
    }

private:
    void printVec(vector<int>& vec){
        for (auto& _: vec)
            cout<<_<<" ";
        cout<<endl;
    }
};

int main(int argc, char** argv){
    vector<int> nums={1,0,1,1,0,1};
    cout<<Solution().findMaxConsecutiveOnes2(nums)<<endl;
    return  0;
}

