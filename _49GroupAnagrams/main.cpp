#include <iostream>
#include "Solution.h"

using namespace std;

int main() {
    vector<string> strs = {"eat", "tea", "tan", "ate", "nat", "bat"};

    auto sol = new MySpace::Solution();
    vector<vector<string>> res = sol->groupAnagrams(strs);

    MySpace::printRes(res);

    return 0;
}