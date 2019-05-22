//
// Created by junhui on 22/05/19.
//

#ifndef _454FOURSUM_FOURSUM1_H
#define _454FOURSUM_FOURSUM1_H

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution1{
public:
    /// time: O(N^2)
    /// space: O(N)
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D){
        unordered_map<int, int> mp;
        for (int a:A){
            for (int b:B)
                mp[a+b] ++;
        }

        int res = 0;
        for (int c: C){
            for (int d:D)
                if (mp.find(0-c-d) != mp.end())
                    res += mp[-(c+d)];
        }
        return res;
    }
};

#endif //_454FOURSUM_FOURSUM1_H
