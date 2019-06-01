#ifndef _397INTEGERREPLACEMENT_SOLUTION_H
#define _397INTEGERREPLACEMENT_SOLUTION_H

#include <iostream>
#include <climits>
using namespace std;

/// time: O(logN)
/// space: O(1)
class Solution {
private:
    int res = 0;
public:
    int integerReplacement(int n) {
        if (n==1) return res;
        if (n==3) {
            res += 2;
            return res;
        }
        if (n == INT_MAX) return 32;

        if (n%2==1){
            res++;
            if ((n+1)%4==0) integerReplacement(n+1);
            else integerReplacement(n-1);
        }
        else{
            res++;
            integerReplacement(n/2);
        }
        return res;

    }

};


#endif