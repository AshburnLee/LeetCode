#include <iostream>
#include "Solution.h"
#include "Solution2.h"

using namespace std;

int main() {
    vector<string> res = Solution2().generateParenthesis(3);
    for (auto& i: res)
        cout<<i<<endl;

    cout<<endl;

    vector<string> res2 = Solution().generateParenthesis(3);
    for (auto& i: res2)
        cout<<i<<endl;
    return 0;
}