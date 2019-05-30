#ifndef _39COMBINATIONSUM_SOLUTION
#define _39COMBINATIONSUM_SOLUTION

#include <iostream>
#include <vector>

using namespace std;

/// time: O(2^N)
/// space: O(2^N)
class Solution{
public:
    vector<vector<int>> CombinationSum(vector<int>& candidate, int target){
        vector<vector<int>> res;
        vector<int> tmp;
        
        func(candidate, res, tmp, target, 0);
        return res;
    }
private:

    void func(vector<int>& candidate, vector<vector<int>>& res, vector<int>& tmp, int target, int index){
        if (vecSum(tmp) == target){
            res.push_back(tmp);
            return;
        }

        for (int i=index; i<candidate.size() && vecSum(tmp)<target; i++){
            tmp.push_back(candidate[i]);
            func(candidate, res, tmp, target, index+i);
            tmp.pop_back();
        }
    }   

    int vecSum(vector<int>& vec){
        int res = 0;
        for (auto itr = vec.begin(); itr!=vec.end(); itr++){
            res += *itr;
        }
        return res;
    }

};

#endif