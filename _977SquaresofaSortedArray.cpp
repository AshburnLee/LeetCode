//
// Created by junhui on 18/04/19.
//
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // in-space
    //time: O(NlogN)   46.45%
    //space: O(1)     100.00%
    vector<int> sortedSquares(vector<int>& A) {
        for (auto&_: A)
            _ = _*_;
        sort(A.begin(), A.end());
        return A;
    }

    // time: O(N)     86.71%
    // space: O(N)    48.58%
    vector<int> sortedSquares2(vector<int>& A) {
        vector<int> res;

        int z = 0;
        int min = abs(A[z]);
        for (int i=0; i<A.size(); i++){
            if (abs(A[i])<=min){
                z=i;
                min = abs(A[i]);
            }
        }

        int n = z-1;
        int p = z+1;
        res.push_back(A[z]*A[z]);
        while ( n>=0 || p<A.size() ){
            if(n<0 && p<=A.size()-1) {
                res.push_back(A[p]*A[p]);
                p++;
            }else if (n>=0 && p>A.size()-1) {
                res.push_back(A[n]*A[n]);
                n--;
            }else if (A[p]<= abs(A[n])){
                res.push_back(A[p]*A[p]);
                p++;
            }else if( A[p] > abs(A[n]) ) {
                res.push_back(A[n]*A[n]);
                n--;
            }
        }
        return res;
    }

};

int main(int argc, char** argv){
    vector<int> tst = {1, 3};
    vector<int> res = Solution().sortedSquares2(tst);

    for (auto&_: res)
        cout<<_<<" ";
    cout<<endl;

    return 0;
}