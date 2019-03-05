#include <algorithm>
#include <iostream>
#include <vector>
#include <cassert>
#include <map>
using namespace std;
class Solution {
public:
    // not a solutoin for some cases
    int thirdMax2(vector<int>& nums) {
        assert(nums.size() != 0);
        sort(nums.begin(), nums.end(), myfunction);
        if(nums.size() < 3)
            return nums[0];

        cout<<endl;
        int count =1;
        int i = 1;
        int cur = 0;
        while (count < 3){
            if (nums[i] != nums[cur]){
                count++;
                cur = i;
                i++;
            }else{
                i++;
            }
        }
        return nums[cur];
    }
    bool static myfunction (int i,int j) { return (i>j); }

    // time: O(N)
    // space : O(N)
    int thirdMax(vector<int>& nums){
        map<int,int> freq;
        for (auto _: nums)
            freq[_] ++;
        
        if (freq.size() == 1){
            auto itr1 = freq.begin();
            return itr1->first;
        }

        if (freq.size() == 2){
            auto itr2 = freq.begin();
            return (++itr2)->first;
        }

        int count = 0;
        for (map<int,int>::reverse_iterator itr = freq.rbegin(); itr!=freq.rend(); itr++){
                count ++;
                if (count == 3){
                    return itr->first;
            }
        }
        return 0;
    }
};

int main(int argc, char const *argv[])
{
    int test[] = {2,2,4,1};
    vector<int> nums(test, test+sizeof(test)/sizeof(int));
    cout<<Solution().thirdMax(nums)<<endl;

    return 0;
}
