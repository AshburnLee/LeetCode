//
// Created by junhui on 14/04/19.
//
#include <iostream>
using namespace std;
class Solution {
public:
    // time: O(N)
    // space: O(1)
    // 100.00% 98.75%
    bool detectCapitalUse(string word) {
        return rules(word);
    }

    bool rules(string s) {
        // all lower cases
        if (s[0] >= 97 && s[0] <= 122)
            for (int i = 0; i < s.size(); i++) {
                if (s[i] >= 65 && s[i] <= 90)
                    return false;
            }


        // all upper cases
        if (s[0] >= 65 && s[0] <= 90 && s[1] >= 65 && s[1] <= 90)
            for (int i = 2; i < s.size(); i++) {
                if (s[i] >= 97 && s[i] <= 122)
                    return false;
            }


        // initial upper case, followed by lower cases
        if (s[0] >= 65 && s[0] <= 90 && s[1] >= 97 && s[1] <= 122)
            for (int i = 2; i < s.size(); i++) {
                if (s[i] >= 65 && s[i] <= 90)
                    return false;
            }
        return true;
    }
};

int main(int argc, char** argv){
    Solution sol;
    string s = "Google";
    string s1 = "USA";
    string s2 = "hello";

    cout<<sol.detectCapitalUse(s)<<endl;
    cout<<sol.detectCapitalUse(s1)<<endl;
    cout<<sol.detectCapitalUse(s2)<<endl;
    return 0;
}