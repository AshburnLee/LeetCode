#include <iostream>
#include "SortByFrequency.h"

using namespace std;

int main() {
    string s = "aabcCcc";
    string res = Solution().frequencySort(s);
    cout<<res<<endl;
    return 0;
}