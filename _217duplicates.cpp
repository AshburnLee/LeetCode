#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

static int fast_io = []() { std::ios::sync_with_stdio(false); cin.tie(nullptr); return 0; }();

class Solution {
public:
    //O(n^2)
    bool containsDuplicate2(vector<int>& nums) {
        for (int i=0;i<nums.size();i++)
            for (int j=i+1; j<nums.size();j++)
                if (nums[i] == nums[j])
                    return true;
        return false;
    }
    //O(n)
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> my;
        for (int i=0;i<nums.size();i++)
            my.insert(nums[i]);
        
        if (my.size() < nums.size())
            return true;
        return false;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> test = {1,2,4,8,5};
    Solution sol;
    cout<<sol.containsDuplicate(test)<<endl;
    return 0;
}
