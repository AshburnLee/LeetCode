//
// Created by junhui on 11/05/19.
//

#ifndef _62UNIQUPATHS_UNIQUEPATHS2_H
#define _62UNIQUPATHS_UNIQUEPATHS2_H

/// Memory search
/// time: O(M*N)   98.84%
/// space: O(M*N)   5.13%
#include <iostream>
#include <vector>
using namespace std;

class Solution2{
private:
    int numPath(int i, int j, int m, int n, vector<vector<int>>& memo){
        // when reaches the board
        if (i ==m-1 || j ==n-1) return 1;

        if (memo[i][j] != -1) return memo[i][j];

        int res = 0;
        res = numPath(i, j+1, m, n, memo) + numPath(i+1, j, m, n, memo);
        memo[i][j] = res;
        return memo[i][j];
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n, -1));
        return numPath(0 ,0, m, n, memo);
    }
};

#endif //_62UNIQUPATHS_UNIQUEPATHS2_H
