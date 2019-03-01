#include <iostream>
#include <set>
#include <vector>

using namespace  std;
class Solution {
public:
    // O(n)
    // O(k): record 
    bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
        set<long long> record;
        
        for (int i=0;i<nums.size();i++){
            // if (record.find(nums[i]) != record.end()) // 
            //     return true;
            if (record.lower_bound((long long)nums[i] - (long long)t) != record.end() && *record.lower_bound((long long)nums[i] - (long long)t) <= (long long)nums[i] + (long long)t)
                return true;
            record.insert(nums[i]);

            //
            if(record.size() == k+1)
                record.erase(nums[i-k]);
        }
        return false;
    }
};

int main(int argc, char** argv){
    vector<int> test={1, 2147483647};
    Solution sol;
    cout<<sol.containsNearbyAlmostDuplicate(test, 3,2)<<endl;

    long long x= 2147483647;
    cout<<x<<endl;
    return 0;
}


