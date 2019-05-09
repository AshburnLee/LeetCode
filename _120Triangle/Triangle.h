//
// Created by junhui on 09/05/19.
//

#ifndef _120TRIANGLE_TRIANGLE_H
#define _120TRIANGLE_TRIANGLE_H

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/// Time Complexity: O(n^2)
/// Space Complexity: O(1)
class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();

        for (int i = 1; i<n; i++){
            triangle[i][0] += triangle[i-1][0];
            triangle[i][i] += triangle[i-1][i-1];

            for (int j=1;j<i;j++)
                triangle[i][j] += min(triangle[i-1][j-1], triangle[i-1][j]);
        }
//        cout<<triangle[]
        return *min_element(triangle[n-1].begin(), triangle[n-1].end());

    }
};


#endif //_120TRIANGLE_TRIANGLE_H
