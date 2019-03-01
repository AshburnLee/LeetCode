#include <iostream>
#include <vector>
using namespace std;

int climbStairs (int);

int main() {

    int ret = climbStairs(20);
    cout<<ret<<endl;
    return 0;    
}


int climbStairs (int numStairs) {
    vector<int> memo(numStairs + 1, -1);
    memo[0] = 1;
    memo[1] = 1;
    for (int i =2; i <= numStairs; i++) {
        memo[i] = memo[i-1] + memo[i-2];
    }

    return memo[numStairs];
}

