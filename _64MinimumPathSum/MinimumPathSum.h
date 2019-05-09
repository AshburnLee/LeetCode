//
// Created by junhui on 09/05/19.
//

#ifndef _64MINIMUMPATHSUM_MINIMUMPATHSUM_H
#define _64MINIMUMPATHSUM_MINIMUMPATHSUM_H

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

/// Top-down DP
/// time: O(N*M)   99.93%
/// space:  O(1)   99.69%
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for (int i=1; i<m; i++)
            grid[i][0] += grid[i-1][0];

        for (int i=1; i<n; i++)
            grid[0][i] += grid[0][i-1];

        for (int i=1; i<m; i++){
            for (int j=1; j<n; j++)
                grid[i][j] += min(grid[i][j-1], grid[i-1][j]);
        }

        return grid[m-1][n-1];
    }
};

#endif //_64MINIMUMPATHSUM_MINIMUMPATHSUM_H
