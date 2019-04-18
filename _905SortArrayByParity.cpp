//
// Created by junhui on 18/04/19.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // time: O(N)    98.30%
    // space: O(N)    98.07%
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> tmp;
        for (int i=0; i<A.size(); i++){
            if (A[i]%2==0)
                tmp.push_back(A[i]);
        }
        for (int i=0; i<A.size(); i++){
            if (A[i]%2!=0)
                tmp.push_back(A[i]);
        }
        return tmp;
    }
};

int main(int argc, char** argv){
    vector<int> tst = {1,3,5,6,7,8,9};
    vector<int> res = Solution().sortArrayByParity(tst);

    return 0;
}