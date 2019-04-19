//
// Created by junhui on 19/04/19.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    //time: O(N)   33.35% || 97.47%
    // space : O(N)   100.00%
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int> res(A.size(), 0);
        int even = 0;
        int odd = 1;

        for (auto& item: A){
            if (item%2 == 0){
                res[even] = item;
                even += 2;
            }
            else{
                res[odd] = item;
                odd += 2;
            }
        }
        return res;
    }
};

int main(int argc, char** argv){
    vector<int> A = {2,4,6,1,3,5};
    vector<int> res = Solution().sortArrayByParityII(A);

    for (auto& item : res)
        cout<<item<<" ";
    cout<<endl;
    return 0;
}