//
// Created by junhui on 17/03/19.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    // time: O(N*M)
    // space: O(1)
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        string res="";
        for (int j=0;j<strs[0].length(); j++){
            char tmp = strs[0][j];
            for(int i=0;i<strs.size(); i++){
                if(strs[i][j] != tmp)
                    return res;
                else
                    continue;
            }
            res.push_back(tmp);
        }
        return res;
    }

    void printVector(vector<string>& test){
        for (auto _: test)
            cout<<_<<" ";
        cout<<endl;
    }
};

int main(int argc, char** argv){

    vector<string> test;
    test.push_back("flowefghj");
    test.push_back("flower");
    test.push_back("flowght");

    cout<<test[0][0]<<endl;

    Solution().printVector(test);

    string res = Solution().longestCommonPrefix(test);

    for (auto _: res)
        cout<<_<<" ";
    cout<<endl;
    return 0;
}