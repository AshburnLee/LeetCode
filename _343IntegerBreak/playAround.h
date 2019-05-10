//
// Created by junhui on 10/05/19.
//

#ifndef _343INTEGERBREAK_PLAYAROUND_H
#define _343INTEGERBREAK_PLAYAROUND_H

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
private:
    vector<int> res;

    void getProducts(int n, int tmp){
        if (n == 1){
            res.push_back(tmp);
            tmp = 1;
        }

        for (int i=1; i<n; i++){
            getProducts(n-i, tmp*i);

        }
        return;
    }
public:
    int integerBreak(int n) {
        int tmp = 1;
        getProducts(n ,tmp);

        return *max_element(res.begin(), res.end());
    }

    vector<int> getRes(){
        for (auto& i: res)
            cout<<i<<" ";
        cout<<endl;
    }
};

#endif //_343INTEGERBREAK_PLAYAROUND_H
