#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // time: O(nlogn)
    // space: O(1)
    vector<int> findDuplicates2(vector<int>& nums) {
        vector<int> res;
        sort(nums.begin(), nums.end());
        for (int i=1; i<nums.size(); i++)
            if (nums[i] == nums[i-1])
                res.push_back(nums[i]);
    
        return res;
    }

    // time: O(n)
    // space: O(1) no extra space used
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            nums[abs(nums[i])-1]=-nums[abs(nums[i])-1];
            cout<<nums[abs(nums[i])-1]<<endl;
            if(nums[abs(nums[i])-1]>0)
                res.push_back(abs(nums[i]));
        }
        return res;
    }

};

int main(int argc, char const *argv[])
{
    int test[] = {4,3,2,7,8,2,3,1};
    vector<int> arr(test, test+sizeof(test)/sizeof(int));

    vector<int> res = Solution().findDuplicates(arr);
    for (auto _: res)
        cout<<_<<" ";
    cout<<endl;
    return 0;
}
