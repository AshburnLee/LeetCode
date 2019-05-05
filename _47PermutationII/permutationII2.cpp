//
// Created by junhui on 05/05/19.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    vector<vector<int>> permutationUnique(vector<int>& nums){
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        getPermutations(nums, 0, res);

        return res;
    }

private:
    void getPermutations(vector<int>& nums, int index, vector<vector<int>>& p){
        if (index == nums.size()) {
            p.push_back(nums);
            return;
        }

        for (int j=index; j<nums.size(); j++){
            if (j==index||nums[j]!= nums[index]){
                swap(nums[index], nums[j]);
                getPermutations(nums, index+1, p);
            }
        }
        return;
    }
};


int main(int argc, char** argv){
    vector<int> nums = {1,2,1};
    Solution sol;
    vector<vector<int>> res = sol.permutationUnique(nums);

    for (auto& i : res){
        for (auto& ii : i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }

    return 0;
}