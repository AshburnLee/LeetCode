#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        // sort and return size
        int n = nums.size();
        // remove duplicated items with sorted result
        set<int> myset(nums.begin(), nums.end());
        vector<int> myvec(myset.begin(), myset.end());
        vector<int> tmp(n, 0);

        // construct tmp
        for (int i=0;i<myvec.size(); i++){
            tmp[myvec[i]-1] = myvec[i]; 
        }

        // pushback what is missing to res
        for (int i=0;i<tmp.size();i++){
            if (tmp[i] != i+1)
                res.push_back(i+1);
        }
        // for (auto _:res)
        //     cout<<_<<" ";
        // cout<<endl;
        return res;
    }
};

int main(int argc, char const *argv[])
{
    int test[] = {4,3,2,7,8,2,3,1};
    vector<int> nums(test, test + sizeof(test)/sizeof(int));

    Solution().findDisappearedNumbers(nums);
    
    return 0;
}
