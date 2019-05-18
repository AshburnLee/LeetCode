#include <iostream>
#include "FindAllAnagrams.h"
using namespace std;

int main() {
    string s = "abcddddabcdddabc";
    string p = "bca";

    vector<int> res = Solution().findAnagrams(s, p);
    for (auto& i: res)
        cout<<i<<endl;
    cout<<endl;

    return 0;
}