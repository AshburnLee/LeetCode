//
// Created by junhui on 27/03/19.
//

#include <iostream>
using namespace std;

class Solution{
public:
    // time: O(N)
    // space: O(1)
    int countSegments(string s) {

        int count = 0;
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] != 32) {

                // count+1 after one word being scanned
                while (s[i] != 32 && i < n) {
                    i++;
                }
                count++;
            }
        }
        return count;
    }

//    bool isLetter(char c){
//        return !(c < 65 || c > 122 || (c > 90 && c < 97));
//    }
};

int main(int argc, char** argv){
    Solution sol;
    string s = "adg erg'qrg qer s";
    cout<<"Result: "<<sol.countSegments(s)<<endl;
    return 0;
}