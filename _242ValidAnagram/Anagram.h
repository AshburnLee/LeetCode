//
// Created by junhui on 19/05/19.
//

#ifndef _242VALIDANAGRAM_ANAGRAM_H
#define _242VALIDANAGRAM_ANAGRAM_H

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    /// time: O(max(s.length, t.length))
    ///space: O(s.length)
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;

        unordered_map<char, int> mp;
        for (char i : s){
            mp[i]++;
        }
        for (char i: t){
            if ( mp[i]==0 )
                return false;
            else
                mp[i]--;
        }
        return true;
    }
};

#endif //_242VALIDANAGRAM_ANAGRAM_H
