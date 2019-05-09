//
// Created by junhui on 09/05/19.
//

#include <iostream>
#include "Triangle.h"

using namespace std;
int main() {
    vector<vector<int>> triangle = { {4},
                                     {5,6},
                                     {4,5,3},
                                     {4,3,1,2}};

    cout<<Solution().minimumTotal(triangle)<<endl;
    return 0;
}