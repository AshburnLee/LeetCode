//
// Created by junhui on 09/05/19.
//
#include <iostream>
#include "MinimumPathSum.h"
using namespace std;

int main() {
    vector<vector<int>> grid = {{1, 3, 1},
                                {1, 5, 1},
                                {4, 2, 1}};

    cout<<Solution().minPathSum(grid)<<endl;

    vector<vector<int>> grid2 = {{1,3,1,2,1},
                                {2,3,4,2,1}};

    cout<<Solution().minPathSum(grid2)<<endl;
    return 0;
}