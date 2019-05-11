//
// Created by junhui on 11/05/19.
//

#ifndef _62UNIQUPATHS_UNIQUEPATHS_H
#define _62UNIQUPATHS_UNIQUEPATHS_H

/// Recursion: Basically same problem as fib() and climbStairs()
/// time:  Time limit exceeded
/// space:
#include <iostream>
using namespace std;

class Solution{
private:
    int numPath(int i, int j, int m, int n){
        // when reaches the board
        if (i ==m-1 || j ==n-1) return 1;

        int res = 0;
        res = numPath(i, j+1, m, n) + numPath(i+1, j, m, n);
        return res;
    }
public:
    int uniquePaths(int m, int n) {
        return numPath(0 ,0, m, n );
    }
};

#endif //_62UNIQUPATHS_UNIQUEPATHS_H
