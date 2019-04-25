//
// Created by junhui on 25/04/19.
//
#include <iostream>
using namespace std;

class Solution{
public:
    // C(m+n-2, m-1) = C(m+n-2, n-1)
    // time:  O(n) or O(m)100.00%
    // space: O(1) 58.74%
    int uniquePaths(int m, int n) {
        int M = m+n-2;
        int N = n-1;
        long res = 1;
        for (int i=1; i<=N; i++){
//            res = res * (M - i + 1) / i;   wrong!!!
            res = res * (M + i - N) / i;
        }
        return (int)res;
    }
};


int main(int argc, char** argv){
    // test sample: (13,23)
    int m = 10;
    int n = 23;
    cout<<Solution().uniquePaths(m, n)<<endl;

    return 0;
}
