//
// Created by junhui on 11/05/19.
//
#include <iostream>
#include "UniquePaths.h"
#include "UniquePaths3.h"
#include "UniquePaths2.h"
using namespace std;

int main() {

    cout<<Solution2().uniquePaths(6,7)<<endl;
    cout<<Solution3().uniquePaths(6,7)<<endl;
    cout<<Solution().uniquePaths(6,7)<<endl;

    return 0;
}