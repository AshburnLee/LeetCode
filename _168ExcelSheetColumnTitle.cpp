//
// Created by junhui on 29/03/19.
//
#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    //time: O(logN). N is the input number
    //space: O(logN)
    string convertToTitle(int n) {
        stack<char> s;
        int y = 0;
        while(n>26){
            if (n%26==0){
                y=26;
                n=n/26-1;
                s.push('A' + (y-1));
            }else{
                y = n%26;
                n = n/26;
                s.push('A' + (y-1));
            }
        }
        s.push('A' + (n-1));

        string res;
        while (!s.empty()){
            res.push_back(s.top());
            s.pop();
        }
        return res;
    }
};

int main(int argc, char** argv){

    int x = 52056;

    string res = Solution().convertToTitle(x);

    for (auto& _:res)
        cout<<_<<" ";
    cout<<endl;

    return 0;
}