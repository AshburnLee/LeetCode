#ifndef _974SUBARRAYSUMDIVISIBLEBYK_SOLUTION3_H
#define _974SUBARRAYSUMDIVISIBLEBYK_SOLUTION3_H

#include <iostream>
#include <vector>
using namespace std;

class Solution3 {
public:
    int subarraysDivByK(vector<int>& A, int K) {
        vector<int> prefix_sum(A.size() + 1, 0);
        for (int i = 0; i < A.size(); i++) {
            prefix_sum[i+1] = A[i] + prefix_sum[i];
        }
        
        vector<int> count(K, 0);
        for (auto a : prefix_sum) {
            count[(a % K + K) % K]++;
        }
        
        int ans = 0;
        for (auto c : count) {
            ans += c * (c - 1) / 2;
         }
        
        return ans;
    }
};

#endif
