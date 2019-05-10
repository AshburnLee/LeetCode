//
// Created by junhui on 10/05/19.
//

#ifndef _343INTEGERBREAK_INTEGERBREAK3_H
#define _343INTEGERBREAK_INTEGERBREAK3_H

/// Memory search
/// time: O(N^2)   100.00%
/// space: O(N)    18.18%
#include <iostream>
#include <cassert>
#include <vector>
using namespace std;

class Solution3{
private:
    /* break n and return the maximum product */
    int breakInteger(int n, vector<int>& memo){
        if (n == 1) return 1;

        if (memo[n] != -1) return memo[n];

        int res = -1;
        for (int i=1; i<n ;i++){
            res = max3(res, i*(n-i), i*breakInteger(n-i, memo));
        }
        memo[n] = res;
        return res;
    }

    int max3(int a, int b, int c){
        return max(max(a, b), c);
    }
public:
    int integerBreak(int n){
        assert(n>0);
        vector<int> memo(n+1, -1);
        return breakInteger(n, memo);
    }
};

#endif //_343INTEGERBREAK_INTEGERBREAK3_H
