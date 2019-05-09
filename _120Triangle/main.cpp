//
// Created by junhui on 09/05/19.
//

#include <iostream>
#include "Triangle.h"
#include "Triangle2.h"

using namespace std;
int main() {
    vector<vector<int>> triangle = { {2},
                                     {3,4},
                                     {6,5,7},
                                     {4,1,8,3}};
    cout<<Solution().minimumTotal(triangle)<<endl;

    vector<vector<int>> triangle2 = { {2},
                                      {3,4},
                                      {6,5,7},
                                      {4,1,8,3}};
    cout<<Solution2().minimumTotal(triangle2)<<endl;
    return 0;
}
