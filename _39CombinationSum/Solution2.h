#ifndef _39COMBINATIONSUM_SOLUTION2
#define _39COMBINATIONSUM_SOLUTION2

#include <iostream>
#include <vector>

using namespace std;

/// time: O(2^N)
// space: O(2^N)
class Solution2{
public:
    vector<vector<int>> CombinationSum(vector<int>& candidate, int target){
        vector<vector<int>> res;
        vector<int> tmp;
        int sum = -target;
        
        func(candidate, res, tmp, sum, 0);
        return res;
    }
private:

    void func(vector<int>& candidate, vector<vector<int>>& res, vector<int>& tmp, int sum, int index){
        if (sum == 0){
            res.push_back(tmp);
            return;
        }

        for (int i=index; i<candidate.size() && sum<0; i++){
            tmp.push_back(candidate[i]);
            func(candidate, res, tmp, sum+candidate[i], index+i);
            tmp.pop_back();
        }
    }

};

#endif