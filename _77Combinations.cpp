//
// Created by junhui on 04/05/19.
//
#include <iostream>
#include <vector>
using namespace std;

class Solution {
private:
    vector<vector<int>> res;
    void getCombination(int n, int k, int start, vector<int>& c){
        if (c.size() == k){
            res.push_back(c);
            return ;
        }

        for (int i=start; i<=n; i++){
            c.push_back(i);
            getCombination(n,k,i+1,c);
            c.pop_back();
        }
        return;
    }
public:
    // time: O(N^K)   60.64%
    // space: O()      33.33%
    vector<vector<int>> combine(int n, int k) {
        vector<int> c;
        getCombination(n,k,1,c);
        return res;
    }
};

int main(int argc, char** argv){
    vector<vector<int>> res = Solution().combine(4,2);

    for (vector<int>& i: res){
        for (int& ii : i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }
    return 0;
}