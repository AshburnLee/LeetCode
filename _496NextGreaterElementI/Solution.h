#ifndef _496NEXTGREATERELEMENTI_SOLUTION_H
#define _496NEXTGREATERELEMENTI_SOLUTION_H

#include <iostream>
#include <vector>

using namespace std;

/// tiem: O(M*N)
/// space: O(M)
class Solution{
public:
	    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for (int i=0; i<nums1.size(); i++){
            int k = 0;
            for (int j=0; j<nums2.size(); j++){
                if (nums2[j]== nums1[i])
                    k=j;
            }
            for (int j=k; j<nums2.size(); j++){
                if (j+1 < nums2.size() && nums2[j+1]>nums1[i]){
                    res.push_back(nums2[j+1]);
					break;
				}
                else if(j+1 >= nums2.size())
                    res.push_back(-1);                
            }
            
        }
        
        return res;
    }	
};

#endif
