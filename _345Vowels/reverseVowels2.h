//
// Created by junhui on 17/05/19.
//

#ifndef _345VOWELS_REVERSEVOWELS2_H
#define _345VOWELS_REVERSEVOWELS2_H

#include <iostream>
#include <string>

using namespace std;

class Solution2{
public:
    /// time: O(N)  98.91%
    /// space:  O(1)  62.01%
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            i = s.find_first_of("aeiouAEIOU", i);
            j = s.find_last_of("aeiouAEIOU", j);
            if(i<j)
                swap(s[i++], s[j--]);
        }
        return s;
    }
};


#endif //_345VOWELS_REVERSEVOWELS2_H
