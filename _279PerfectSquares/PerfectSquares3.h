//
// Created by junhui on 10/05/19.
//

#ifndef _279PERFECTSQUARES_PERFECTSQUARES3_H
#define _279PERFECTSQUARES_PERFECTSQUARES3_H

/// memory search
/// time:  O(N)  19.19%
/// space: O(N)   16.66%
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution3{
private:
    int count(int n, vector<int>& memo){
        if (n<=0) return 0;

        if (memo[n] != INT_MAX) return memo[n];

        int res = INT_MAX;
        for(int i=1; n-i*i>=0; i++)
            res = min(res, 1 + count(n-i*i, memo));
        memo[n] = res;
        return memo[n];
    }
public:
    int numSquares(int n) {
        vector<int> memo(n+1, INT_MAX);
        int res = count(n, memo);

        return res;
    }
};


#endif //_279PERFECTSQUARES_PERFECTSQUARES3_H
