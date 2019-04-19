//
// Created by junhui on 19/04/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // in-place
    // time: O(N*2)   20.81%
    // space: O(1)    99.22%
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
        for (auto& row: A)
            reverse(row.begin(), row.end());

        for (auto& row : A) {
            for (auto &item: row)
                item = item == 0 ? 1 : 0;
        }
        return A;
    }
};
int main(int argc, char** argv){
    vector<vector<int>> A = {{1,1,0},{1,0,1},{0,0,0}};

    vector<vector<int>> B = Solution().flipAndInvertImage(A);

    for (auto& row:B) {
        for (auto& item:row) {
            cout << item << " ";
        }
        cout << endl;
    }
    return 0;
}