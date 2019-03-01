#include <iostream>
#include <cassert>
#include <vector>

using namespace std;

class BreakInteger {
private:
    vector<int> memo; // memo to store calculated results

    // pass: the Integer
    // return: the largest product
    // function: split n(at least two parts), find the largest product.
    int breakInteger(int n) {
        if (n == 1) return 1;

        // if memo[n] is calculated, return this result
        if (memo[n] != -1) return memo[n];

        // if memo[n] is not calculated, do it
        int res = -1;
        for (int i=1; i<n-1; i++)
            res = max3(res, i*(n-i), i*breakInteger(n-i));
        // store this result into memo, so there is no need to recalcaulte it.
        memo[n] = res;
        return res;
    }

    int max3(int a, int b, int c) {
        return max(a, max(b,c));
    }
public:
    // the entrence of breakInteger() 
    int IntegerBreak (int n) {
        assert(n >= 2);
        // init memo
        memo = vector<int>(n+1, -1);
        return breakInteger(n);
    }
};

int main(int argc, char const *argv[])
{
    BreakInteger* obj = new BreakInteger();
    cout<<obj->IntegerBreak(10)<<endl;

    return 0;
}
