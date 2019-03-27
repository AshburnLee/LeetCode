//
// Created by junhui on 27/03/19.
//
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    // time: O(N*M)
    //space: O(1)
    bool canConstruct(string ransomNote, string magazine) {
        if (ransomNote.size() > magazine.size())
            return false;
        if (ransomNote.empty())
            return true;

        for (string::iterator itr=ransomNote.begin(); itr!=ransomNote.end(); itr++){
            std::size_t pos = magazine.find(*itr);
            if (pos == string::npos)
                return false;
            else
                magazine.erase(magazine.begin()+pos);
        }
        return true;
    }

    bool canConstruct2(string ransomNote, string magazine) {
        vector<int> vec1(26, 0);
        vector<int> vec2(26, 0);
        for(int i = 0; i < magazine.size(); ++i){
            ++vec2[magazine[i]-97];
        }
        for(int i = 0; i < ransomNote.size(); ++i){
            if(++vec1[ransomNote[i]-97] > vec2[ransomNote[i]-97]){
                return false;
            }
        }
        return true;
    }
};

int main(int argc, char** atgv){

    string ransomNote = "ar";
    string magazine = "abcrd";

    bool res = Solution().canConstruct(ransomNote, magazine);
    cout<<res<<endl;

    return 0;
}
