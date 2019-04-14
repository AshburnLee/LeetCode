//
// Created by junhui on 14/04/19.
//
#include <iostream>
#include <vector>
#include <set>
#include <map>

using namespace std;

class Solution {
public:
    //reasonable and correct solution, yet time limit exceeded
    // need to find a faster solution.
    bool repeatedSubstringPattern(string s) {
        int sl = s.size();
        bool res=false;

        for (int k=1;k<=sl/2; k++){
            string pattern;
            for (int i=0; i<k;i++)
                pattern.push_back(s[i]);

            cout<<pattern<<endl;

            if (matching(s, pattern)){
                res = true;
                break;
            }
            else
                continue;
        }
        return res;
    }

    bool matching(string s, string pattern){

        int sl = s.size();
        int pl = pattern.size();
        if (sl%pl != 0)
            return false;

        set<int> record;
        for (int i=0; i<sl-pl+1; i+=pl){

            for (int j = 0; j < pl; j++) {
                if (s[i + j] == pattern[j]) {
                    continue;
                } else {
                    record.insert(1);
                }
            }
        }

        if (record.find(1) != record.end())
            return false;
        else
            return true;
    }
};

int main(int argc, char** argv){
    string s = "abdabdabd";
    cout<<Solution().repeatedSubstringPattern(s)<<endl;

    return 0;
}
