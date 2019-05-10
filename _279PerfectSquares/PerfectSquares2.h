//
// Created by junhui on 10/05/19.
//

#ifndef _279PERFECTSQUARES_PERFECTSQUARES2_H
#define _279PERFECTSQUARES_PERFECTSQUARES2_H

/// Recursion
/// time:  O(N)
/// space: O(N)
#include <iostream>
#include <vector>
#include <climits>

using namespace std;

class Solution2{
private:
    int count(int n){
        if (n<=0) return 0;

        int res = INT_MAX;
        for(int i=1; n-i*i>=0; i++)
            res = min(res, 1 + count(n-i*i));
        return res;
    }
public:
    int numSquares(int n) {

        int res = count(n);

        return res;
    }
};

#endif //_279PERFECTSQUARES_PERFECTSQUARES2_H
