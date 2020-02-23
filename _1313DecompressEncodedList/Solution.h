#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	vector<int> decompressList(vector<int>& nums){
		vector<int> res;

		for(int i=0;i<nums.size();i+=2){
			vector<int> buffer(nums[i], nums[i+1]);
			for(auto item:buffer)
				res.push_back(item);

		}
		return res;
	}
};
