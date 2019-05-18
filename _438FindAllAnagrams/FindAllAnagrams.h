//
// Created by junhui on 18/05/19.
//
#ifndef _438FINDALLANAGRAMS_FINDALLANAGRAMS_H
#define _438FINDALLANAGRAMS_FINDALLANAGRAMS_H

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
class Solution{
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        int n = s.length();
        int m = p.length();
        for (int i=0; i<=n-m; i++){
            if (same(i, m, s, p)){
                res.push_back(i);
            }
        }
        return res;
    }

private:
    bool same(int i, int m, string& s, string& p){
        unordered_map<char, int> mp;

        // add s[i],..,s[m-1] to map
        for (int j=i;j<m;j++){
            mp[s[j]]++;
        }

        // search item from p in map
        for (int k=0;k<m;k++){
            if (mp.find(p[k]) == mp.end())
                return false;
            else{
                mp[p[k]]--;
                if (mp[p[k]]==0)
                    mp.erase(mp[p[k]]);
            }
        }
        return true;
    }
};

#endif //_438FINDALLANAGRAMS_FINDALLANAGRAMS_H
