//
// Created by junhui on 2020/3/17.
//

#ifndef _386LEXICOGRAPHICALNUMBERS_SOLUTION1_H
#define _386LEXICOGRAPHICALNUMBERS_SOLUTION1_H
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Solution1 {
public:
    vector<int> lexicalOrder(int n) {
        vector<int> vec(n, 0);
        for(int i=1;i<=n;i++){
            vec[i-1] = i;
        }

        vector<string> vecStr(n, "");
        int curr=0;
        for(int i=1;i<=n;i++){
            curr = i;
            while(curr!=0){
                int rem = curr % 10;
                //cout<<rem<<" ";
                vecStr[i-1].insert(vecStr[i-1].begin(), rem+'0');
                curr = curr/10;
            }
        }
        sort(vecStr.begin(), vecStr.end());
        vector<int> ans;
        for(auto str: vecStr){
            //int result=0;
            int length=str.size();
            int i=0;
            int sum=0;
            while(i<length){
                sum+=(str[i]-'0') * pow(10,(length-i-1));
                i++;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
#endif //_386LEXICOGRAPHICALNUMBERS_SOLUTION1_H
