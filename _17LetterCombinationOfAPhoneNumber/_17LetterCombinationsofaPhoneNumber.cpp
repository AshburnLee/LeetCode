//
// Created by junhui on 03/05/19.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution{
private:
    vector<string> res;
    const string letterMap[10] = {
            " ",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
    };

    void findCombination(const string& digits, int index, const string& s){
        if (index == digits.size()){
            res.push_back(s);
            return;
        }

        char c = digits[index];
        string letters = letterMap[c-'0']; // current
        for (int i=0;i<letters.size(); i++){
            findCombination(digits, index+1, s+letters[i]);
        }

        return;
    }

public:
    // time:  O(3^N)=O(2^N)   100.00%
    //space:  O(N)  51.67%
    vector<string> letterCombinations(string digits) {
        if (digits == "")
            return res;
        findCombination(digits, 0, "");

        return res;
    }
};


int main(int argc, char** argv){
    Solution sol;
    vector<string> res = sol.letterCombinations("23");

    for (auto& _: res)
        cout<<_<<" ";
    cout<<endl;
}