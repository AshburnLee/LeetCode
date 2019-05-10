//
// Created by junhui on 10/05/19.
//


#include <iostream>
#include "PerfectSquares.h"
#include "PerfectSquares2.h"
#include "PerfectSquares3.h"
using namespace std;

int main() {
    cout<<Solution().numSquares(13)<<endl;
    cout<<Solution2().numSquares(13)<<endl;
    cout<<Solution3().numSquares(13)<<endl;

    cout<<Solution().numSquares(12)<<endl;
    cout<<Solution2().numSquares(12)<<endl;
    cout<<Solution3().numSquares(12)<<endl;
    return 0;
}