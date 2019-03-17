//
// Created by junhui on 17/03/19.
//

#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    // time: O(n)
    // space: 0
    // be careful, pass the ref of the string, do not pass by copy
    string toLowerCase(string& str) {
        for (char& i : str) {
            if (i >= 65 && i <= 90) // upper case
                i = i + 32;
        }
//        for (int i = 0; i<str.length(); i++){
//            if (str[i] >= 65 && str[i] <=90){
//                str[i] = str[i] + 32;
//                cout<<str[i]<<" ";
//            }
//        }
        return str;
    }
};

int main(int argc, char** argv){
    string tst = {"LOVEly"};

    Solution().toLowerCase(tst);

    for (char i: tst)
        cout<<i<<" ";
    cout<<endl;
    return 0;

}