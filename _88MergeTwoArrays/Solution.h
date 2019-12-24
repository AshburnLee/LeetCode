#ifndef _88MERGETWOARRAY_SOLUTION_H
#define _88MERGETWOARRAY_SOLUTION_H

#include <iostream>
#include <vector>
using namespace std;

class Solution{
    publilc:
    vector<int> merge2(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0; //def
        int j=0;  //def
        int k=0; //def

        vector<int> arr(m+n);
        while(i<m || j< n){
            if(nums1[i] <= nums2[j])
                arr[k++] = nums1[i++];
            else
                arr[k++] = nums2[j++];
        }
        return arr;

    }
};


#endif  // _88MERGETWOARRAY_SOLUTION_H
