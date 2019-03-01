#include <iostream>

using namespace std;

class BreakInteger {
private:
    // pass: the Integer
    // return: the largest product
    // function: split n(at least two parts), find the largest product.
    int breakInteger(int n) {
        if (n == 1) return 1;
        int res = -1;
        for (int i=1; i<n-1; i++)
            // why res ? isn't it -1 ?
            res = max3(res, i*(n-i), i*breakInteger(n-i));
        return res;
    }

    int max3(int a, int b, int c) {
        return max(a, max(b,c));
    }
public:
    int IntegerBreak (int n) {
        return breakInteger(n);
    }
};

int main(int argc, char const *argv[])
{
    BreakInteger* obj = new BreakInteger();
    cout<<obj->IntegerBreak(10)<<endl;

    return 0;
}
