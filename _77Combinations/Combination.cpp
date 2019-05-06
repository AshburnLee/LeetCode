//
// Created by junhui on 04/05/19.
//
#include <iostream>
#include <vector>
using namespace std;
/*
 * compare with ../_78Subsetes.cpp
 * input: n=3, k=2
 * output: [1, 2]
           [1, 3]
           [2, 3]
 * */
class Solution {
private:
    vector<vector<int>> res;
    void getCombination(int n, int k, int start, vector<int>& c){
        if (c.size() == k){
            res.push_back(c);
            return ;
        }

        for (int i=start; i<=n; i++){
            cout<<i<<endl;
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
//        for (int i=1;i<=k;i++){
//            getCombination(n,k,i,c);
//        }
        getCombination(n,k,1,c);
        return res;
    }
};

int main(int argc, char** argv){

    vector<vector<int>> res2 = Solution().combine(3,2);

    for (vector<int>& i: res2){
        for (int& ii : i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }

    return 0;
}