//
// Created by junhui on 17/05/19.
//

#ifndef _345VOWELS_REVERSEVOWELS1_H
#define _345VOWELS_REVERSEVOWELS1_H


#include <iostream>
using namespace std;

class Solution{
public:
    /// time: O(N)  99.02%
    /// space: O(1)  41.11%
    string reverseVowels(string s) {
        for(int i=0,j=s.length()-1; i<j; i++,j--){
            while(notVowel(s[i]) && i<j) i++;
            while(notVowel(s[j]) && i<j) j--;
            swap(s[i],s[j]);
        }
        return s;
    }

private:
    bool notVowel(char c){
        return (c != 'a' && c!='A' &&
                c != 'e' && c!='E' &&
                c != 'i' && c!='I' &&
                c != 'o' && c!='O' &&
                c != 'u' && c!='U');
    }
};


#endif //_345VOWELS_REVERSEVOWELS1_H
