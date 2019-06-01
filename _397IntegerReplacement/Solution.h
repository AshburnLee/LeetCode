#ifndef _397INTEGERREPLACEMENT_SOLUTION_H
#define _397INTEGERREPLACEMENT_SOLUTION_H

#include <iostream>
#include <climits>
using namespace std;

/*For every 4 continous integers: 
    one int : n%2==0
    one int : n%4==0
    one int : odd
    one int : odd
  For the two odds, they satisfy either (n+1)%4==0 or (n-1)%4==0 
*/
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

        if (n%2==1){  // odd
            res++;
            if ((n+1)%4==0) integerReplacement(n+1);
            else if ((n-1)%4==0) integerReplacement(n-1);
        }
        else{   // even
            res++;
            integerReplacement(n/2);
        }
        return res;

    }
};


#endif