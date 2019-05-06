//
// Created by junhui on 05/05/19.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
private:
    vector<vector<int>> res;
    vector<bool> used;

    void getPermutations(vector<int>& nums, int index, vector<int>& p){
        if (index == nums.size()) {
            res.push_back(p);
            return;
        }

        for (int i=0; i<nums.size(); i++){
            if (!used[i]){
                // add a filter here
                if ( i>0 && nums[i] == nums[i-1] && !used[i-1])
                    continue;

                used[i]=true;
                p.push_back(nums[i]);
                getPermutations(nums, index+1, p);
                p.pop_back();
                used[i]=false;
            }

        }
        return;
    }

public:
    // time: O(N*N^N)  94.62%
    // space: O(N)  45.91%
    vector<vector<int>> permuteUnique(vector<int>& nums){
        sort(nums.begin(), nums.end());
        used = vector<bool>(nums.size(), false);
        vector<int> p;
        getPermutations(nums, 0, p);

        return res;
    }
};


int main(int argc, char** argv){
    vector<int> nums1 = {1,1,2};

    vector<vector<int>> res1 = Solution().permuteUnique(nums1);

    for (auto& i : res1){
        for (auto& ii : i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }


    vector<int> nums2 = {1,1,2,3,3};

    vector<vector<int>> res2 = Solution().permuteUnique(nums2);

    for (auto& i : res2){
        for (auto& ii : i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }

    return 0;
}