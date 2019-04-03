//
// Created by junhui on 03/04/19.
//
#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    // Method 1: put t into a map
    // time: O(max(s.size(), t.size()))
    // space: O(t.size())
    char findTheDifference(string s, string t) {
        char res;
        unordered_map<char, int> ump;
        for (auto& i : t)
            ump[i]++;

        for (auto& j : s){
            if (ump.find(j)!=ump.end())
                ump[j]--;
        }

        for (auto& itr : ump)
            if (itr.second != 0)
                res = itr.first;

        return res;
    }

    // Method 2: the difference between s & t is the ascii value of the added letter
    // time: O(max(s.size(), t.size()))
    // space: O(1)
    char findTheDifference2(string s, string t){
        int sSum = 0, tSum = 0;
        for (auto& i : s) sSum += int(i);
        for (auto& j : t) tSum += int(j);
        return char(tSum-sSum);
    }


private:
    void printMap(unordered_map<char, int>& mp){
        for (auto & itr : mp){
            cout<<itr.first<<": "<<itr.second<<endl;
        }
        cout<<endl;
    }

};

int main(int argc,char** argv){
    string s = "adcb";
    string t= "abcde";

    cout<<Solution().findTheDifference(s, t)<<endl;
    cout<<Solution().findTheDifference2(s, t)<<endl;

    string tt = "abcdd";
    cout<<Solution().findTheDifference(s, tt)<<endl;
    cout<<Solution().findTheDifference2(s, tt)<<endl;

    return 0;
}