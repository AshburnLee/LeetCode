//
// Created by junhui on 17/05/19.
//

#ifndef _3LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_LSWRC_H
#define _3LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_LSWRC_H

#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

class Solution{
public:
    /// time: O(N^2) 5.01%
    /// space: O(N)  5.01%
    int lengthOfLongestSubstring(string s) {
        if (s.length()==1) return 1;
        if (s.length()==0) return 0;

        int res = 1;
        for (int i=0; i<s.length(); i++){
            set<char> st;
            st.insert(s[i]);

            for (int j=i+1; j<s.length(); j++){
                if (st.find(s[j]) != st.end()){  // repeated item found
                    break;
                }
                else
                    st.insert(s[j]);
            }
//            cout<<st.size()<<endl;
            res = max(res, (int)st.size());

        }
        return res;
    }

};
#endif //_3LONGESTSUBSTRINGWITHOUTREPEATINGCHARACTERS_LSWRC_H
