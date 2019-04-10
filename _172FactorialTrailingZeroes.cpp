//
// Created by junhui on 10/04/19.
//
#include <iostream>

using namespace std;

class Solution {
public:
    // naive way, in this way N! is calculated, which is redundant.
    // time: O(N!)
    // space: O(1)
    int trailingZeroes(int n) {
        long long fact=1;
        while( n!=0 ){
            fact *= n;
            n--;
        }
        cout<<fact<<endl;
        int res=0;
        while (fact%10 == 0) {
            res++;
            fact = fact / 10;
        }
        return res;
    }

    //we need to first think clear about what will generate a trailing 0
    // time:
    //space:
    int trailingZeroes2(int n) {
        int count = 0;
        for (long long i = 5; n / i; i *= 5)
            count += n / i;
        return count;
    }
};

int main(int argc, char** argv){
    cout<<Solution().trailingZeroes(20)<<endl;
    return 0;
}