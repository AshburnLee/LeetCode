//
// Created by junhui on 22/05/19.
//
#ifndef _20VALIDPARENTHESES_SOLUTION_H
#define _20VALIDPARENTHESES_SOLUTION_H

#include <iostream>
#include <stack>

using namespace std;
class Solution{
public:
    /// time: O(N)   100.00%
    /// space: O(N)   57.34%
    bool isValid(string s){

        stack<char> stck;
        for (int i=0; i<s.length(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
                stck.push(s[i]);
            else{
                if (stck.empty()) return false;
                char c = stck.top();
                char match;

                if (s[i] == ')') match = '(';
                else if (s[i] == ']') match = '[';
                else if (s[i] == '}') match = '{';

                if (c != match) return false;
                stck.pop();
            }
        }
        if ( !stck.empty()) return false;
        return true;
    }
};

#endif //_20VALIDPARENTHESES_SOLUTION_H
