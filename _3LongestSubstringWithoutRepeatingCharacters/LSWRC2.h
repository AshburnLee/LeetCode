//
// Created by junhui on 17/05/19.
//

#ifndef _3LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_LSWRC2_H
#define _3LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_LSWRC2_H

#include <iostream>
using namespace std;

class Solution2{
public:
    /// time: O(N)  99.48%
    /// space: O(N)  91.16%
    int lengthOfLongestSubstring(string s) {
        int freq[256] = {0};

        int l = 0;
        int r = -1;
        int res = 0;

        while (l < s.size()){

            if (r+1<s.size() && freq[s[r+1]] == 0){
                r++;
                freq[s[r]] ++;
            }
            else {   // r is out of bound || freq[r+1] == 1
                freq[s[l]] --;
                l++;
            }

            res = max(res, r-l+1);
        }
        return res;
    }
};


#endif //_3LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_LSWRC2_H
