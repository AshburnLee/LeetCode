#include <iostream>
#include "Anagram.h"
using namespace std;
int main() {
    string s = "anagram";
    string t = "naagar";
    cout<<Solution().isAnagram(s,t)<<endl;
    return 0;
}