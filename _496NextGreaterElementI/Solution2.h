#ifndef _496NEXTGREATERELEMENTI_SOLUTION2_H
#define _496NEXTGREATERELEMENTI_SOLUTION2_H

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

/// tiem: O(M*M)
/// space: O(N)
class Solution2{
public:
	vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
		
		for (int i=0; i<nums2.size(); i++){
            
            for (int j=i; j<nums2.size(); j++){
                if (j+1 < nums2.size() && nums2[j+1] > nums2[i]){
                    mp[nums2[i]] = nums2[j+1];
					break;
				}
                else if(j+1 >= nums2.size())
                    mp[nums2[i]] = -1;                
            }
            
        }
        vector<int> res;
        for (auto num: nums1)
			res.push_back(mp[num]);

        return res;
    }	
};

#endif
