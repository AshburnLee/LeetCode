
#ifndef _73SETMATRIXZEROS_SOLUTION
#define _73SETMATRIXZEROS_SOLUTION

#include <iostream>
#include <vector>

using namespace std;

/* O(M+N) and constant space solutions */
/// time: O(N*M)   89.45%
/// space: O(M+N)   6.62%
class Solution{
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        // find positions of '0's
        vector<pair<int,int>> zeros;
        for (int r=0; r<row; r++){
            for (int c=0; c<col; c++){
                if (matrix[r][c] == 0)
                    zeros.push_back(make_pair(r,c));
            }
        }

        // operation
        for (auto p: zeros){
            for (int c=0; c<col; c++)
                matrix[p.first][c] = 0;
            for (int r=0; r<row; r++)
                matrix[r][p.second] = 0;
        }

    }
};

#endif
