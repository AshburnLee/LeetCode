//
// Created by junhui on 22/05/19.
//
#ifndef _454FOURSUM_FOURSUM2_H
#define _454FOURSUM_FOURSUM2_H

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution2{
public:
    /// time: O(N^2)  59.21%
    /// space: O(N)  21.20%
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> mp1;
        for (int a:A){
            for (int b:B)
                mp1[a+b]++;
        }

        unordered_map<int, int> mp2;
        for (int c: C){
            for (int d: D)
                mp2[c+d]++;
        }

        int res = 0;
        for (auto & itr : mp1){
            if (mp2.find(-(itr.first)) != mp2.end())
                res += (itr.second) * (mp2[-(itr.first)]);
        }
        return res;
    }
};

#endif //_454FOURSUM_FOURSUM2_H
