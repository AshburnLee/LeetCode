#include "Solution.h"

int main(int argc, char** argv){

    vector<string> test;
    test.push_back("flowefghj");
    test.push_back("flower");
    test.push_back("flowght");

    string res = Solution().longestCommonPrefix(test);

    for (auto _: res)
        cout<<_<<" ";
    cout<<endl;
    return 0;
}
