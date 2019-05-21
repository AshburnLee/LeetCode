//
// Created by junhui on 21/05/19.
//
#ifndef _205ISOMORPHICSTRING_FUNCTION_H
#define _205ISOMORPHICSTRING_FUNCTION_H

#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{
public:
    /// time: O(s.length)
    //// space: O(s.length)
    bool isIsomorphic(string s, string t) {
        unordered_map<char, int> mpS;
        unordered_map<char, int> mpT;

        for (int i=0; i<s.size(); i++){
            if (mpS[s[i]] != mpT[t[i]])
                return false;
            mpS[s[i]]=i+1;
            mpT[t[i]]=i+1;
        }
        return true;
    }
};
#endif //_205ISOMORPHICSTRING_FUNCTION_H
