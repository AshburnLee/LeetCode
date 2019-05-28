#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    vector<string> res = Solution().generateParenthesis(5);

    for (auto& i: res)
        cout<<i<<endl;
    return 0;
}