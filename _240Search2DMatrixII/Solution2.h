#ifndef _240SEARCHMATRIXII_SOLUTION2_H
#define _240SEARCHMATRIXII_SOLUTION2_H


#include <iostream>
#include <vector>

/// time: O(M+N)
/// space: O(1)
class Solution2 {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        if (row == 0)
            return false;
        int col = matrix[0].size();
        if (col == 0)
            return false;
        if (target < matrix[0][0] || target > matrix[row-1][col-1])
            return false;
        
		int r = row-1;
		int c = 0;
        while(r >= 0 && c < col )
        {
            if (target == matrix[r][c]) return true;
            else if (target > matrix[r][c]) c++;
            else r--;
        }
        
        return false;
    }
};
#endif
