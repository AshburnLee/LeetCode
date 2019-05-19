//
// Created by junhui on 19/05/19.
//

#ifndef _202HAPPYNUMBER_HAPPYNUMBER_H
#define _202HAPPYNUMBER_HAPPYNUMBER_H

#include <iostream>
#include <unordered_set>
#include <cmath>

using namespace std;

class Solution {
public:
    bool isHappy(int n){
        unordered_set<int> record;

        while (true){
            if ( n==1 ) return true;

            record.insert(n);
            n = func(n);

            // a loop is created among the res of func
            if (record.find(n) != record.end())
                return false;
        }
    }
private:
    int func(int n){
        int res = 0;
        while (n!=0){
            res += pow(n%10, 2);
            n /= 10;
        }
        return res;
    }
};
#endif //_202HAPPYNUMBER_HAPPYNUMBER_H
