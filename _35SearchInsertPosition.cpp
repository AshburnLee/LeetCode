#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (nums.empty())
            return 0;
        int res;
        for (int i=0; i<nums.size(); i++){
            if ( nums[i]>target )
                return res = i;
            else if( nums[i] == target )
                return res = i;
            else if( i == nums.size()-1 && nums[i]<target )
                return res = nums.size();
        }
        return res;
    }
};

int main(int argc, char const *argv[])
{
    int myints[] = {};

    vector<int> test (myints, myints + sizeof(myints) / sizeof(int) );
    cout<<Solution().searchInsert(test, 4)<<endl;
    cout<<Solution().searchInsert(test, 6)<<endl;
    cout<<Solution().searchInsert(test, 7)<<endl;
    return 0;
}
