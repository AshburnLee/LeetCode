#include <iostream>
#include "FindAllAnagrams.h"
#include "FindAllAnagrams2.h"
using namespace std;


int main() {
    string s ="abbbabbabba";
    string p = "abb";

    vector<int> res = Solution().findAnagrams(s, p);
    for (auto& i: res)
        cout<<i<<" ";
    cout<<endl;

    vector<int> res2 = Solution2().findAnagrams(s, p);
    for (auto& i: res2)
        cout<<i<<" ";
    cout<<endl;


    return 0;
}

