//
// Created by junhui on 21/05/19.
//

#ifndef _451SORTBYFREQUENCY_SORTBYFREQUENCY_H
#define _451SORTBYFREQUENCY_SORTBYFREQUENCY_H

#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

class Solution{
public:
    /// time: O(s.length)  92.37%
    /// space: O(s.length)  44.16%
    string frequencySort(string s) {
        string res;
        unordered_map<char, int> mp;
        for (int i=0; i<s.length(); i++)
            mp[s[i]] ++;

        // sort by value and store them to a vector
        vector<pair<char, int>> mapValue(mp.begin(), mp.end());
        sort(mapValue.begin(), mapValue.end(), cmpByValue());

        // add items from mapValue to a string
        for (int i=0; i<mapValue.size(); i++){
            for (int j=0; j<mapValue[i].second; j++){
//                res.push_back(mapValue[i].first);
                res += mapValue[i].first;
            }
        }
        return res;
    }

private:
    struct cmpByValue {
        bool operator()(const pair<char, int>& l, const pair<char, int>& r){
            return l.second > r.second;
        }
    };

};

#endif //_451SORTBYFREQUENCY_SORTBYFREQUENCY_H
