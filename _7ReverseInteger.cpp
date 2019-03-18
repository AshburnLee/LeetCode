//
// Created by junhui on 18/03/19.
//


#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

class Solution {
public:
    // time: O(logN)
    // space: O(1)
    int reverse(int x) {

        int count = 0;
        int tmp = x;
        while ( tmp!=0 ){
            tmp = tmp/10;
            count++;
        }

        int carry = 0;
        long long res=0;

        while ( x!=0 ){
            carry = x%10;
            x = x/10;
            res += carry * pow(10, (count-1));
            count --;
        }
        return (res<INT32_MIN || res>INT32_MAX) ? 0 : res;
    }

    int reverse2(int x) {
        long long res = 0;
        while(x) {
            res = res*10 + x%10;
            x /= 10;
        }
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
};

int main(int argc, char** argv){
    
    cout<<Solution().reverse(1534236469)<<endl;

    return 0;
}