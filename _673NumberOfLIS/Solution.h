#include <iostream>
#include <vector>
using namespace std;

class Solution{
public:
    int findNumberOfLIS(vector<int>& nums) {
        if (nums.size() == 0)
            return 0;

        // calculate memo & memo2
        vector<int> memo(nums.size(), 1);
        vector<int> memo2(nums.size(), 1);
        
        for (int i=1; i<nums.size(); i++){
            for (int j=0; j<i; j++){
                if (nums[i]>nums[j]){
			if (memo[j] >= memo[i]){
				memo[i] = memo[j]+1;
				memo2[i] = memo2[j];
			}else if (memo[j]+1 == memo[i])
				memo2[i] += memo2[j];
				}
			}

        }

        // get max length
        int longest = 0;
        for (int i=0; i<memo.size(); i++)
            longest = max(longest, memo[i]);
        
		int res = 0;
		for (int i=0;i<memo.size(); i++){
			if (memo[i] == longest){
				res += memo2[i];
            }
        }
		for (auto i: memo)
			cout<<i<<" ";
		cout<<endl;
		for (auto i: memo2)
			cout<<i<<" ";
		cout<<endl;

        return  res;
    }
};

