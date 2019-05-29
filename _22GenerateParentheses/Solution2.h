//
// Created by junhui on 29/05/19.
//

#ifndef _22GENERATEPARENTHESES_SOLUTION2_H
#define _22GENERATEPARENTHESES_SOLUTION2_H

#include <iostream>
#include <vector>

using namespace std;

/// time: O(2^N)  97.41%
/// space: O(2^N)  43.11%
class Solution2{
private:
    void func(vector<string>& res, string str, int n, int m){
        if ( n==0 && m==0 ){
            res.push_back(str);
            return;
        }
        if (m > 0) { func(res, str+')', n, m-1); }
        if (n > 0) { func(res, str+'(', n-1, m+1); }
        return;
    }
public:
    vector<string> generateParenthesis(int n){
        vector<string> res;
        func (res, "", n, 0);
        return res;
    }
};

#endif //_22GENERATEPARENTHESES_SOLUTION2_H
