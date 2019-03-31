//
// Created by junhui on 31/03/19.
//

#include <iostream>
#include <cassert>
#include <climits>
#include <vector>

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

public:
    int nthUglyNumber2(int n) {
        vector <int> results (1,1);
        int i = 0, j = 0, k = 0;
        while (results.size() < n)
        {
            results.push_back(min(results[i] * 2, min(results[j] * 3, results[k] * 5)));
            if (results.back() == results[i] * 2) ++i;
            if (results.back() == results[j] * 3) ++j;
            if (results.back() == results[k] * 5) ++k;
        }
        return results.back();
    }

public:
    int nthUglyNumber3(int n) {
        vector<int> ugly(n, 1);
        int c2 = 2, c3 = 3, c5 = 5;
        int i2 = 0, i3 = 0, i5 = 0;
        for (int i=1; i<n; ++i) {
            int last = ugly[i] = min(c2, min(c3, c5));
            while (c2 <= last) c2 = 2 * ugly[++i2];
            while (c3 <= last) c3 = 3 * ugly[++i3];
            while (c5 <= last) c5 = 5 * ugly[++i5];
        }
        return ugly[n-1];
    }
};


int main(int argc, char** argv){
    cout<<Solution().nthUglyNumber3(1352)<<endl;
    return 0;
}