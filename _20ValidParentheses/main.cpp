#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    string s = "{}()[]";
    cout<<Solution().isValid(s)<<endl;

    string s2 = "{}[";
    cout<<Solution().isValid(s2)<<endl;

    string s3 = "";
    cout<<Solution().isValid(s3)<<endl;
    return 0;
}