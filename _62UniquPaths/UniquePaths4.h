//
// Created by junhui on 11/05/19.
//

#ifndef _62UNIQUPATHS_UNIQUEPATHS4_H
#define _62UNIQUPATHS_UNIQUEPATHS4_H

#include <iostream>
#include <vector>
using namespace std;

/// Top-down DP
/// Time: O(M*N)  98.84%
/// Space: O(M*N)  12.82%
class Solution4 {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n, -1));

        for (int i=0;i<m; i++)
            memo[i][0] = 1;

        for (int j=0; j<n; j++)
            memo[0][j] = 1;

        // top-down
        for (int i=1;i<m; i++)
            for (int j=1; j<n; j++)
                memo[i][j] = memo[i-1][j] + memo[i][j-1];
        return memo[m-1][n-1];
    }
};

#endif //_62UNIQUPATHS_UNIQUEPATHS4_H
