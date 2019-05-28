//
// Created by junhui on 28/05/19.
//

#ifndef _22GENERATEPARENTHESES_SOLUTION_H
#define _22GENERATEPARENTHESES_SOLUTION_H

#include <iostream>
#include <vector>
#include <set>
#include <stack>

using namespace std;

/// Straigth forward solution, but
/// Time Limit exceeded when n=5
class Solution{
private:
    set<string> res;
    vector<bool> used;

    void func(string input, int index, string p){
        if (index == input.size() && validParenthese(p)){
            res.insert(p);
            return;
        }

        for (int i=0; i<input.size(); i++){
            if (!used[i]){
                used[i] = true;
                p.push_back(input[i]);
                func(input, index+1, p);
                p.pop_back();
                used[i]=false;
            }
        }
    }

    /// check if the parentheses sting is valid
    bool validParenthese(string s){
        stack<char> stck;
        for (int i=0; i<s.length(); i++){
            if (s[i] == '(')
                stck.push(s[i]);
            else{
                if (stck.size() == 0) return false;
                char c= stck.top();
                stck.pop();

                char match;
                if (s[i] == ')')
                    match = '(';
                if (c !=  match)
                    return false;
            }
        }
        if (stck.size() != 0)
            return false;
        return true;
    }

public:
    vector<string> generateParenthesis(int n){
        string input;
        for (int i=0; i<n; i++){
            input.push_back('(');
            input.push_back(')');
        }

        used = vector<bool>(input.size(), false);
        string p;
        func(input, 0, p);

        return vector<string>(res.begin(), res.end());
    }

};


#endif //_22GENERATEPARENTHESES_SOLUTION_H
