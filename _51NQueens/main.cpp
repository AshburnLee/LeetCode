//
// Created by junhui on 08/05/19.
//
#include <iostream>
#include "NQueens.h"

using namespace std;

int main(int argc, char** argv){
    Solution sol;
    vector<vector<string>> res = sol.solveNQueens(4);


    for (auto& i: res){
        for (auto& ii:i)
            cout<<ii<<endl;
        cout<<endl;
    }

    vector<string> queen(4, string(4, '.'));
    for (auto& i:queen  )
        cout<<i<<" ";
    cout<<endl;

    return 0;
}
