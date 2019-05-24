#include <iostream>
#include "Solution.h"

using namespace std;
int main() {
    string s = "abc";
    string t = "ahbgdc";
    cout<<Solution().isSubsequence(s, t)<<endl;

    string s2 = "axc";
    string t2 = "ahbgdc";
    cout<<Solution().isSubsequence(s2,t2)<<endl;

    return 0;
}