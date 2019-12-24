#ifndef _88MERGETWOARRAY_SOLUTION2_H
#define _88MERGETWOARRAY_SOLUTION2_H

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
class Solution2{
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // make a copy of nums1 with no 0s
        int k=0;
        for(int i=m-1; nums1[i]==0; i--)
            k=i;
        vector<int> tmp(k);
        for(int i=k-1; i>=0;i--)
            tmp[i] = nums1[i];

        //merge tmp & nums2 to nums1
        int i=0;
        int j=0;
        int q=0;
        while(q < m){
            if(nums2[i] <= tmp[j])
                nums1[q++] = nums2[i++];
            else
                nums1[q++] = tmp[j++];
        }
    }
};
#endif  // _88MERGETWOARRAY_SOLUTION2_H

