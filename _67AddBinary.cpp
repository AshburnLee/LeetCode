//
// Created by junhui on 18/03/19.
//
#include <iostream>
#include <string>
//#include <stdlib.h>

using namespace std;

class Solution{
public:
    //
    string addBinary2(string a, string b){
        // prepare a & b
        int N = maxN(a,b);
        a.insert(0, N - a.size(), '0');
        b.insert(0, N - b.size(), '0');

        //logic
        int jinwei = 0;
        string res = "";
        int sum = 0;
        for (int i=N-1; i>=0; i--){

            sum = char2int(a[i]) + char2int(b[i]) + jinwei;
            int value;

            jinwei = sum/2;
            value = sum%2;
//            res.insert(res.begin(), int2char(value));
            res = int2char(value) + res;  // faster than the above one!!!!!!!!!!!!

        }
        if (jinwei == 1)
            res.insert(res.begin(), int2char(jinwei));
        if (res[0] == '0')
            res.erase(0,1);
        return res;
    }

    int char2int(char c){
        int res;
        return res = c == '0'?0:1;
    }
    char int2char(int i){
        char res;
        return res = i == 1?'1':'0';
    }
    int maxN(string a, string b){
        return static_cast<int>(a.size() > b.size() ? a.size()+1 : b.size()+1);
    }

    string addBinary(string a, string b) {
        int i = a.size()-1;
        int j = b.size()-1;
        int carry = 0;
        string ret = "";
        while (i >= 0 || j >= 0 || carry!=0) {
            if (i >= 0) {
                carry += a[i]=='0'?0:1;
                i--;
            }
            if (j >= 0) {
                carry += b[j]=='0'?0:1;
                j--;
            }
            ret = ((carry%2)==0?"0":"1") + ret;

            carry /= 2;
        }
        return ret;
    }
};

int main(int argc, char** argv){
    string a = "101101";
    string b = "1011";

//    int n = Solution().maxN(a,b);
//
//    a.insert(0, n-a.size(), '0');
//    b.insert(0, n-b.size(), '0');
//
//    cout<<a<<endl;
//    cout<<b<<endl;
    cout<<"***********************"<<endl;
    string res = Solution().addBinary2(a,b);
    cout<<res<<endl;

    string res2 = Solution().addBinary(a,b);
    cout<<res2<<endl;

//    string x = "123";
//    char y = 'u';
//    cout<<y+x<<endl;


    return 0;
}
