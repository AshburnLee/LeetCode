//
// Created by junhui on 07/05/19.
//
#include <iostream>
#include <vector>
using namespace std;

//time: O(N*M)   99.47%
//space : O(1)    100.00%
class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        if (grid.empty()) return 0;

        int m = grid.size();
        int n = grid[0].size();
        if (m==0|| n==0) return 0;

        int ones=0;
        int removal=0;
        for (int i=0; i<m ;i++)
            for (int j=0; j<n; j++){
                if (grid[i][j] == 1){
                    ones++;
                    if (i!=0 && grid[i-1][j]==1) removal++;
                    if (j!=0 && grid[i][j-1]==1) removal++;
                }
            }

        return 4*ones-2*removal;
    }
};

int main(int argc, char** argv){
    vector<vector<int>> grid = {{0,1,0,0},
                                 {1,1,1,0},
                                 {0,1,0,0},
                                 {1,1,0,0}};

    cout<<Solution().islandPerimeter(grid)<<endl;

    vector<vector<int>> grid2 = {{1,1},
                                 {1,1}};

    cout<<Solution().islandPerimeter(grid2)<<endl;

    return 0;
}