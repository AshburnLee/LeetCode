//
// Created by junhui on 11/05/19.
//

#ifndef _62UNIQUPATHS_UNIQUEPATHS3_H
#define _62UNIQUPATHS_UNIQUEPATHS3_H

#include <iostream>
#include <vector>
using namespace std;

/// Dynamic Programming
/// Time: O(M*N)  98.84%
/// Space: O(M*N)  12.82%
class Solution3 {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>> memo(m, vector<int>(n, -1));

        for (int i=0;i<m; i++)
            memo[i][n-1] = 1;

        for (int j=0; j<n; j++)
            memo[m-1][j] = 1;

        for(int i = m-2; i>=0; i-- )
            for(int j = n-2; j>=0; j-- )
                memo[i][j] = memo[i][j+1] + memo[i+1][j];

        return memo[0][0];
    }

};

#endif //_62UNIQUPATHS_UNIQUEPATHS3_H
