//
// Created by junhui on 14/04/19.
//

#include <iostream>

using namespace std;

class Solution{
public:
    // time: O(sqr(N))     92.58%
    // space: O(1)       100.00%
    int arrangeCoins(int n){
        int res = 1;
        while (n>=0){
            n-=res;
            res++;
        }
        return res-2;
    }
};


int main(int argc, char** argv){
    Solution sol;
    cout<<sol.arrangeCoins(5)<<endl;
    return 0;
}