//
// Created by junhui on 08/05/19.
//

#ifndef _52NQUEENSII_NQUEENS_H
#define _52NQUEENSII_NQUEENS_H

#include <iostream>
#include <vector>

using namespace std;

// time: O(N*N)    100.00%
// space: O(N)     31.15%
class Solution{
private:
    int count = 0;

    void putQueens(vector<string>& queen, int row, int n){
        if (row == n){
            count++;
            return;
        }

        for (int col =0; col<n; col++){
            if (isValid(queen, row, col ,n)){
                queen[row][col] = 'Q';
                putQueens(queen, row+1, n);
                queen[row][col] = '.';
            }
        }
        return;
    }

public:
    int solveNQueens(int n){
        // initialize a board
        // [....]
        // [....]
        // [....]
        // [....]
        vector<string> queen(n, string(n ,'.'));

        putQueens(queen, 0, n);
        return count;
    }

private:
    bool isValid(vector<string>& queens, int row, int col, int &n) {
        //check if the column had a queen before.
        for (int i = 0; i != row; ++i)
            if (queens[i][col] == 'Q')
                return false;
        //check if the 45° diagonal had a queen before.
        for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; --i, --j)
            if (queens[i][j] == 'Q')
                return false;
        //check if the 135° diagonal had a queen before.
        for (int i = row - 1, j = col + 1; i >= 0 && j < n; --i, ++j)
            if (queens[i][j] == 'Q')
                return false;
        return true;
    }

};


#endif //_52NQUEENSII_NQUEENS_H
