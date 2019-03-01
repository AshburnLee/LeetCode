#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // only works for sorted array
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
            return 0;
        // sort(nums.begin(), nums.end());
        int i = 1; //def
        int j = 0; //def
        for (i;i<nums.size();i++){
            if (nums[i] == nums[j])
                continue;
            else
                nums[++j] = nums[i];
        }
        return j+1;
    }
};

int main(int argc, char** argv) {
    vector<int> test = {2,2,4,4,4,4,5,6,7,7,7};
    
    Solution sol;
    cout<<sol.removeDuplicates(test)<<endl;
}