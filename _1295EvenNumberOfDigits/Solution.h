#include <iostream>
#include <vector>

using namespace std;

class Solution{
public:
	int findNumbers(vector<int>& nums){
		int res=0;
		for(auto item: nums){
			int count=0;
			while(item!=0){
				count++;
				item/=10;
			}
			if(count%2==0) res++;
		}	
		return res;
	}
};
