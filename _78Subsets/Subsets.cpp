//
// Created by junhui on 05/05/19.
//
#include <iostream>
#include <vector>
using namespace std;
/*
 * compare with _77Combination/Combinations.cpp
 * */
class Solution {
private:
    vector<vector<int>> res;
    // C(nums.size(), k)
    void getCombinations(const vector<int>& nums, int k, int start, vector<int>& path){
        if (path.size() == k){
            res.push_back(path);
            return;
        }

        for (int i=start; i<nums.size(); i++){
            path.push_back(nums[i]);
            getCombinations(nums, k, i+1, path);
            path.pop_back();

        }
        return;
    }
public:
    // time: O(N*N^N)   100.00%
    // space: O(N)      30.49%
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> path;

        for (int k=0; k<=nums.size(); k++){
            getCombinations(nums, k, 0, path);
        }

        return res;
    }
};

int main(int argc, char** argv){
    vector<int> nums = {1,2,3};
    vector<vector<int>> res = Solution().subsets(nums);

    for (auto& i: res){
        for (auto& ii:i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }

    return 0;
}
