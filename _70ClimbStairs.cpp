//
// Created by junhui on 04/04/19.
//

#include <iostream>
#include <vector>

using namespace std;

class Solutions {
public:
    // time: O(2^N)
    // space: O(logN)
    int climbStairs2(int numStairs) {

        if (numStairs == 0 || numStairs == 1)
            return 1;

        return climbStairs2(numStairs-1) + climbStairs2(numStairs-2);
    }

public:
    // DP
    // time: O(N)
    // space : O(N)
    int climbStairs (int numStairs) {
        //memory
        vector<int> memo(numStairs + 1, -1);
        memo[0] = 1;
        memo[1] = 1;
        for (int i =2; i <= numStairs; i++) {
            memo[i] = memo[i-1] + memo[i-2];
        }
        return memo[numStairs];
    }

public:
    // memory seaching
    int climbStairs3 (int numStairs) {
        mem = vector<int>(numStairs+1, -1);
        return calculateWays(numStairs);
    }

private:
    vector<int> mem;
    int calculateWays (int n){
        if (n==1||n==0)
            return 1;
        if (mem[n] == -1)
            mem[n] = calculateWays(n-1) + calculateWays(n-2);cout<<mem[n]<<endl;

        return mem[n];
    }

};

int main() {

    auto* sol = new Solutions();
    int ret = sol->climbStairs3(20);
    cout<<ret<<endl;
    free(sol);
}