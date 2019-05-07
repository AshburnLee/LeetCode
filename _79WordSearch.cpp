//
// Created by junhui on 07/05/19.
//

#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

// time: O(m*n*m*n)   80.78%
//space: O(m*n)    73.98% 
class Solution {
private:
    int move[4][2] = {{-1,0},{0,1},{1,0},{0,-1}};
    int m, n;
    vector<vector<bool>> visited;

    bool validArea(int x, int y){
        return x>=0 && x<m && y>=0 && y<n;
    }

    /* search word[index...word.size()] from board[startX][startY] */
    bool searchWord(vector<vector<char>>& board, string& word, int index, int startX, int startY){
        if (index == word.size()-1)
            return board[startX][startY] == word[index];

        if (board[startX][startY] == word[index]){
            visited[startX][startY] = true;

            // from (startx, startY), search 4 directions
            for (int i=0; i<4; i++){
                int newX = startX + move[i][0];
                int newY = startY + move[i][1];
                if (validArea(newX, newY) && !visited[newX][newY] && searchWord(board, word, index+1, newX, newY))
                    return true;
            }
            visited[startX][startY] = false;
        }
        return false;
    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        m = board.size();
        n = board[0].size();
        assert(m>0 && n>0);;

        visited.clear();
        for (int i=0; i<m; i++)
            visited.push_back(vector<bool>(n, false));

        for (int i=0;i<board.size(); i++){
            for (int j=0; j<board[i].size(); j++)
                if (searchWord(board, word, 0, i, j))
                    return true;
        }


        return false;
    }
};

int main(int argc ,char** argv){
    vector<vector<char>> board = {{'A','B','C','E'},
                                  {'S','F','C','S'},
                                  {'A','D','E','E'}};

    string word = "ABCCED";
    string word2 = "SEE";
    string word3 = "ABCB";

    cout<<Solution().exist(board, word)<<endl;
    cout<<Solution().exist(board, word2)<<endl;
    cout<<Solution().exist(board, word3)<<endl;

    return 0;
}
