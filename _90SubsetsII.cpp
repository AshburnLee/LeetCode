//
// Created by junhui on 06/05/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
private:
    vector<vector<int>> res;

    void getPermutations(vector<int>& nums, int index, vector<int>& p){

        res.push_back(p);

        for (int i=index; i<nums.size(); i++){
            if (i==index || nums[i]!=nums[i-1] ){
                p.push_back(nums[i]);
                getPermutations(nums, i+1, p);
                p.pop_back();
            }
        }
        return ;
    }

public:
    //time: O(N*N^N)  100.00%
    // space: O(N)     45.64%
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<int> p;
        getPermutations(nums, 0, p);

        return res;
    }
};

int main(int argc, char** argv){
    vector<int> nums = {1,2,2};
    vector<vector<int>> res = Solution().subsetsWithDup(nums);

    for (auto& i : res){
        for (auto&ii: i)
            cout<<ii<<" ";
        cout<<endl;
    }
    return 0;
}