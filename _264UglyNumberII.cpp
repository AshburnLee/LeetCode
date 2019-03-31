//
// Created by junhui on 31/03/19.
//

#include <iostream>
#include <cassert>
#include <climits>

using namespace std;

class Solution {
public:
    // naive way, Time Limit Exceeded
    int nthUglyNumber(int n) {
        assert( n<= 1690 );
        int lmt = INT_MAX;
        int count = 0;
        for (int i=1; i<lmt; i++){
            if (isUgly(i))
                count++;

            if (count == n)
                return i;
        }
        throw invalid_argument("No solution");
    }
    bool isUgly(int num){
        if (num<=0)
            return false;
        while (num%2==0) num/=2;
        while (num%3==0) num/=3;
        while (num%5==0) num/=5;

        return num==1;
    }

    
};

int main(int argc, char** argv){
    cout<<Solution().nthUglyNumber(1352)<<endl;
    return 0;
}