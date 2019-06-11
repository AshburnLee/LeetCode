#include <iostream>
#include "Solution.h"
#include "Solution2.h"

using namespace std;

void printVec(vector<vector<int>>& vec){
    for (auto i: vec){
        for (auto ii: i){
            cout<<ii<<" ";
        }
        cout<<endl;
    }
}


int main(int argc, char** argv){
    vector<int> nums = {8,7,4,3};

    vector<vector<int>> res = Solution().CombinationSum(nums, 11);
    printVec(res);

    cout<<endl;

    vector<vector<int>> res2 = Solution2().CombinationSum(nums, 11);
    printVec(res2);

    return 0;
}
