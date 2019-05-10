//
// Created by junhui on 10/05/19.
//
#ifndef _343INTEGERBREAK_INTEGERBREAK_H
#define _343INTEGERBREAK_INTEGERBREAK_H

/// DP: this problem is tricky, j+(i-j) is one sum of i!
/// time: O(N^2)   100.00%
/// space:  O(N)   5.68%
#include <iostream>
#include <vector>

using namespace std;

class Solution {
private:
    int max3(int a, int b, int c){
        return max(max(a, b), c);
    }
public:
    int integerBreak(int n) {
        vector<int> memo(n+1, -1);

        memo[1] = 1;
        for (int i=2; i<=n; i++){
            for (int j=1; j<i; j++)
                memo[i] = max3(memo[i], j*(i-j), j* memo[i-j]);
        }
        return memo[n];
    }
};

#endif //_343INTEGERBREAK_INTEGERBREAK_H
