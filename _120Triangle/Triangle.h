//
// Created by junhui on 09/05/19.
//

#ifndef _120TRIANGLE_TRIANGLE_H
#define _120TRIANGLE_TRIANGLE_H

/// top-down DP
/// Time: O(n^2)   99.97%
/// Space: O(1)    93.85%
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        triangle[0][0] = triangle[0][0];

        for (int i = 1; i<n; i++){
            triangle[i][0] += triangle[i-1][0];
            triangle[i][i] += triangle[i-1][i-1];

            for (int j=1;j<i;j++)
                triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
        }

        return *min_element(triangle[n-1].begin(), triangle[n-1].end());

    }
};


#endif //_120TRIANGLE_TRIANGLE_H
