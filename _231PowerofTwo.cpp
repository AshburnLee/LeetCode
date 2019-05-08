//
// Created by junhui on 08/05/19.
//
#include <iostream>
#include <cassert>
using namespace std;

// time: O(logN)  100.00%
// space: O(1)  35.74%
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n==0) return false;
        if (n>1 && n%2!=0) return false;
        while (n!=1){
            if (n%2!=0) return false;
            else n=n/2;
        }
        return true;
    }
};

// time: O(1)  100.00%
// space : O(1)   35.74%
class Solution2{
public:
    bool isPowerOfTwo(int n){
        if (n==0) return false;
        return (n>0 && (n & (n-1)) == 0);
    }
};

int main(){
    cout<<Solution2().isPowerOfTwo(1)<<endl;
    cout<<Solution2().isPowerOfTwo(2)<<endl;
    cout<<Solution2().isPowerOfTwo(3)<<endl;
    cout<<Solution2().isPowerOfTwo(4)<<endl;
    cout<<Solution2().isPowerOfTwo(16)<<endl;
    cout<<Solution2().isPowerOfTwo(218)<<endl;
    return 0;
}