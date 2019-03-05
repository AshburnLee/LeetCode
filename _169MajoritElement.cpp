#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution {
public:
    int majorityElement2(vector<int>& nums) {
        map<int, int> freq;
        // count key and value
        for(auto _:nums)
            freq[_]++;

        // cur records the object with the highest value
        auto cur = freq.begin();
        for(auto i = cur; i != freq.end(); i++){
            if(cur->second < i->second) 
                cur = i;
        }
        return cur->first;       
    }

    // 
    int majorityElement(vector<int> &nums){
        sort(nums.begin(), nums.end());
    return nums[nums.size() / 2];
}
};

int main(int argc, char const *argv[])
{
    int test[] = {4,4,3,3,3,4,4};
    vector<int> nums(test, test+sizeof(test)/sizeof(int));
    
    cout<<Solution().majorityElement(nums)<<endl;
    return 0;
}

