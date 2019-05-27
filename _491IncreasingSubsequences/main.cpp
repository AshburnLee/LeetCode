#include <iostream>
#include "Solution.h"
using namespace std;

int main() {
    vector<int> nums = {4,6,7,7};
    vector<vector<int>> res = Solution().findSubsequences(nums);

    for (auto& i: res){
        for (auto& ii:i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }
    return 0;
}