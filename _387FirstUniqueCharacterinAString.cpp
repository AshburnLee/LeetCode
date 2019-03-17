//
// Created by junhui on 17/03/19.
//

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    // does no twork for some cases
    int firstUniqChar1(string s) {
        if (s.length() == 0)
            return -1;
        if (s.length() == 1)
            return 0;
        char res;
        int id=-1;
        for (int i=0; i<s.length(); i++){
            res = s[i];
            for (int j=i+1; j< s.length(); j++){
                if (s[j] == res)
                    break;
                if(j == s.length() - 1){
                    id = i;
                    return id;
                }
            }
        }
        return id;
    }

    // time: O(n)
    int firstUniqChar(string s){

        if (s.length() == 0)
            return -1;
        int res;

        // create a map
        unordered_map<char, int> mp;
        for (auto _: s)
            mp[_] ++;


        // logic
        for (int i=0;i<s.length();i++){
            if(mp[s[i]] == 1) {
                res = i;
                break;
            }
            if (i == s.length() -1 && mp[s[i]] != 1)
                res = -1;
        }
        return res;
    }
};

int main(int argc, char** argv){
    string tst = "";
    int id = Solution().firstUniqChar(tst);
    cout<<id<<endl;
    return 0;
}