//
// Created by junhui on 18/04/19.
//
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

class Solution {
public:
    //time: O(NlogN)
    //space: O(1)
    vector<int> sortedSquares(vector<int>& A) {
        for (auto&_: A)
            _ = pow(_, 2);
        sort(A.begin(), A.end());
        return A;
    }
};

int main(int argc, char** argv){
    vector<int> tst = {-4,-1,0,3,10};
    vector<int> res = Solution().sortedSquares(tst);

    return 0;
}