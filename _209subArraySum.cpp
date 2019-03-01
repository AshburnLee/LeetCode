#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

class Solution {
public:
    // O(n^3)
    // to slow
    int minSubArrayLen2(int s, vector<int>& nums) {
        if (nums.size() == 0)
            return 0;
        
        for (int gap=0; gap<nums.size(); gap++)
            for (int i=0; i<nums.size()-gap; i++){
                int sum = 0;
                for (int k=i;k<=i+gap;k++){
                    sum = sum + nums[k];
                }
                if(sum >= s)
                    return gap+1;
            }
        return 0;
    }

    //final solution
    int minSubArrayLen(int s, vector<int>& nums) {
        int l = 0;
        int r = -1;
        int sum = 0;
        int res = nums.size() +1;
        while(l<nums.size()){
            if(sum <s && r+1 < nums.size()) sum = sum + nums[++r];
            else sum = sum -nums[l++];
            if (sum >= s) res = min(res, r-l+1);
        }
        if (res == nums.size()+1) return 0;
        return res;
    }


};

int main(int argc, char const *argv[])
{
    vector<int> test = {7};
    Solution sol;
    cout<<sol.minSubArrayLen(7, test)<<endl;
    
    return 0;
}
