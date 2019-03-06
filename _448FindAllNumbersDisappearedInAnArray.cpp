#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

class Solution {
public:
    // time: O(nlogn) set constructor
    // space: O(n)
    vector<int> findDisappearedNumbers2(vector<int>& nums) {
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

    // just brillaint
    // attach this information [ -, -, -, -, +, +, -, -] on the original array without generating a new array
    vector<int> findDisappearedNumbers3(vector<int>& nums) {
        int len = nums.size();
        for(int i=0; i<len; i++) {
            int m = abs(nums[i])-1; // index start from 0
            
            nums[m] = nums[m]>0 ? -nums[m] : nums[m];
            cout<<m<<": "<<nums[m]<<endl;
        }
        for (auto _: nums)
            cout<<_<<" ";
        cout<<endl;

        vector<int> res;
        for(int i = 0; i<len; i++) {
            if(nums[i] > 0) res.push_back(i+1);
        }
        return res;
    }

    // O(N)
    // O(N)
    // It is very intuitive to come up with using O(N) space to store the information.
    // [ 4, 3, 2, 7, 8, 2, 3, 1] we can use a binary array (O(N) space) to count it. [ 1, 1, 1, 1, 0, 0, 1, 1]
    vector<int> findDisappearedNumbers(vector<int>& nums){
        int len = nums.size();
        vector<int> tmp(len, 0);

        for (int i=0; i<len; i++){
            if (tmp[nums[i]-1] == 0){
                tmp[nums[i]-1] ++;
            }
        }
        // tmp: [1,1,1,1,0,0,1,1]
        vector<int> res;
        for(int i = 0; i<len; i++) {
            if(tmp[i] == 0) res.push_back(i+1);
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    int test[] = {4,3,2,7,8,2,3,1};
    vector<int> nums(test, test + sizeof(test)/sizeof(int));

    vector<int> res = Solution().findDisappearedNumbers(nums);
    for (auto _:res)
        cout<<_<<" ";
    cout<<endl;
    
    return 0;
}
