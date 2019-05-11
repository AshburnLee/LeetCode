//
// Created by junhui on 11/05/19.
//

#ifndef _63UNIQUEPATHSII_UNIQEPATHSII_H
#define _63UNIQUEPATHSII_UNIQEPATHSII_H

/// Top-down DP
/// time:  O(M*N) 98.99%
/// space:  O(1)  71.85%
#include <iostream>
#include <vector>
using namespace std;

class Solution{
private:
    long long numPath(int m, int n, vector<vector<int>>& grid){

        // some outline cases:
        if (m==1&&n==1&&grid[0][0]==0) return 1;
        if (grid[0][0]==1) return 0;

        for (int i=1; i<m; i++){
            if (grid[i][0]==0)
                grid[i][0] = 1;
            else if (grid[i][0] == 1){
                for (int j=i; j<m; j++)
                    grid[j][0] = 0;
                break;
            }
        }

        for (int i=1; i<n; i++){
            if (grid[0][i] ==0)
                grid[0][i] = 1;
            else if (grid[0][i] == 1){
                for (int j=i; j<n; j++)
                    grid[0][j] = 0;
                break;
            }
        }

        for (int i=1; i<m; i++){
            for (int j=1;j<n;j++){
                if (grid[i][j] == 1){
                    grid[i][j] = 0;
                    continue;
                }
                else
                    grid[i][j] = (long long)grid[i-1][j]+grid[i][j-1];
            }
        }

        return grid[m-1][n-1];
    }

public:
    long long uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid){
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        return numPath(m, n, obstacleGrid);

    }
};
#endif //_63UNIQUEPATHSII_UNIQEPATHSII_H
