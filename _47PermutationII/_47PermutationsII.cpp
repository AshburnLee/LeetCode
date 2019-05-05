//
// Created by junhui on 05/05/19.
//
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

// implement the same way as #46,
// plus, duplications were removed.
class Solution {
private:
    vector<vector<int>> res;
    vector<bool> used;

    void getPermutation(vector<int>& nums, int index, vector<int>& p){
        if (p.size() == nums.size()) {
            res.push_back(p);
            return;
        }

        for (int i=0; i<nums.size(); i++){
            if (used[i] == false){
                used[i] = true;
                p.push_back(nums[i]);
                getPermutation(nums, index+1, p);
                p.pop_back();
                used[i]=false;
            }
        }

        return;
    }

    // remove duplication
    vector<vector<int>> duplicateRemoval(vector<vector<int>>& arr){
        vector<vector<int>> res;
        res.push_back(arr[0]);

        for (int j=1;j<arr.size(); j++){
            vector<int> flags(res.size(), 0);
            for (int i=0; i<res.size(); i++){
                if (arr[j]!= res[i]) {
                    flags[i] = 1;
                    continue;
                }
                else
                    break;
            }
            if (flags[res.size()-1] == 1)
                res.push_back(arr[j]);
        }

        return res;
    }

public:
    //time: O(N^N)   5.05%
    //space: O(N)    5.26%
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if (nums.size()==0) return res;

        used = vector<bool>(nums.size(), false);
        vector<int> p;
        getPermutation(nums, 0, p);

        // duplicate removal
        // remove duplication
        vector<vector<int>> res2 = duplicateRemoval(res);

        return res2;
    }
};

int main(int argc, char** argv){

    vector<int> nums = {1,1,2};
    Solution sol;
    vector<vector<int>> res = sol.permuteUnique(nums);

    for (auto& i:res){
        for (auto& ii:i)
            cout<<ii<<" ";
        cout<<endl;
    }

    return 0;
}
