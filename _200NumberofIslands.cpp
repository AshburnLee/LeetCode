//
// Created by junhui on 20/04/19.
//
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

//time:  O(M*N)   98.77%
//space: O(M*N)   82.98%
class Solution{
private:
    int move[4][2] = {{-1,0},{0,1},{1,0},{0,-1}}; // left, up, right, down
    int m, n;
    vector<vector<bool>> visited;

    bool validArea(int x, int y){
        return x>=0 && x<n && y>=0 && y<m;
    }

    void dfs(vector<vector<char>>& grid, int x, int y){
        visited[x][y] = true;
        for (int i=0; i<4; i++){
            int newx = x + move[i][0];
            int newy = y + move[i][1];

            // for all constrains, big scale constrains first, the small constrains !!!
            if (validArea(newx, newy) && !visited[newx][newy] && grid[newx][newy] == '1'){
                dfs(grid, newx, newy);
            }
        }
        return;
    }

public:
    int numIslands(vector<vector<char>>& grid) {

        if (grid.empty()) return 0;
        m = grid[0].size();
        n = grid.size();
        if ( m==0 || n==0) return 0;
        assert(m>0 && n>0);

        for (int i=0; i<n; i++)
            visited.push_back(vector<bool>(m, false));

        int res = 0;
        for (int i=0; i<n; i++)
            for (int j=0; j<m; j++)
                if (!visited[i][j] && grid[i][j] == '1' ){
                    dfs(grid, i ,j);
                    res++;
                }

        return res;
    }
};

int main(int argc, char** argv){
    vector<vector<char>> grid = {{'1','1','0','0','0'},
                                 {'1','1','0','0','0'},
                                 {'0','0','1','0','0'},
                                 {'0','0','0','1','1'}};
    cout<<Solution().numIslands(grid)<<endl;

    vector<vector<char>> grid2 = {};
    cout<<Solution().numIslands(grid2)<<endl;


}