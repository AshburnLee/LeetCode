//
// Created by junhui on 09/05/19.
//

#ifndef _120TRIANGLE_TRIANGLE2_H
#define _120TRIANGLE_TRIANGLE2_H

/// Bottom-up DP
/// time: O(N^2)   98.99%
/// space: O(1)    92.74%
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution2{
public:
    int minimumTotal(vector<vector<int>> & triangle) {
        int n = triangle.size();

        for (int i=n-2; i>=0; i--){
            for (int j=0; j<triangle[i].size(); j++)
                triangle[i][j] += min(triangle[i+1][j], triangle[i+1][j+1]);
        }
        return triangle[0][0];
    }
};


#endif //_120TRIANGLE_TRIANGLE2_H
