//
// Created by junhui on 26/05/19.
//

#ifndef _491INCREASINGSUBSEQUENCES_SOLUTION_H
#define _491INCREASINGSUBSEQUENCES_SOLUTION_H

#include <iostream>
#include <vector>
#include <set>
using namespace std;

/// Backtracking

class Solution {
private:
    void func(vector<int>& nums, vector<int>& seq, set<vector<int>>& res, int  index){
        if (seq.size() >= 2) res.insert(seq);

        for (int i= index; i < nums.size(); i++){
            if (seq.size() == 0 || nums[i]>= seq.back()){
                seq.push_back(nums[i]);
                func(nums, seq, res, i+1);
                seq.pop_back();
            }
        }
    }
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        vector<int> seq;
        set<vector<int>> res;
        func (nums, seq, res, 0);

        return vector<vector<int>>(res.begin(), res.end());
    }
};

#endif //_491INCREASINGSUBSEQUENCES_SOLUTION_H
