//
// Created by junhui on 19/04/19.
//
#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

class Solution {
private:
    vector<int> memo;

    int _fib2(int N){
        assert(N>0);
        if (N == 1 || N == 2)
            return 1;
        if (memo[N] == -1)
            memo[N] = _fib2(N-1) + _fib2(N-2);

        return memo[N];
    }

public:
    // 1) recursive way
    // time:    25.29%
    // space:    86.51%
    int fib(int N) {
        if (N==0)
            return 0;
        if (N==1)
            return 1;

        return fib(N-1)+fib(N-2);
    }

    // 2) memory way
    // time:   100.00%
    // space:    85.54%
    int fib2(int N){
        if (N==0)
            return 0;

        for (int i=0; i<2*N+1; i++){
            memo.push_back(-1);
        }
        int res = _fib2(N);

        return res;
    }

    //2) DP
    // time: 100.00 %
    // space: 88.92%
    int fib3(int N) {
        if (N==0)
            return 0;
        if (N==1 || N==2)
            return 1;
        // if N >= 3
        vector<int> memo(N+1, -1);
        memo[0] = 0;
        memo[1] = 1;
        memo[2] = 1;
        for (int i=3; i<=N; i++)
            memo[i] = memo[i-1] + memo[i-2];
        return memo[N];
    }
};

int main(int argc, char** argv){
    Solution sol;
    cout<<Solution().fib3(6)<<endl;

    return 0;
}