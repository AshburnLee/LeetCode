//
// Created by junhui on 10/05/19.
//

#ifndef _279PERFECTSQUARES_PERFECTSQUARES_H
#define _279PERFECTSQUARES_PERFECTSQUARES_H

/// DP
/// time: O(N)
/// space:  O(N)
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution{
private:
    int count(int n, vector<int>& memo){
        if (n<=0) return 0;

        memo[0]=0;

        for(int i=1; i<= n; i++)
            for (int j=1; j*j<=i; j++)
                memo[i] = min(memo[i], memo[i-j*j] +1);
        return memo[n];
    }
public:
    int numSquares(int n) {
        vector<int> memo(n+1, INT_MAX);
        int res = count(n ,memo);

        return res;
    }
};

#endif //_279PERFECTSQUARES_PERFECTSQUARES_H
