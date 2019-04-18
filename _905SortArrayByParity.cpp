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

    // in-space
    // time: O(N)   98.30%
    // space: O(1)  99.68%
    void sortArrayByParity2(vector<int>& A){
        int odd = 0;
        int even = A.size()-1;
        while(odd < even){
            if      (A[odd]%2==1 && A[even]%2==0)
                swap(A[odd++], A[even--]);
            else if (A[odd]%2==0 && A[even]%2==1) {
                odd++;
                even--;
            }
            else if (A[odd]%2==1 && A[even]%2==1)
                even--;
            else if (A[odd]%2==0 && A[even]%2==0)
                odd++;
        }
        return;
    }
};

int main(int argc, char** argv){
    Solution sol;
    vector<int> tst = {1,3,5,6,7,8,9};

    vector<int> res = sol.sortArrayByParity(tst);
    sol.sortArrayByParity2(tst);

    for (auto& _: res)
        cout<<_<<" ";
    cout<<endl;

    for (auto& _: tst)
        cout<<_<<" ";
    cout<<endl;
    return 0;
}