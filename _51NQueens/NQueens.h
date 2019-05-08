//
// Created by junhui on 08/05/19.
//

#ifndef HQUEENS_H
#define HQUEENS_H


#include <iostream>
#include <vector>

using namespace std;

// time: O(N*N)    100.00%
// space: O(N)     47.95%
class Solution{
private:
    vector<vector<string>> res;

    void putQueens(vector<string>& queen, int row, int n){
        if (row == n){
            res.push_back(queen);
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
    vector<vector<string>> solveNQueens(int n){
        // initialize a board
        // [....]
        // [....]
        // [....]
        // [....]
        vector<string> queen(n, string(n ,'.'));

        putQueens(queen, 0, n);
        return res;
    }

private:
    /* check if this Q is valid in this position */
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

//void putQueen(int n, int index, vector<int>& row){
//
//    if (index == n){
//        res.push_back(generateBoard(n, row));
//        return;
//    }
//
//    for (int i=0; i<n;i++){
//        if (!col[i] && !dia1[index+i] && !dia2[index-i+n-1]){
//            printRow(row);
//            row.push_back(i);
//
//            col[i] = true;
//            dia1[index+i] = true;
//            dia2[index-i +n-1] = true;
//            putQueen(n, index+1,row);
//
//            col[i] = false;
//            dia1[index+i] = false;
//            dia2[index-i+n-1] = false;
//            row.pop_back();
//
//        }
//    }
//    return;
//}
//
//vector<vector<string>> solveNQueens(int n){
//    // initialization
//    for (int i=0; i<n; i++)
//        col.push_back(false);
//
//    for (int i=0; i<2*n-1; i++){
//        dia1.push_back(false);
//        dia2.push_back(false);
//    }
//
//    // entry
//    vector<int> row;
//    putQueen(n, 0, row);
//
//    return res;
//}
//
//vector<string> generateBoard(int n, vector<int>& row){
//    vector<string> board(n, string(n, '.'));
//    for (int i=0;i<n; i++)
//        board[i][row[i]] = 'Q';
//    return board;
//}
//void printRow(vector<int>& row){
//    for (auto& i: row)
//        cout<<i<<" ";
//    cout<<endl;
//}

#endif

