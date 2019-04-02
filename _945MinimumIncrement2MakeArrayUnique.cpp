//
// Created by junhui on 02/04/19.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // time: O(NlogN + N)
    // space: O(1)
    int minIncrementForUnique(vector<int>& A) {
        sort(A.begin(), A.end());
        int res = 0;
        for (int i=1; i<A.size(); i++){
            if (A[i] <= A[i-1]){
                res += A[i-1] +1 -A[i];
                A[i] += A[i-1] +1 -A[i];
            }
        }
        return res;
    }
};

int main(int argc, char** argv){
    vector<int> tst = {2,3,2,1,7,1};
    cout<<Solution().minIncrementForUnique(tst)<<endl;
    return 0;
}