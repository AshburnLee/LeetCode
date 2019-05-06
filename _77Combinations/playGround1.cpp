//
// Created by junhui on 06/05/19.
//
/*
 * input = {"123","456" }
 * ouput all combinations from input[0] & input[1]
 * */

#include <iostream>
#include <vector>
using namespace std;

class Solution{
private:
    vector<string> res;

    /* s is const */
    void getCombination(vector<string>& input, int index, const string& s){
        if (index == input.size()){
            res.push_back(s);
            return;
        }

        string c = input[index];

        for (int i=0; i<c.size(); i++){
            getCombination(input, index+1, s+c[i]);
        }
        return;
    }

public:
    vector<string> allCombinations(vector<string>& input){
        getCombination(input, 0, "");
        return res;
    }

    void printRes(){
        for (string& i: res)
            cout<<i<<" ";
        cout<<endl;
    }

};

int main(int argc, char** argv){
    vector<string> input = {"123", "456"};
    Solution sol;

    vector<string> res = sol.allCombinations(input);

    sol.printRes();

    return 0;
}