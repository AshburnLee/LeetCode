#include <iostream>
#include "FindAllAnagrams.h"
using namespace std;

int main() {
//    string s = "dcbaebabacd";
//    string p = "abc";
//    vector<int> res = Solution().findAnagrams(s, p);
//
//    for (auto& i: res)
//        cout<<i<<endl;
//    cout<<endl;

    string s = "bca";
    unordered_map<char, int> mp;
    mp['a'] = 1;
    mp['b'] = 1;
    mp['c'] = 1;

    mp['a'] --;
    cout<<(mp['a']==0)<<endl;
    if (mp['a']==0)
        mp.erase(mp['a']);

    for (unordered_map<char, int>::iterator itr = mp.begin(); itr!=mp.end(); itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }

    cout<<(mp.find('a') != mp.end())<<endl;



    return 0;
}