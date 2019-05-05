//
// Created by junhui on 05/05/19.
//
#include <iostream>
#include <vector>
using namespace std;

/*
 * input: n=4
 * output: []
 *         [1]
           [1, 2]
           [1, 2, 3]
           [1, 3]
           [2]
           [2, 3]
           [3]
 * */
class Solution {
private:

    vector<vector<int>> res;
    void getCombination(int n, int start, vector<int>& c){

        res.push_back(c);

        for (int i=start; i<=n; i++){
            c.push_back(i);
            getCombination(n,i+1,c);
            c.pop_back();
        }
        return;
    }
public:
    // time: O(N^K)
    // space: O()
    vector<vector<int>> combine(int n) {
        vector<int> c;
        getCombination(n,1,c);
        return res;
    }
};

int main(int argc, char** argv){

    vector<vector<int>> res2 = Solution().combine(3);

    for (vector<int>& i: res2){
        for (int& ii : i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }

    return 0;
}
