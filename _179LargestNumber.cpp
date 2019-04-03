//
// Created by junhui on 03/04/19.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//bool func(int a, int b) {return to_string(a)+to_string(b) > to_string(b)+to_string(a); }

class Solution {
public:
    //time: O(NlogN)
    //space: O(1)
    string largestNumber(vector<int> &num) {
        sort(num.begin(), num.end(), [](int a, int b){
            return to_string(a)+to_string(b) > to_string(b)+to_string(a);
        });
//        sort(num.begin(), num.end(), func);
        printVec(num);

        string res;
        for(int i : num){
            res += to_string(i);
        }
        return res[0]=='0' ? "0" : res;
    }

    void printVec(vector<int>& num){
        for (auto& i:num)
            cout<<i<<" ";
        cout<<endl;
    }
};

int main(int argc, char** argv){
    vector<int> num2 = {9, 5321,4568,3472,3461,365,1};
    vector<int> num = {3,30,1,51,9};
    string res = Solution().largestNumber(num);
    cout<<res<<endl;

    return 0;
}