#include <iostream>
#include "reverseVowels1.h"
#include "reverseVowels2.h"

int main() {
    string s = "leetcode";

    string res = Solution().reverseVowels(s);
    cout<<res<<endl;

    string res2 = Solution2().reverseVowels(s);
    cout<<res2<<endl;
    return 0;
}