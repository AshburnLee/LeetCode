#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;


static int fast_io = []() { std::ios::sync_with_stdio(false); cin.tie(nullptr); return 0; }();

class Solution {
public:
    // O(n^2)
    bool containsNearbyDuplicate2(vector<int>& nums, int k) {
        for (int i=0;i<nums.size();i++)
            for (int j=i+1; j<nums.size();j++)
                if (nums[i] == nums[j] && j-i<=k)
                    return true;
        return false;
    }

    //O(n)
    // O(k): the spcace of record
    bool containsNearbyDuplicate(vector<int>& nums, int k) {

        unordered_set<int> record;

        for (int i=0;i<nums.size();i++){
            if (record.find(nums[i]) != record.end()) // 
                return true;
            record.insert(nums[i]);

            //
            if(record.size() == k+1)
                record.erase(nums[i-k]);
        }
        return false;
    }
};

int main(int argc, char const *argv[])
{
    vector<int> test = {1};
    Solution sol;
    cout<<sol.containsNearbyDuplicate(test, 1)<<endl;
    return 0;
}
