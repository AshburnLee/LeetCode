//
// Created by junhui on 20/05/19.
//

#ifndef _290WORDPATTERN_WORDPATTERN_H
#define _290WORDPATTERN_WORDPATTERN_H

#include <iostream>
#include <map>
#include <sstream>  // istringstream

using namespace std;
class Solution{
public:
    /// time: O(N) 100.00%
    /// space: O(N) 7.39%
    bool wordPattern(string pattern, string str) {
        map<char, int> mp1;
        map<string, int> mp2;

        istringstream in(str);
        int i = 0, n = pattern.size();
        for (string word; in >> word; i++) {
            if (i == n || mp1[pattern[i]] != mp2[word])
                return false;

            mp2[word] = i + 1;
            mp1[pattern[i]] = i + 1;
        }
        return i == n;
    }
};


#endif //_290WORDPATTERN_WORDPATTERN_H
