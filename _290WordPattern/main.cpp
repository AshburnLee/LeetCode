#include <iostream>
#include "WordPattern.h"

using namespace std;

int main() {
    string pattern = "abba";
    string str = "dog cat cat dog";
    cout<<Solution().wordPattern(pattern, str)<<endl;


    return 0;
}