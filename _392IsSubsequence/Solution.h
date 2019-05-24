//
// Created by junhui on 24/05/19.
//

#ifndef _392ISSUBSEQUENCE_SOLUTION_H
#define _392ISSUBSEQUENCE_SOLUTION_H

#include <iostream>
using namespace std;

class Solution{
public:
    /// time: O(N+M) 84.30%
    /// space: O(1)  78.09%
    bool isSubsequence(string s, string t) {
        if (s.empty()) return true;
        int i=0;
        int j=0;
        while (j<t.size()){
            if (s[i] == t[j]){
                i++;
                j++;
            }else
                j++;
            if (i == s.size())
                return true;
        }
        return false;
    }
};

#endif //_392ISSUBSEQUENCE_SOLUTION_H
