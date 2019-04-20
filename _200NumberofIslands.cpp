//
// Created by junhui on 20/04/19.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    int d[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int m,n;
    vector<vector<bool>> visited;

    bool inArea(int x, int y){
        return x>=0 && x<m && y>=0 && y<n;
    }

    void dfs(vector<vector<char>>& grid, int x, int y){
        visited[x][y] = true;

        for (int i=0; i<4; i++){
            // update x,y
            int newx = x + d[i][0];
            int newy = y + d[i][1];

            if (inArea(newx,newy) && !visited[newx][newy] && grid[newx][newy]=='1'){
                dfs(grid, newx, newy);
            }
        }
    }

public:
    // time:    98.78%
    // space:    95.29%
    int numIslands(vector<vector<char>>& grid) {
        m = grid.size();
        if (m == 0)
            return 0;
        n = grid[0].size();
        if (n == 0)
            return 0;

        visited = vector<vector<bool>> (m, vector<bool>(n, false));

        int res = 0;
        // traverse every points
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (grid[i][j] == '1' && !visited[i][j]){
                    res++;
                    dfs(grid, i, j);
                }
            }
        }
        return res;
    }
};

int main(int argc, char** argv){


}