//
// Created by junhui on 20/04/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // time: O(N*N)    100.00%
    // space: O(2*N)   100.00%
    vector<int> pancakeSort(vector<int>& A) {
        vector<int> result;
        for(int i = 0;i < A.size();i++){   // O(N)
            vector<int>::iterator itr = max_element(A.begin(), A.end() - i);  // O(N)
            reverse(A.begin(), itr + 1);
            result.push_back(itr  - A.begin() + 1);

            result.push_back(A.size() - i);
            reverse(A.begin(),A.end() - i); // O(N)
        }
        return result;
    }
};

int main(int argc, char** argv){
    Solution sol;
    vector<int> A = {4,3,1,6,5,2};
    vector<int> res = sol.pancakeSort(A);
    for (auto& _: res)
        cout<<_<<" ";
    cout<<endl;


    return 0;
}