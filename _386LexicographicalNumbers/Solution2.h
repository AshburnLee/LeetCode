//
// Created by junhui on 2020/3/18.
//

#ifndef _386LEXICOGRAPHICALNUMBERS_SOLUTION2_H
#define _386LEXICOGRAPHICALNUMBERS_SOLUTION2_H

using namespace std;

class Solution2 {
private:
    vector<int> res;
    int num;
public:
    vector<int> lexicalOrder(int n) {
        num = n;
        for(int i=1;i<=9;i++){
            dfs(i);
        }
        return res;
    }

    void dfs(int x){
        if(x > num)
            return;
        res.push_back(x);
        for(int i=0 ;i<=9;i++){
            dfs(x*10+i);
        }
    }
};

#endif //_386LEXICOGRAPHICALNUMBERS_SOLUTION2_H
