//
// Created by junhui on 10/05/19.
//

#ifndef _343INTEGERBREAK_INTEGERBREAK2_H
#define _343INTEGERBREAK_INTEGERBREAK2_H

/// Recursion
/// time: O(N^N)   Time Limit exceeded
/// space: O(N)
#include <iostream>
#include <cassert>
using namespace std;

class Solution2{
private:
    /* break n and return the maximum product */
    int breakInteger(int n){
        if (n == 1) return 1;

        int res = -1;
        for (int i=1; i<n ;i++){
            res = max3(res, i*(n-i), i*breakInteger(n-i));
        }
        return res;
    }

    int max3(int a, int b, int c){
        return max(max(a, b), c);
    }
public:
    int integerBreak(int n){
        assert(n>0);
        return breakInteger(n);
    }
};

#endif //_343INTEGERBREAK_INTEGERBREAK2_H
