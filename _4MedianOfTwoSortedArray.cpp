//
// Created by junhui on 19/03/19.
//
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // merge to sorted array
    // time: O(M+N)
    //space: O(M+N)
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> aux(n+m ,1);

        int i=0,j=0,k=0;
        for (k=0; k< m+n; k++){

            if (i>=m)
                aux[k] = nums2[j++];

            else if (j>=n)
                aux[k] = nums1[i++];

            else if(nums1[i] < nums2[j] && i<m && j<n)
                aux[k] = nums1[i++];

            else if (nums1[i] >= nums2[j] && i<m && j<n)
                aux[k] = nums2[j++];
        }


        double res = 0.0;
        if((m+n)%2 == 0)
            res = 0.5*(aux[(m+n)/2] + aux[(m+n)/2-1]);
        else if((m+n)%2 == 1)
            res = (aux[(m+n)/2]);

        return res;
    }
};

int main(int argc, char** argv){

    vector<int> a = {1,3};
    vector<int> b = {2};
    cout<<Solution().findMedianSortedArrays(a, b)<<endl;
    return 0;
}